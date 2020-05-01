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
  antlrcpp::Any visitCompilationUnit(EscriptGrammar::EscriptParser::CompilationUnitContext *ctx);

  antlrcpp::Any visitTopLevelDeclaration(EscriptGrammar::EscriptParser::TopLevelDeclarationContext *ctx);

  antlrcpp::Any visitStatement(EscriptGrammar::EscriptParser::StatementContext *ctx);

  antlrcpp::Any visitMethodCall(EscriptGrammar::EscriptParser::MethodCallContext *ctx);

  antlrcpp::Any visitExpression(EscriptGrammar::EscriptParser::ExpressionContext *ctx);

  antlrcpp::Any visitLiteral(EscriptGrammar::EscriptParser::LiteralContext *ctx);

  antlrcpp::Any visitPrimary(EscriptGrammar::EscriptParser::PrimaryContext *ctx);

};

}
}


#endif  // POLSERVER_ASTBUILDERVISITOR_H
