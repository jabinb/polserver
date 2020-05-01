//
// Created by Eric Swanson on 4/29/20.
//

#include "AstBuilderVisitor.h"

#include "../clib/logfacility.h"

#include "AstNode.h"
#include "CompilationUnitAstNode.h"
#include "MethodCallAstNode.h"
#include "StringLiteralAstNode.h"
#include "StatementAstNode.h"
#include "TopLevelDeclarationAstNode.h"

using EscriptGrammar::EscriptParser;

namespace Pol
{
namespace Bscript
{

// I am certain that I am doing this all wrong.

antlrcpp::Any AstBuilderVisitor::visitCompilationUnit(
    EscriptParser::CompilationUnitContext* ctx )
{
  INFO_PRINT << "visitCompilationUnit In\n";
  std::vector<std::shared_ptr<AstNode>> top_level_declarations;

  for ( auto itr : ctx->topLevelDeclaration() )
  {
    auto ast_node = visitTopLevelDeclaration( itr ).as<AstNode*>();
    top_level_declarations.push_back( std::shared_ptr<AstNode>( ast_node ) );
  }

  INFO_PRINT << "visitCompilationUnit Return\n";
  return new CompilationUnitAstNode( top_level_declarations );
}

antlrcpp::Any AstBuilderVisitor::visitTopLevelDeclaration(
    EscriptParser::TopLevelDeclarationContext* ctx )
{
  INFO_PRINT << "astTopLevelDeclaration\n";

  if (ctx->statement() != nullptr)
    return visitStatement(ctx->statement());

  INFO_PRINT << "literal unhandled" << ctx->toStringTree( true );
  throw std::runtime_error( "literal unhandled" );
}

antlrcpp::Any AstBuilderVisitor::visitStatement(
    EscriptParser::StatementContext* ctx )
{
  INFO_PRINT << "astStatement\n";

  if (ctx->expression() != nullptr)
    return visitExpression(ctx->expression());
  INFO_PRINT << "expression unhandled" << ctx->toStringTree( true );
  throw std::runtime_error( "expression unhandled" );
}

antlrcpp::Any AstBuilderVisitor::visitMethodCall( EscriptParser::MethodCallContext* ctx )
{
  INFO_PRINT << "visitMethodCall In\n";
  auto method_name = ctx->IDENTIFIER()->getSymbol()->getText();

  std::vector<std::shared_ptr<AstNode>> arguments;

  auto expressionList = ctx->expressionList();

  for ( auto expressionContext : expressionList->expression() )
  {
    INFO_PRINT << "visitMethodCall visitExpression\n";
    auto expr = visitExpression( expressionContext );
    if (expr.is<antlr4::ParserRuleContext>())
      INFO_PRINT << "is parser rule context";
    INFO_PRINT <<"    convert to AstNode*\n";
    AstNode* ast_node = expr.as<AstNode*>();
    INFO_PRINT <<"    converted to AstNode*\n";
    // INFO_PRINT << "visitMethodCall cast visited expression to AstNode*\n";
    // auto ast_node = visited.as<AstNode*>();
    INFO_PRINT << "visitMethodCall push back\n";
    arguments.push_back( std::shared_ptr<AstNode>( ast_node ) );
  }
  // visitChildren(ctx);
  INFO_PRINT << "visitMethodCall Return\n";
  return new MethodCallAstNode( method_name, arguments );
}

// I couldn' get these to work as antlrcpp::Any
antlrcpp::Any AstBuilderVisitor::visitExpression( EscriptParser::ExpressionContext* ctx )
{
  INFO_PRINT << "visitExpression" << ctx->toStringTree( true ) << "\n";

  if ( ctx->primary() != nullptr )
    return visitPrimary( ctx->primary() );
  if ( ctx->methodCall() != nullptr )
    return visitMethodCall( ctx->methodCall() );

  INFO_PRINT << "unhandled" << ctx->toStringTree( true ) << "\n";
  throw std::runtime_error( "unhandled expression" );
  // std::vector<std::shared_ptr<AstNode>> children;
  // re//turn new ExpressionAstNode(children);
}

antlrcpp::Any AstBuilderVisitor::visitPrimary( EscriptParser::PrimaryContext* ctx )
{
  if ( ctx->literal() != nullptr )
    return visitLiteral( ctx->literal() );

  INFO_PRINT << "unhandled literal" << ctx->toStringTree( true ) << "\n";
  throw std::runtime_error( "unhandled literal" );
}

antlrcpp::Any AstBuilderVisitor::visitLiteral( EscriptParser::LiteralContext* ctx )
{
  if ( ctx->STRING_LITERAL() != nullptr )
    return new StringLiteralAstNode( ctx->STRING_LITERAL()->getSymbol()->getText() );

  INFO_PRINT << "literal unhandled" << ctx->toStringTree( true );
  throw std::runtime_error( "literal unhandled" );
}

};  // namespace Bscript
}  // namespace Pol
