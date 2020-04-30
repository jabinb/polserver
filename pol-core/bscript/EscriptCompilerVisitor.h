//
// Created by Eric Swanson on 4/28/20.
//

#ifndef POLSERVER_ESCRIPTCOMPILERVISITOR_H
#define POLSERVER_ESCRIPTCOMPILERVISITOR_H

#include "antlr4-runtime.h"
#include "../clib/logfacility.h"
#include <EscriptGrammar/EscriptParserBaseVisitor.h>
#include <EscriptGrammar/EscriptParser.h>

namespace Pol
{
namespace Bscript
{

class EscriptCompilerVisitor : public EscriptGrammar::EscriptParserBaseVisitor {
  virtual antlrcpp::Any visitCompilationUnit(EscriptGrammar::EscriptParser::CompilationUnitContext *ctx) override {
    INFO_PRINT << "compilation unit\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleUnit(EscriptGrammar::EscriptParser::ModuleUnitContext *ctx) override {
    INFO_PRINT << "module\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleDeclarationStatement(EscriptGrammar::EscriptParser::ModuleDeclarationStatementContext *ctx) override {
    INFO_PRINT << "module declaration\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModuleFunctionDeclaration(EscriptGrammar::EscriptParser::ModuleFunctionDeclarationContext *ctx) override {
    INFO_PRINT << "module function\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnitExpression(EscriptGrammar::EscriptParser::UnitExpressionContext *ctx) override {
    INFO_PRINT << "unit\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTopLevelDeclaration(EscriptGrammar::EscriptParser::TopLevelDeclarationContext *ctx) override {
    INFO_PRINT << "top-level declaration\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(EscriptGrammar::EscriptParser::FunctionDeclarationContext *ctx) override {
    INFO_PRINT << "function declaration\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringIdentifier(EscriptGrammar::EscriptParser::StringIdentifierContext *ctx) override {
    INFO_PRINT << "string identifier\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUseDeclaration(EscriptGrammar::EscriptParser::UseDeclarationContext *ctx) override {
    INFO_PRINT << "use declaration\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncludeDeclaration(EscriptGrammar::EscriptParser::IncludeDeclarationContext *ctx) override {
    INFO_PRINT << "include declaration\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgramDeclaration(EscriptGrammar::EscriptParser::ProgramDeclarationContext *ctx) override {
    INFO_PRINT << "program declaration\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(EscriptGrammar::EscriptParser::StatementContext *ctx) override {
    INFO_PRINT << "statement\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstStatement(EscriptGrammar::EscriptParser::ConstStatementContext *ctx) override {
    INFO_PRINT << "const\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(EscriptGrammar::EscriptParser::BlockContext *ctx) override {
    INFO_PRINT << "block\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclarationInitializer(EscriptGrammar::EscriptParser::VariableDeclarationInitializerContext *ctx) override {
    INFO_PRINT << "variable declaration\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumList(EscriptGrammar::EscriptParser::EnumListContext *ctx) override {
    INFO_PRINT << "enum list\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumListEntry(EscriptGrammar::EscriptParser::EnumListEntryContext *ctx) override {
    INFO_PRINT << "enum list entry";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchBlockStatementGroup(EscriptGrammar::EscriptParser::SwitchBlockStatementGroupContext *ctx) override {
    INFO_PRINT << "switch block statement group\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchLabel(EscriptGrammar::EscriptParser::SwitchLabelContext *ctx) override {
    INFO_PRINT << "switch label\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStatement(EscriptGrammar::EscriptParser::ForStatementContext *ctx) override {
    INFO_PRINT << "for statement\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasicForStatement(EscriptGrammar::EscriptParser::BasicForStatementContext *ctx) override {
    INFO_PRINT << "basic for statement\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCstyleForStatement(EscriptGrammar::EscriptParser::CstyleForStatementContext *ctx) override {
    INFO_PRINT << "c-style for statement\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(EscriptGrammar::EscriptParser::IdentifierListContext *ctx) override {
    INFO_PRINT << "identifier list\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclarationList(EscriptGrammar::EscriptParser::VariableDeclarationListContext *ctx) override {
    INFO_PRINT << "variable declaration list\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaration(EscriptGrammar::EscriptParser::VariableDeclarationContext *ctx) override {
    INFO_PRINT << "variable declaration\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgramParameters(EscriptGrammar::EscriptParser::ProgramParametersContext *ctx) override {
    INFO_PRINT << "program parameters\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgramParameterList(EscriptGrammar::EscriptParser::ProgramParameterListContext *ctx) override {
    INFO_PRINT << "program parameter list\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgramParameter(EscriptGrammar::EscriptParser::ProgramParameterContext *ctx) override {
    INFO_PRINT << "program parameter\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionParameters(EscriptGrammar::EscriptParser::FunctionParametersContext *ctx) override {
    INFO_PRINT << "function parameters\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionParameterList(EscriptGrammar::EscriptParser::FunctionParameterListContext *ctx) override {
    INFO_PRINT << "function parameter list\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionParameter(EscriptGrammar::EscriptParser::FunctionParameterContext *ctx) override {
    INFO_PRINT << "function parameter\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScopedMethodCall(EscriptGrammar::EscriptParser::ScopedMethodCallContext *ctx) override {
    INFO_PRINT << "scoped method call\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(EscriptGrammar::EscriptParser::ExpressionContext *ctx) override {
        INFO_PRINT << "expression"
                   << " bop=" << (ctx->bop ? ctx->bop->getText() : "null")
                   << " expression size=" << ctx->expression().size()
                   << " expressionList size=" << ctx->expressionList().size()
                   << "\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimary(EscriptGrammar::EscriptParser::PrimaryContext *ctx) override {
    INFO_PRINT << "primary\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParExpression(EscriptGrammar::EscriptParser::ParExpressionContext *ctx) override {
    INFO_PRINT << "visit par expression\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionList(EscriptGrammar::EscriptParser::ExpressionListContext *ctx) override {
    INFO_PRINT << "expression list\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructInitializerExpression(EscriptGrammar::EscriptParser::StructInitializerExpressionContext *ctx) override {
    INFO_PRINT << "struct initializer expression\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructInitializerExpressionList(EscriptGrammar::EscriptParser::StructInitializerExpressionListContext *ctx) override {
    INFO_PRINT << "struct initializer expression list\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructInitializer(EscriptGrammar::EscriptParser::StructInitializerContext *ctx) override {
    INFO_PRINT << "struct initializer\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDictInitializerExpression(EscriptGrammar::EscriptParser::DictInitializerExpressionContext *ctx) override {
    INFO_PRINT << "dict initializer expression\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDictInitializerExpressionList(EscriptGrammar::EscriptParser::DictInitializerExpressionListContext *ctx) override {
    INFO_PRINT << "dict initializer expression list\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDictInitializer(EscriptGrammar::EscriptParser::DictInitializerContext *ctx) override {
    INFO_PRINT << "dict initializer\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayInitializer(EscriptGrammar::EscriptParser::ArrayInitializerContext *ctx) override {
    INFO_PRINT << "array initializer\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(EscriptGrammar::EscriptParser::LiteralContext *ctx) override {
    INFO_PRINT << "literal\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(EscriptGrammar::EscriptParser::IntegerLiteralContext *ctx) override {
    INFO_PRINT << "integer literal\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatLiteral(EscriptGrammar::EscriptParser::FloatLiteralContext *ctx) override {
    INFO_PRINT << "float literal\n";
    return EscriptParserBaseVisitor::visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerminal(antlr4::tree::TerminalNode* node) override {
    auto token = node->getSymbol();
    auto source = token->getTokenSource();
    INFO_PRINT << "terminal (symbol: text="
               << token->getText()
               << " source name=" << source->getSourceName()
               << " token line=" << token->getLine()
               << " token index=" << token->getTokenIndex()
               << ")\n";
    return EscriptParserBaseVisitor::visitTerminal(node);
  }
  virtual antlrcpp::Any visitErrorNode(antlr4::tree::ErrorNode* node) override {
    auto token = node->getSymbol();
    auto source = token->getTokenSource();
    INFO_PRINT << "error node (symbol: text="
               << token->getText()
               << " source name=" << source->getSourceName()
               << " token line=" << token->getLine()
               << " token index=" << token->getTokenIndex()
               << ")\n";
    return EscriptParserBaseVisitor::visitErrorNode(node);
  }







  virtual antlrcpp::Any visitIfStatement(EscriptGrammar::EscriptParser::IfStatementContext *ctx) override {
    INFO_PRINT << "if statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGotoStatement(EscriptGrammar::EscriptParser::GotoStatementContext *ctx) override {
    INFO_PRINT << "goto statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(EscriptGrammar::EscriptParser::ReturnStatementContext *ctx) override {
    INFO_PRINT << "return statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarStatement(EscriptGrammar::EscriptParser::VarStatementContext *ctx) override {
    INFO_PRINT << "var statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoStatement(EscriptGrammar::EscriptParser::DoStatementContext *ctx) override {
    INFO_PRINT << "do statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(EscriptGrammar::EscriptParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExitStatement(EscriptGrammar::EscriptParser::ExitStatementContext *ctx) override {
    INFO_PRINT << "exit statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclareStatement(EscriptGrammar::EscriptParser::DeclareStatementContext *ctx) override {
    INFO_PRINT << "declare statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStatement(EscriptGrammar::EscriptParser::BreakStatementContext *ctx) override {
    INFO_PRINT << "break statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStatement(EscriptGrammar::EscriptParser::ContinueStatementContext *ctx) override {
    INFO_PRINT << "continue statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForeachStatement(EscriptGrammar::EscriptParser::ForeachStatementContext *ctx) override {
    INFO_PRINT << "foreach statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeatStatement(EscriptGrammar::EscriptParser::RepeatStatementContext *ctx) override {
    INFO_PRINT << "repeat statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseStatement(EscriptGrammar::EscriptParser::CaseStatementContext *ctx) override {
    INFO_PRINT << "case statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumStatement(EscriptGrammar::EscriptParser::EnumStatementContext *ctx) override {
    INFO_PRINT << "enum statement\n";
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForGroup(EscriptGrammar::EscriptParser::ForGroupContext *ctx) override {
    INFO_PRINT << "for group statement\n";
    return visitChildren(ctx);
  }
};


} // namespace Bscript
} // namespace Pol

#endif  // POLSERVER_ESCRIPTCOMPILERVISITOR_H
