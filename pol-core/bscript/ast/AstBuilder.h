//
// Created by Eric Swanson on 4/29/20.
//

#ifndef POLSERVER_ASTBUILDER_H
#define POLSERVER_ASTBUILDER_H

#include <EscriptGrammar/EscriptParser.h>

namespace Pol
{
namespace Bscript
{

class AstNode;
class CompilationUnitAstNode;
class MethodCallAstNode;
class StatementAstNode;
class TopLevelDeclarationAstNode;

class AstBuilder
{
public:
  CompilationUnitAstNode* compilationUnitToAst(EscriptGrammar::EscriptParser::CompilationUnitContext *ctx);

  AstNode* topLevelDeclarationToAst(EscriptGrammar::EscriptParser::TopLevelDeclarationContext *ctx);

  AstNode* statementToAst(EscriptGrammar::EscriptParser::StatementContext *ctx);

  MethodCallAstNode* methodCallToAst(EscriptGrammar::EscriptParser::MethodCallContext *ctx);

  AstNode* expressionToAst(EscriptGrammar::EscriptParser::ExpressionContext *ctx);

  AstNode* literalToAst(EscriptGrammar::EscriptParser::LiteralContext *ctx);

  AstNode* primaryToAst(EscriptGrammar::EscriptParser::PrimaryContext *ctx);

};

}
}


#endif  // POLSERVER_ASTBUILDERVISITOR_H
