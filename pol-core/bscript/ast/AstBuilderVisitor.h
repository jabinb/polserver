//
// Created by Eric Swanson on 4/29/20.
//

#ifndef POLSERVER_ASTBUILDERVISITOR_H
#define POLSERVER_ASTBUILDERVISITOR_H

#include <EscriptGrammar/EscriptParserBaseVisitor.h>
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

class AstBuilderVisitor : public EscriptGrammar::EscriptParserBaseVisitor
{
public:
  CompilationUnitAstNode* astCompilationUnit(EscriptGrammar::EscriptParser::CompilationUnitContext *ctx);

  TopLevelDeclarationAstNode* astTopLevelDeclaration(EscriptGrammar::EscriptParser::TopLevelDeclarationContext *ctx);

  AstNode* astStatement(EscriptGrammar::EscriptParser::StatementContext *ctx);

  MethodCallAstNode* astMethodCall(EscriptGrammar::EscriptParser::MethodCallContext *ctx);

  AstNode* astExpression(EscriptGrammar::EscriptParser::ExpressionContext *ctx);

  AstNode* astLiteral(EscriptGrammar::EscriptParser::LiteralContext *ctx);

  AstNode* astPrimary(EscriptGrammar::EscriptParser::PrimaryContext *ctx);

};

}
}


#endif  // POLSERVER_ASTBUILDERVISITOR_H
