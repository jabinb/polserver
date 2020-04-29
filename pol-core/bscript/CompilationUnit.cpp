//
// Created by Eric Swanson on 4/28/20.
//

#include "CompilationUnit.h"

#include "../clib/logfacility.h"

#include "EscriptCompilerVisitor.h"

namespace Pol
{
namespace Bscript
{

CompilationUnit::CompilationUnit( const std::string& pathname )
    : pathname( pathname ),
      input( pathname ),
      lexer( &input ),
      tokens( &lexer ),
      parser( &tokens )
{
  auto compilationUnit = parser.compilationUnit();

  EscriptCompilerVisitor visitor;
  visitor.visit( compilationUnit );

  INFO_PRINT << "compilation unit has " << compilationUnit->topLevelDeclaration().size()
             << " top-level declarations.\n";
}

}  // namespace Bscript
}  // namespace Pol