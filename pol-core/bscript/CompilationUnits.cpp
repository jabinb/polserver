//
// Created by Eric Swanson on 4/28/20.
//

#include "CompilationUnits.h"

#include <iterator>

#include "CompilationUnit.h"

namespace Pol
{
namespace Bscript
{

CompilationUnits::~CompilationUnits()
{
  for ( auto unit : files_in_order )
  {
    delete unit;
  }
  files_in_order.clear();
  files.clear();
}

void CompilationUnits::load( const std::string& pathname )
{
  if ( files.count( pathname ) )
    return;

  files[pathname] = new CompilationUnit( pathname );
}

}  // namespace Bscript
}  // namespace Pol
