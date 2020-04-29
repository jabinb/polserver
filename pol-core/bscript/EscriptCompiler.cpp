//
// Created by Eric Swanson on 4/27/20.
//

#include "EscriptCompiler.h"

#include <iostream>

#include "antlr4-runtime.h"

#include "../clib/fileutil.h"
#include "../clib/logfacility.h"

#include "CompilationUnit.h"
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
  //std::ifstream stream( pathname );

  CompilationUnit* unit = new CompilationUnit(pathname);

  /*ANTLRInputStream input( stream );
  input.name = pathname;
  CommonTokenStream tokens( &lexer );
  EscriptParser parser( &tokens );

  auto compilationUnit = parser.compilationUnit();

  EscriptCompilerVisitor visitor;
  visitor.visit(compilationUnit);
*/

  // 1. load source file and all included files
  // 2. read function declarations and constants
  // 3. collect top-level statements
  // 4. resolve top-level statements
  // 5. resolve program
  // 6. loop: resolve referenced methods
  // 7.

  // process:
  //    analyze and attach attributes
  //    optimize
  //    generate code
  //

  // TODO figure out how to detect and report errors
  return 0; // (compilationUnit != NULL) ? 0 : -1;
}

}  // namespace Bscript
}  // namespace Pol
