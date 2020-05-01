//
// Created by Eric Swanson on 4/29/20.
//

#include "AstBuilder.h"

#include <EscriptGrammar/EscriptParser.h>

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

CompilationUnitAstNode* AstBuilder::compilationUnitToAst(
    EscriptParser::CompilationUnitContext* ctx )
{
  INFO_PRINT << "visitCompilationUnit In\n";
  std::vector<std::shared_ptr<AstNode>> top_level_declarations;

  for ( auto itr : ctx->topLevelDeclaration() )
  {
    auto ast_node = topLevelDeclarationToAst( itr );
    top_level_declarations.push_back( std::shared_ptr<AstNode>( ast_node ) );
  }

  INFO_PRINT << "visitCompilationUnit Return\n";
  return new CompilationUnitAstNode( top_level_declarations );
}

AstNode* AstBuilder::topLevelDeclarationToAst(
    EscriptParser::TopLevelDeclarationContext* ctx )
{
  INFO_PRINT << "astTopLevelDeclaration\n";

  if (ctx->statement() != nullptr)
    return statementToAst(ctx->statement());

  INFO_PRINT << "literal unhandled" << ctx->toStringTree( true );
  throw std::runtime_error( "literal unhandled" );
}

AstNode* AstBuilder::statementToAst(
    EscriptParser::StatementContext* ctx )
{
  INFO_PRINT << "astStatement\n";

  if (ctx->expression() != nullptr)
    return expressionToAst(ctx->expression());
  INFO_PRINT << "expression unhandled" << ctx->toStringTree( true );
  throw std::runtime_error( "expression unhandled" );
}

MethodCallAstNode* AstBuilder::methodCallToAst( EscriptParser::MethodCallContext* ctx )
{
  INFO_PRINT << "visitMethodCall In\n";
  auto method_name = ctx->IDENTIFIER()->getSymbol()->getText();

  std::vector<std::shared_ptr<AstNode>> arguments;

  auto expressionList = ctx->expressionList();

  for ( auto expressionContext : expressionList->expression() )
  {
    INFO_PRINT << "visitMethodCall visitExpression\n";
    AstNode* ast_node = expressionToAst( expressionContext );
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
AstNode* AstBuilder::expressionToAst( EscriptParser::ExpressionContext* ctx )
{
  INFO_PRINT << "visitExpression" << ctx->toStringTree( true ) << "\n";

  if ( ctx->primary() != nullptr )
    return primaryToAst( ctx->primary() );
  if ( ctx->methodCall() != nullptr )
    return methodCallToAst( ctx->methodCall() );

  INFO_PRINT << "unhandled" << ctx->toStringTree( true ) << "\n";
  throw std::runtime_error( "unhandled expression" );
  // std::vector<std::shared_ptr<AstNode>> children;
  // re//turn new ExpressionAstNode(children);
}

AstNode* AstBuilder::primaryToAst( EscriptParser::PrimaryContext* ctx )
{
  if ( ctx->literal() != nullptr )
    return literalToAst( ctx->literal() );

  INFO_PRINT << "unhandled literal" << ctx->toStringTree( true ) << "\n";
  throw std::runtime_error( "unhandled literal" );
}


AstNode* AstBuilder::literalToAst( EscriptParser::LiteralContext* ctx )
{
  if ( ctx->STRING_LITERAL() != nullptr )
    return new StringLiteralAstNode( ctx->STRING_LITERAL()->getSymbol()->getText() );

  INFO_PRINT << "literal unhandled" << ctx->toStringTree( true );
  throw std::runtime_error( "literal unhandled" );
}

};  // namespace Bscript
}  // namespace Pol
