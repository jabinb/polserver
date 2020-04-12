/** @file
 *
 * @par History
 * - 2009/07/23 MuadDib:   updates for new Enum::Packet Out ID
 * - 2009/09/03 MuadDib:   Relocation of multi related cpp/h
 * - 2010/01/22 Turley:    Speedhack Prevention System
 */


#include <stddef.h>

#include "../clib/rawtypes.h"
#include "../plib/uconst.h"
#include "mobile/charactr.h"
#include "multi/customhouses.h"
#include "multi/house.h"
#include "multi/multi.h"
#include "network/client.h"
#include "network/packetdefs.h"
#include "network/packethelper.h"
#include "network/packets.h"
#include "network/pktdef.h"
#include "network/pktin.h"
#include "ufunc.h"
#include "uworld.h"

namespace Pol
{
namespace Core
{
void cancel_trade( Mobile::Character* chr1 );

void send_char_if_newly_inrange( Mobile::Character* chr, Network::Client* client )
{
  if ( inrange( chr, client->chr ) &&
       !inrange( chr->pos().xy(),
                 client->chr->lastxyz.xy() ) &&  // TODO lastxyz should contain realm
       client->chr->is_visible_to_me( chr ) &&
       client->chr != chr )
  {
    send_owncreate( client, chr );
  }
}

void send_item_if_newly_inrange( Items::Item* item, Network::Client* client )
{
  if ( inrange( client->chr, item ) &&
       !inrange( item->toplevel_pos().xy(), client->chr->lastxyz.xy() ) )
  {
    send_item( client, item );
  }
}

void send_multi_if_newly_inrange( Multi::UMulti* multi, Network::Client* client )
{
  if ( multi_inrange( client->chr, multi ) &&
       !multi_inrange( multi->pos().xy(), client->chr->lastxyz.xy() ) )
  {
    send_multi( client, multi );
    Multi::UHouse* house = multi->as_house();
    if ( ( client->UOExpansionFlag & Network::AOS ) && house != nullptr && house->IsCustom() )
      Multi::CustomHousesSendShort( house, client );
  }
}

void send_objects_newly_inrange( Network::Client* client )
{
  Mobile::Character* chr = client->chr;

  WorldIterator<MobileFilter>::InVisualRange(
      chr, [&]( Mobile::Character* zonechr ) { send_char_if_newly_inrange( zonechr, client ); } );
  WorldIterator<ItemFilter>::InVisualRange(
      chr, [&]( Items::Item* zoneitem ) { send_item_if_newly_inrange( zoneitem, client ); } );
  WorldIterator<MultiFilter>::InRange(
      chr->pos(), RANGE_VISUAL_LARGE_BUILDINGS,
      [&]( Multi::UMulti* zonemulti ) { send_multi_if_newly_inrange( zonemulti, client ); } );
}

void send_objects_newly_inrange_on_boat( Network::Client* client, u32 serial )
{
  Mobile::Character* chr = client->chr;

  if ( client->ClientType & Network::CLIENTTYPE_7090 )
  {
    WorldIterator<MobileFilter>::InVisualRange( chr, [&]( Mobile::Character* zonechr ) {
      Multi::UMulti* multi = zonechr->supporting_multi();

      if ( multi != nullptr && multi->serial == serial )
        return;

      send_char_if_newly_inrange( zonechr, client );
    } );
    WorldIterator<ItemFilter>::InVisualRange( chr, [&]( Items::Item* zoneitem ) {
      Multi::UMulti* multi = zoneitem->supporting_multi();

      if ( multi != nullptr && multi->serial == serial )
        return;

      send_item_if_newly_inrange( zoneitem, client );
    } );
    WorldIterator<MultiFilter>::InRange( chr->pos(), RANGE_VISUAL_LARGE_BUILDINGS,
                                         [&]( Multi::UMulti* zonemulti ) {
                                           if ( zonemulti->serial == serial )
                                             return;

                                           send_multi_if_newly_inrange( zonemulti, client );
                                         } );
  }
  else
  {
    WorldIterator<MobileFilter>::InVisualRange(
        chr, [&]( Mobile::Character* zonechr ) { send_char_if_newly_inrange( zonechr, client ); } );
    WorldIterator<ItemFilter>::InVisualRange(
        chr, [&]( Items::Item* zoneitem ) { send_item_if_newly_inrange( zoneitem, client ); } );
    WorldIterator<MultiFilter>::InRange(
        chr->pos(), RANGE_VISUAL_LARGE_BUILDINGS,
        [&]( Multi::UMulti* zonemulti ) { send_multi_if_newly_inrange( zonemulti, client ); } );
  }
}

void remove_objects_inrange( Network::Client* client )
{
  Mobile::Character* chr = client->chr;
  Network::RemoveObjectPkt msgremove( chr->serial_ext );

  WorldIterator<MobileFilter>::InVisualRange( chr, [&]( Mobile::Character* zonechar ) {
    send_remove_character( client, zonechar, msgremove );
  } );
  WorldIterator<ItemFilter>::InVisualRange(
      chr, [&]( Items::Item* item ) { send_remove_object( client, item, msgremove ); } );
  WorldIterator<MultiFilter>::InRange(
      chr->pos(), RANGE_VISUAL_LARGE_BUILDINGS,
      [&]( Multi::UMulti* multi ) { send_remove_object( client, multi, msgremove ); } );
}


void handle_walk( Network::Client* client, PKTIN_02* msg02 )
{
  Mobile::Character* chr = client->chr;

  if ( ( client->movementsequence == 0 ) && ( msg02->movenum != 0 ) )
  {
    // drop pkt if last request was denied, should fix the "client hopping"

    /*PktHelper::PacketOut<PktOut_21> msg;
    msg->Write<u8>(msg02->movenum);
    msg->WriteFlipped<u16>(chr->x);
    msg->WriteFlipped<u16>(chr->y);
    msg->Write<u8>(chr->facing);
    msg->Write<s8>(chr->z);
    msg.Send(client);*/

    return;
  }
  else
  {
    u8 oldfacing = chr->facing;

    if ( chr->move( msg02->dir ) )
    {
      // If facing is dir they are walking, check to see if already 4 tiles away
      // from the person trading with. If so, cancel trading!!!!
      if ( !settingsManager.ssopt.allow_moving_trade )
      {
        if ( chr->is_trading() )
        {
          if ( ( oldfacing == ( msg02->dir & PKTIN_02_FACING_MASK ) ) &&
               ( !chr->pos().inRange( chr->trading_with->pos(), 3 ) ) )
          {
            cancel_trade( chr );
          }
        }
      }
      client->pause();
      Network::PktHelper::PacketOut<Network::PktOut_22> msg;
      msg->Write<u8>( msg02->movenum );
      msg->Write<u8>( client->chr->hilite_color_idx( client->chr ) );
      msg.Send( client );

      client->movementsequence = msg02->movenum;
      if ( client->movementsequence == 255 )
        client->movementsequence = 1;
      else
        client->movementsequence++;


      // FIXME: Make sure we only tell those who can see us.
      chr->tellmove();

      send_objects_newly_inrange( client );

      client->restart();

      // here we set the delay for SpeedHackPrevention see Client::SpeedHackPrevention()
      if ( oldfacing == ( msg02->dir & PKTIN_02_FACING_MASK ) )
      {
        if ( client->chr->on_mount() )
          client->next_movement += ( msg02->dir & PKTIN_02_DIR_RUNNING_BIT )
                                       ? settingsManager.ssopt.speedhack_mountrundelay
                                       : settingsManager.ssopt.speedhack_mountwalkdelay;
        else
          client->next_movement += ( msg02->dir & PKTIN_02_DIR_RUNNING_BIT )
                                       ? settingsManager.ssopt.speedhack_footrundelay
                                       : settingsManager.ssopt.speedhack_footwalkdelay;
      }
      else  // changing only facing is fast
        client->next_movement += settingsManager.ssopt.speedhack_mountrundelay;
    }
    else
    {
      Network::PktHelper::PacketOut<Network::PktOut_21> msg;
      msg->Write<u8>( msg02->movenum );
      msg->WriteFlipped<u16>( chr->x() );
      msg->WriteFlipped<u16>( chr->y() );
      msg->Write<u8>( chr->facing );
      msg->Write<s8>( chr->z() );
      msg.Send( client );
      client->movementsequence = 0;
    }
  }
}
}  // namespace Core
}  // namespace Pol
