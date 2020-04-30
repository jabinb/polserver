//
// Created by Eric Swanson on 4/28/20.
//

#include "CompilationUnit.h"

#include "../clib/logfacility.h"

#include "ast/AstBuilderVisitor.h"
#include "ast/CompilationUnitAstNode.h"
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

  AstBuilderVisitor astBuilder;
  INFO_PRINT << "Build CompilationUnit AST\n";
  auto compilationUnitAst = astBuilder.astCompilationUnit(compilationUnit);

  INFO_PRINT << "CompilationUnit AST built\n";
  //INFO_PRINT << "ast: "  << ast;

  INFO_PRINT << "compilation unit has " << compilationUnit->topLevelDeclaration().size()
             << " top-level declarations.\n";
  INFO_PRINT << compilationUnit->toStringTree(true);
}

}  // namespace Bscript
}  // namespace Pol