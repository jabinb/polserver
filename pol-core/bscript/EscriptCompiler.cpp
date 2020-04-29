//
// Created by Eric Swanson on 4/27/20.
//

#include "EscriptCompiler.h"

#include <iostream>

#include "antlr4-runtime.h"

#include "../clib/fileutil.h"
#include "../clib/logfacility.h"

#include "EscriptCompilerVisitor.h"
#include <EscriptGrammar/EscriptLexer.h>
#include <EscriptGrammar/EscriptParser.h>

using antlr4::ANTLRInputStream;
using antlr4::CommonTokenStream;
using EscriptGrammar::EscriptLexer;
using EscriptGrammar::EscriptParser;

namespace Pol
{
namespace Bscript
{


int EscriptCompiler::compileFile( const std::string& filename )
{
  auto pathname = Clib::FullPath( filename.c_str() );
  std::ifstream stream( pathname );

  ANTLRInputStream input( stream );
  EscriptLexer lexer( &input );
  input.name = pathname;
  CommonTokenStream tokens( &lexer );
  EscriptGrammar::EscriptParser parser( &tokens );

  auto compilationUnit = parser.compilationUnit();

  EscriptCompilerVisitor visitor;
  visitor.visit(compilationUnit);

  INFO_PRINT << "compilation unit has " << compilationUnit->topLevelDeclaration().size()
             << " top-level declarations.\n";

  // 1. load source file and all included files
  // 2. read function declarations and constants
  // 3. process code that isn't in functions
  // 4. process PROGRAM section
  // 5. process referenced methods

  // process:
  //    analyze and attach attributes
  //    optimize
  //    generate code
  //

  // TODO figure out how to detect and report errors
  return (compilationUnit != NULL) ? 0 : -1;
}

}  // namespace Bscript
}  // namespace Pol
