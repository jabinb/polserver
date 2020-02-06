set (pol_sources  # sorted !
  CMakeSources.cmake 
  PolMain.cpp
  PolMain.h
  StdAfx.h
  accounts/account.cpp
  accounts/account.h
  accounts/accounts.cpp
  accounts/accounts.h
  accounts/acscrobj.cpp
  accounts/acscrobj.h
  action.h
  allocd.cpp
  allocd.h
  anim.h
  baseobject.h
  binaryfilescrobj.cpp
  binaryfilescrobj.h
  bowsalut.cpp
  cfgrepos.cpp
  cfgrepos.h
  checkpnt.cpp
  checkpnt.h
  clfunc.cpp
  clfunc.h
  cmbtcfg.cpp
  cmbtcfg.h
  cmdlevel.cpp
  cmdlevel.h
  config.h
  console.cpp
  console.h
  containr.cpp
  containr.h
  core.cpp
  core.h
  create.cpp
  crypt/blowfish.cpp
  crypt/blowfish.h
  crypt/crypt.cpp
  crypt/crypt.h
  crypt/cryptbase.cpp
  crypt/cryptbase.h
  crypt/cryptengine.cpp
  crypt/cryptengine.h
  crypt/cryptkey.cpp
  crypt/cryptkey.h
  crypt/logincrypt.cpp
  crypt/logincrypt.h
  crypt/md5.cpp
  crypt/md5.h
  crypt/twofish.cpp
  crypt/twofish.h
  ctable.cpp
  ctable.h
  dblclick.cpp
  decay.cpp
  decay.h
  dice.cpp
  dice.h
  door.cpp
  door.h
  dropitem.cpp
  dynproperties.cpp
  dynproperties.h
  eqpitem.cpp
  equipdsc.cpp
  equipdsc.h
  eventid.h
  exscrobj.cpp
  exscrobj.h
  extobj.cpp
  extobj.h
  fnsearch.cpp
  fnsearch.h
  gameclck.cpp
  gameclck.h
  getitem.cpp
  getitem.h
  getmsg.cpp
  globals/memoryusage.cpp
  globals/memoryusage.h
  globals/multidefs.cpp
  globals/multidefs.h
  globals/network.cpp
  globals/network.h
  globals/object_storage.cpp
  globals/object_storage.h
  globals/script_internals.cpp
  globals/script_internals.h
  globals/settings.cpp
  globals/settings.h
  globals/state.cpp
  globals/state.h
  globals/ucfg.cpp
  globals/ucfg.h
  globals/uvars.cpp
  globals/uvars.h
  guardrgn.cpp
  guardrgn.h
  guilds.cpp
  guilds.h
  guildscrobj.cpp
  guildscrobj.h
  help.cpp
  irequest.cpp
  item/armor.cpp
  item/armor.h
  item/armrtmpl.h
  item/equipmnt.cpp
  item/equipmnt.h
  item/item.cpp
  item/item.h
  item/item00.cpp
  item/itemcr.cpp
  item/itemdesc.cpp
  item/itemdesc.h
  item/weapon.cpp
  item/weapon.h
  item/wepntmpl.h
  landtile.cpp
  landtile.h
  layers.h
  lightlvl.h
  listenpt.cpp
  listenpt.h
  loaddata.cpp
  loaddata.h
  loadunld.cpp
  loadunld.h
  lockable.cpp
  lockable.h
  login.cpp
  los.h
  mdelta.h
  menu.cpp
  menu.h
  menusel.cpp
  miscmsg.cpp
  miscrgn.cpp
  miscrgn.h
  mkscrobj.cpp
  mkscrobj.h
  mobile/attack.cpp
  mobile/attribute.cpp
  mobile/attribute.h
  mobile/boundbox.cpp
  mobile/boundbox.h
  mobile/charactr.cpp
  mobile/charactr.h
  mobile/chrcast.cpp
  mobile/chrituse.cpp
  mobile/chrskuse.cpp
  mobile/combat.cpp
  mobile/combat.h
  mobile/corpse.cpp
  mobile/corpse.h
  mobile/npc.cpp
  mobile/npc.h
  mobile/privupdater.h
  mobile/ufacing.cpp
  mobile/ufacing.h
  mobile/wornitems.cpp
  mobile/wornitems.h
  module/attributemod.cpp
  module/attributemod.h
  module/basiciomod.cpp
  module/basiciomod.h
  module/basicmod.cpp
  module/basicmod.h
  module/boatmod.cpp
  module/boatmod.h
  module/cfgmod.cpp
  module/cfgmod.h
  module/clmod.cpp
  module/clmod.h
  module/datastore.cpp
  module/datastore.h
  module/datastoreimp.h
  module/fileaccess.h
  module/filemod.cpp
  module/filemod.h
  module/guildmod.cpp
  module/guildmod.h
  module/httpmod.cpp
  module/httpmod.h
  module/mathmod.cpp
  module/mathmod.h
  module/npcmod.cpp
  module/npcmod.h
  module/osmod.cpp
  module/osmod.h
  module/partymod.cpp
  module/partymod.h
  module/polsystemmod.cpp
  module/polsystemmod.h
  module/sqlmod.cpp
  module/sqlmod.h
  module/storagemod.cpp
  module/storagemod.h
  module/unimod.cpp
  module/unimod.h
  module/uomod.cpp
  module/uomod.h
  module/uomod2.cpp
  module/uomod3.cpp
  module/uomod4.cpp
  module/utilmod.cpp
  module/utilmod.h
  module/vitalmod.cpp
  module/vitalmod.h
  movecost.cpp
  movecost.h
  movement.cpp
  multi/boat.cpp
  multi/boat.h
  multi/boatcomp.cpp
  multi/boatcomp.h
  multi/customhousehelp.cpp
  multi/customhouses.cpp
  multi/customhouses.h
  multi/house.cpp
  multi/house.h
  multi/multi.h
  multi/multicfg.cpp
  multi/multicr.cpp
  multi/multidef.cpp
  multi/multidef.h
  multi/multidef2.cpp
  multi/multis.cpp
  musicrgn.cpp
  musicrgn.h
  network/auxclient.cpp
  network/auxclient.h
  network/bannedips.cpp
  network/bannedips.h
  network/cgdata.cpp
  network/cgdata.h
  network/client.cpp
  network/client.h
  network/clientio.cpp
  network/clientio.h
  network/clientthread.cpp
  network/clientthread.h
  network/clienttransmit.cpp
  network/clienttransmit.h
  network/cliface.cpp
  network/cliface.h
  network/iostats.cpp
  network/iostats.h
  network/msgfiltr.cpp
  network/msgfiltr.h
  network/msghandl.cpp
  network/msghandl.h
  network/packetdefs.cpp
  network/packetdefs.h
  network/packethelper.h
  network/packethooks.cpp
  network/packethooks.h
  network/packetinterface.h
  network/packets.cpp
  network/packets.h
  network/pktboth.h
  network/pktbothid.h
  network/pktdef.h
  network/pktin.h
  network/pktinid.h
  network/pktni.h
  network/pktniid.h
  network/pktout.h
  network/pktoutid.h
  network/sockio.cpp
  network/sockio.h
  network/xbuffer.h
  npctemplates.cpp
  npctmpl.cpp
  npctmpl.h
  objecthash.cpp
  objecthash.h
  objtype.h
  packetscrobj.cpp
  packetscrobj.h
  party.cpp
  party.h
  party_cfg.h
  partyscrobj.cpp
  partyscrobj.h
  pol.cpp
  pol.h
  pol.rc
  polcfg.cpp
  polcfg.h
  polclass.h
  polclock.cpp
  polclock.h
  poldbg.cpp
  poldbg.h
  polmodl.cpp
  polmodl.h
  polobject.cpp
  polobject.h
  polresource.h
  polsem.cpp
  polsem.h
  polsig.cpp
  polsig.h
  polstats.cpp
  polstats.h
  poltimer.h
  poltray.ico
  polvar.h
  polwww.cpp
  polwww.h
  procscrobj.cpp
  procscrobj.h
  profile.h
  property.h
  proplist.cpp
  proplist.h
  realms.cpp
  realms.h
  realms/WorldChangeReasons.h
  realms/realm.cpp
  realms/realm.h
  realms/realmfunc.cpp
  realms/realmlos.cpp
  reftypes.cpp
  reftypes.h
  region.cpp
  region.h
  repsys.cpp
  repsys.h
  repsys_cfg.h
  resource.cpp
  resource.h
  savedata.cpp
  savedata.h
  schedule.cpp
  schedule.h
  scrdef.cpp
  scrdef.h
  scrsched.cpp
  scrsched.h
  scrstore.cpp
  scrstore.h
  servdesc.h
  sfx.h
  skilladv.cpp
  skilladv.h
  skillid.h
  skills.h
  sngclick.cpp
  sngclick.h
  speech.cpp
  spelbook.cpp
  spelbook.h
  spells.cpp
  spells.h
  sqlscrobj.cpp
  sqlscrobj.h
  ssopt.cpp
  ssopt.h
  stackcfg.cpp
  stackcfg.h
  startloc.cpp
  startloc.h
  statmsg.cpp
  statmsg.h
  storage.cpp
  storage.h
  syshook.cpp
  syshook.h
  syshookscript.cpp
  syshookscript.h
  target.cpp
  target.h
  tasks.cpp
  tasks.h
  testing/poltest.cpp
  testing/poltest.h
  testing/testdrop.cpp
  testing/testenv.cpp
  testing/testenv.h
  testing/testlos.cpp
  testing/testmisc.cpp
  testing/testskill.cpp
  testing/testwalk.cpp
  textcmd.cpp
  textcmd.h
  tildecmd.cpp
  tildecmd.h
  tiplist.h
  tiplstwn.cpp
  tips.cpp
  tooltips.cpp
  tooltips.h
  ufunc.cpp
  ufunc.h
  ufunc2.cpp
  ufuncinl.h
  ufuncstd.h
  uimport.cpp
  uimport.h
  umanip.h
  umap.cpp
  umap.h
  uobjcnt.cpp
  uobjcnt.h
  uobject.cpp
  uobject.h
  uoclient.cpp
  uoclient.h
  uoexec.cpp
  uoexec.h
  uolisten.cpp
  uopathnode.h
  uoscrobj.cpp
  uoscrobj.h
  uoskills.cpp
  uoskills.h
  useskill.cpp
  utype.h
  uworld.cpp
  uworld.h
  vital.cpp
  vital.h
  watch.h
  wthrtype.h
  xmlfilescrobj.cpp
  xmlfilescrobj.h
  zone.cpp
  zone.h
)
if(windows)
  set (pol_sources ${pol_sources}
    polservice.cpp
  )
endif()
