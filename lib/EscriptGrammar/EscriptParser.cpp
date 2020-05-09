


// Generated from lib/EscriptGrammar/EscriptParser.g4 by ANTLR 4.8


#include "EscriptParserListener.h"
#include "EscriptParserVisitor.h"

#include "EscriptParser.h"


using namespace antlrcpp;
using namespace EscriptGrammar;
using namespace antlr4;

EscriptParser::EscriptParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

EscriptParser::~EscriptParser() {
  delete _interpreter;
}

std::string EscriptParser::getGrammarFileName() const {
  return "EscriptParser.g4";
}

const std::vector<std::string>& EscriptParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& EscriptParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

EscriptParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::CompilationUnitContext::EOF() {
  return getToken(EscriptParser::EOF, 0);
}

std::vector<EscriptParser::TopLevelDeclarationContext *> EscriptParser::CompilationUnitContext::topLevelDeclaration() {
  return getRuleContexts<EscriptParser::TopLevelDeclarationContext>();
}

EscriptParser::TopLevelDeclarationContext* EscriptParser::CompilationUnitContext::topLevelDeclaration(size_t i) {
  return getRuleContext<EscriptParser::TopLevelDeclarationContext>(i);
}

EscriptParser::UnitExpressionContext* EscriptParser::CompilationUnitContext::unitExpression() {
  return getRuleContext<EscriptParser::UnitExpressionContext>(0);
}


size_t EscriptParser::CompilationUnitContext::getRuleIndex() const {
  return EscriptParser::RuleCompilationUnit;
}

void EscriptParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void EscriptParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any EscriptParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::CompilationUnitContext* EscriptParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, EscriptParser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(127);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(124);
        topLevelDeclaration(); 
      }
      setState(129);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(131);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
      | (1ULL << EscriptParser::BANG_B)
      | (1ULL << EscriptParser::KEYWORD_ERROR)
      | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
      | (1ULL << (EscriptParser::ARRAY - 64))
      | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_LITERAL - 64))
      | (1ULL << (EscriptParser::OCT_LITERAL - 64))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
      | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
      | (1ULL << (EscriptParser::STRING_LITERAL - 64))
      | (1ULL << (EscriptParser::NULL_LITERAL - 64))
      | (1ULL << (EscriptParser::LPAREN - 64))
      | (1ULL << (EscriptParser::LBRACE - 64))
      | (1ULL << (EscriptParser::ADD - 64))
      | (1ULL << (EscriptParser::SUB - 64))
      | (1ULL << (EscriptParser::TILDE - 64))
      | (1ULL << (EscriptParser::AT - 64))
      | (1ULL << (EscriptParser::INC - 64))
      | (1ULL << (EscriptParser::DEC - 64))
      | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
      setState(130);
      unitExpression();
    }
    setState(133);
    match(EscriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleUnitContext ------------------------------------------------------------------

EscriptParser::ModuleUnitContext::ModuleUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ModuleUnitContext::EOF() {
  return getToken(EscriptParser::EOF, 0);
}

std::vector<EscriptParser::ModuleDeclarationStatementContext *> EscriptParser::ModuleUnitContext::moduleDeclarationStatement() {
  return getRuleContexts<EscriptParser::ModuleDeclarationStatementContext>();
}

EscriptParser::ModuleDeclarationStatementContext* EscriptParser::ModuleUnitContext::moduleDeclarationStatement(size_t i) {
  return getRuleContext<EscriptParser::ModuleDeclarationStatementContext>(i);
}


size_t EscriptParser::ModuleUnitContext::getRuleIndex() const {
  return EscriptParser::RuleModuleUnit;
}

void EscriptParser::ModuleUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleUnit(this);
}

void EscriptParser::ModuleUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleUnit(this);
}


antlrcpp::Any EscriptParser::ModuleUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitModuleUnit(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ModuleUnitContext* EscriptParser::moduleUnit() {
  ModuleUnitContext *_localctx = _tracker.createInstance<ModuleUnitContext>(_ctx, getState());
  enterRule(_localctx, 2, EscriptParser::RuleModuleUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::KEYWORD_CONST || _la == EscriptParser::IDENTIFIER) {
      setState(135);
      moduleDeclarationStatement();
      setState(140);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(141);
    match(EscriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleDeclarationStatementContext ------------------------------------------------------------------

EscriptParser::ModuleDeclarationStatementContext::ModuleDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::ModuleFunctionDeclarationContext* EscriptParser::ModuleDeclarationStatementContext::moduleFunctionDeclaration() {
  return getRuleContext<EscriptParser::ModuleFunctionDeclarationContext>(0);
}

EscriptParser::ConstStatementContext* EscriptParser::ModuleDeclarationStatementContext::constStatement() {
  return getRuleContext<EscriptParser::ConstStatementContext>(0);
}


size_t EscriptParser::ModuleDeclarationStatementContext::getRuleIndex() const {
  return EscriptParser::RuleModuleDeclarationStatement;
}

void EscriptParser::ModuleDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleDeclarationStatement(this);
}

void EscriptParser::ModuleDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleDeclarationStatement(this);
}


antlrcpp::Any EscriptParser::ModuleDeclarationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitModuleDeclarationStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ModuleDeclarationStatementContext* EscriptParser::moduleDeclarationStatement() {
  ModuleDeclarationStatementContext *_localctx = _tracker.createInstance<ModuleDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, EscriptParser::RuleModuleDeclarationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(145);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(143);
        moduleFunctionDeclaration();
        break;
      }

      case EscriptParser::KEYWORD_CONST: {
        enterOuterAlt(_localctx, 2);
        setState(144);
        constStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleFunctionDeclarationContext ------------------------------------------------------------------

EscriptParser::ModuleFunctionDeclarationContext::ModuleFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ModuleFunctionDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::ModuleFunctionDeclarationContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::ModuleFunctionDeclarationContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

tree::TerminalNode* EscriptParser::ModuleFunctionDeclarationContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::VariableDeclarationListContext* EscriptParser::ModuleFunctionDeclarationContext::variableDeclarationList() {
  return getRuleContext<EscriptParser::VariableDeclarationListContext>(0);
}


size_t EscriptParser::ModuleFunctionDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleModuleFunctionDeclaration;
}

void EscriptParser::ModuleFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleFunctionDeclaration(this);
}

void EscriptParser::ModuleFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleFunctionDeclaration(this);
}


antlrcpp::Any EscriptParser::ModuleFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitModuleFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ModuleFunctionDeclarationContext* EscriptParser::moduleFunctionDeclaration() {
  ModuleFunctionDeclarationContext *_localctx = _tracker.createInstance<ModuleFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, EscriptParser::RuleModuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(EscriptParser::IDENTIFIER);
    setState(148);
    match(EscriptParser::LPAREN);
    setState(150);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(149);
      variableDeclarationList();
    }
    setState(152);
    match(EscriptParser::RPAREN);
    setState(153);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnitExpressionContext ------------------------------------------------------------------

EscriptParser::UnitExpressionContext::UnitExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::ExpressionContext* EscriptParser::UnitExpressionContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::UnitExpressionContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::UnitExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleUnitExpression;
}

void EscriptParser::UnitExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnitExpression(this);
}

void EscriptParser::UnitExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnitExpression(this);
}


antlrcpp::Any EscriptParser::UnitExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUnitExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UnitExpressionContext* EscriptParser::unitExpression() {
  UnitExpressionContext *_localctx = _tracker.createInstance<UnitExpressionContext>(_ctx, getState());
  enterRule(_localctx, 8, EscriptParser::RuleUnitExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    expression(0);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::SEMI) {
      setState(156);
      match(EscriptParser::SEMI);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelDeclarationContext ------------------------------------------------------------------

EscriptParser::TopLevelDeclarationContext::TopLevelDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::UseDeclarationContext* EscriptParser::TopLevelDeclarationContext::useDeclaration() {
  return getRuleContext<EscriptParser::UseDeclarationContext>(0);
}

EscriptParser::IncludeDeclarationContext* EscriptParser::TopLevelDeclarationContext::includeDeclaration() {
  return getRuleContext<EscriptParser::IncludeDeclarationContext>(0);
}

EscriptParser::ProgramDeclarationContext* EscriptParser::TopLevelDeclarationContext::programDeclaration() {
  return getRuleContext<EscriptParser::ProgramDeclarationContext>(0);
}

EscriptParser::FunctionDeclarationContext* EscriptParser::TopLevelDeclarationContext::functionDeclaration() {
  return getRuleContext<EscriptParser::FunctionDeclarationContext>(0);
}

EscriptParser::StatementContext* EscriptParser::TopLevelDeclarationContext::statement() {
  return getRuleContext<EscriptParser::StatementContext>(0);
}


size_t EscriptParser::TopLevelDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleTopLevelDeclaration;
}

void EscriptParser::TopLevelDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopLevelDeclaration(this);
}

void EscriptParser::TopLevelDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopLevelDeclaration(this);
}


antlrcpp::Any EscriptParser::TopLevelDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitTopLevelDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::TopLevelDeclarationContext* EscriptParser::topLevelDeclaration() {
  TopLevelDeclarationContext *_localctx = _tracker.createInstance<TopLevelDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, EscriptParser::RuleTopLevelDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::USE: {
        enterOuterAlt(_localctx, 1);
        setState(159);
        useDeclaration();
        break;
      }

      case EscriptParser::INCLUDE: {
        enterOuterAlt(_localctx, 2);
        setState(160);
        includeDeclaration();
        break;
      }

      case EscriptParser::PROGRAM: {
        enterOuterAlt(_localctx, 3);
        setState(161);
        programDeclaration();
        break;
      }

      case EscriptParser::FUNCTION:
      case EscriptParser::EXPORTED: {
        enterOuterAlt(_localctx, 4);
        setState(162);
        functionDeclaration();
        break;
      }

      case EscriptParser::IF:
      case EscriptParser::GOTO:
      case EscriptParser::RETURN:
      case EscriptParser::KEYWORD_CONST:
      case EscriptParser::VAR:
      case EscriptParser::DO:
      case EscriptParser::WHILE:
      case EscriptParser::EXIT:
      case EscriptParser::DECLARE:
      case EscriptParser::BREAK:
      case EscriptParser::CONTINUE:
      case EscriptParser::FOR:
      case EscriptParser::FOREACH:
      case EscriptParser::REPEAT:
      case EscriptParser::CASE:
      case EscriptParser::ENUM:
      case EscriptParser::BANG_A:
      case EscriptParser::BANG_B:
      case EscriptParser::KEYWORD_ERROR:
      case EscriptParser::DICTIONARY:
      case EscriptParser::STRUCT:
      case EscriptParser::ARRAY:
      case EscriptParser::DECIMAL_LITERAL:
      case EscriptParser::HEX_LITERAL:
      case EscriptParser::OCT_LITERAL:
      case EscriptParser::BINARY_LITERAL:
      case EscriptParser::FLOAT_LITERAL:
      case EscriptParser::HEX_FLOAT_LITERAL:
      case EscriptParser::CHAR_LITERAL:
      case EscriptParser::STRING_LITERAL:
      case EscriptParser::NULL_LITERAL:
      case EscriptParser::LPAREN:
      case EscriptParser::LBRACE:
      case EscriptParser::ADD:
      case EscriptParser::SUB:
      case EscriptParser::SEMI:
      case EscriptParser::TILDE:
      case EscriptParser::AT:
      case EscriptParser::INC:
      case EscriptParser::DEC:
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 5);
        setState(163);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

EscriptParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::FunctionDeclarationContext::FUNCTION() {
  return getToken(EscriptParser::FUNCTION, 0);
}

tree::TerminalNode* EscriptParser::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::FunctionParametersContext* EscriptParser::FunctionDeclarationContext::functionParameters() {
  return getRuleContext<EscriptParser::FunctionParametersContext>(0);
}

EscriptParser::BlockContext* EscriptParser::FunctionDeclarationContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::FunctionDeclarationContext::ENDFUNCTION() {
  return getToken(EscriptParser::ENDFUNCTION, 0);
}

tree::TerminalNode* EscriptParser::FunctionDeclarationContext::EXPORTED() {
  return getToken(EscriptParser::EXPORTED, 0);
}


size_t EscriptParser::FunctionDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleFunctionDeclaration;
}

void EscriptParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void EscriptParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any EscriptParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::FunctionDeclarationContext* EscriptParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, EscriptParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::EXPORTED) {
      setState(166);
      match(EscriptParser::EXPORTED);
    }
    setState(169);
    match(EscriptParser::FUNCTION);
    setState(170);
    match(EscriptParser::IDENTIFIER);
    setState(171);
    functionParameters();
    setState(172);
    block();
    setState(173);
    match(EscriptParser::ENDFUNCTION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringIdentifierContext ------------------------------------------------------------------

EscriptParser::StringIdentifierContext::StringIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::StringIdentifierContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::StringIdentifierContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}


size_t EscriptParser::StringIdentifierContext::getRuleIndex() const {
  return EscriptParser::RuleStringIdentifier;
}

void EscriptParser::StringIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringIdentifier(this);
}

void EscriptParser::StringIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringIdentifier(this);
}


antlrcpp::Any EscriptParser::StringIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitStringIdentifier(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::StringIdentifierContext* EscriptParser::stringIdentifier() {
  StringIdentifierContext *_localctx = _tracker.createInstance<StringIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 14, EscriptParser::RuleStringIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    _la = _input->LA(1);
    if (!(_la == EscriptParser::STRING_LITERAL

    || _la == EscriptParser::IDENTIFIER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UseDeclarationContext ------------------------------------------------------------------

EscriptParser::UseDeclarationContext::UseDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::UseDeclarationContext::USE() {
  return getToken(EscriptParser::USE, 0);
}

EscriptParser::StringIdentifierContext* EscriptParser::UseDeclarationContext::stringIdentifier() {
  return getRuleContext<EscriptParser::StringIdentifierContext>(0);
}

tree::TerminalNode* EscriptParser::UseDeclarationContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::UseDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleUseDeclaration;
}

void EscriptParser::UseDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUseDeclaration(this);
}

void EscriptParser::UseDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUseDeclaration(this);
}


antlrcpp::Any EscriptParser::UseDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitUseDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::UseDeclarationContext* EscriptParser::useDeclaration() {
  UseDeclarationContext *_localctx = _tracker.createInstance<UseDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, EscriptParser::RuleUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(EscriptParser::USE);
    setState(178);
    stringIdentifier();
    setState(179);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncludeDeclarationContext ------------------------------------------------------------------

EscriptParser::IncludeDeclarationContext::IncludeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::IncludeDeclarationContext::INCLUDE() {
  return getToken(EscriptParser::INCLUDE, 0);
}

EscriptParser::StringIdentifierContext* EscriptParser::IncludeDeclarationContext::stringIdentifier() {
  return getRuleContext<EscriptParser::StringIdentifierContext>(0);
}

tree::TerminalNode* EscriptParser::IncludeDeclarationContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::IncludeDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleIncludeDeclaration;
}

void EscriptParser::IncludeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncludeDeclaration(this);
}

void EscriptParser::IncludeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncludeDeclaration(this);
}


antlrcpp::Any EscriptParser::IncludeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitIncludeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::IncludeDeclarationContext* EscriptParser::includeDeclaration() {
  IncludeDeclarationContext *_localctx = _tracker.createInstance<IncludeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, EscriptParser::RuleIncludeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(EscriptParser::INCLUDE);
    setState(182);
    stringIdentifier();
    setState(183);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramDeclarationContext ------------------------------------------------------------------

EscriptParser::ProgramDeclarationContext::ProgramDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ProgramDeclarationContext::PROGRAM() {
  return getToken(EscriptParser::PROGRAM, 0);
}

tree::TerminalNode* EscriptParser::ProgramDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::ProgramParametersContext* EscriptParser::ProgramDeclarationContext::programParameters() {
  return getRuleContext<EscriptParser::ProgramParametersContext>(0);
}

EscriptParser::BlockContext* EscriptParser::ProgramDeclarationContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::ProgramDeclarationContext::ENDPROGRAM() {
  return getToken(EscriptParser::ENDPROGRAM, 0);
}


size_t EscriptParser::ProgramDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleProgramDeclaration;
}

void EscriptParser::ProgramDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramDeclaration(this);
}

void EscriptParser::ProgramDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramDeclaration(this);
}


antlrcpp::Any EscriptParser::ProgramDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitProgramDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ProgramDeclarationContext* EscriptParser::programDeclaration() {
  ProgramDeclarationContext *_localctx = _tracker.createInstance<ProgramDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, EscriptParser::RuleProgramDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(EscriptParser::PROGRAM);
    setState(186);
    match(EscriptParser::IDENTIFIER);
    setState(187);
    programParameters();
    setState(188);
    block();
    setState(189);
    match(EscriptParser::ENDPROGRAM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

EscriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::IfStatementContext* EscriptParser::StatementContext::ifStatement() {
  return getRuleContext<EscriptParser::IfStatementContext>(0);
}

EscriptParser::GotoStatementContext* EscriptParser::StatementContext::gotoStatement() {
  return getRuleContext<EscriptParser::GotoStatementContext>(0);
}

EscriptParser::ReturnStatementContext* EscriptParser::StatementContext::returnStatement() {
  return getRuleContext<EscriptParser::ReturnStatementContext>(0);
}

EscriptParser::ConstStatementContext* EscriptParser::StatementContext::constStatement() {
  return getRuleContext<EscriptParser::ConstStatementContext>(0);
}

EscriptParser::VarStatementContext* EscriptParser::StatementContext::varStatement() {
  return getRuleContext<EscriptParser::VarStatementContext>(0);
}

EscriptParser::DoStatementContext* EscriptParser::StatementContext::doStatement() {
  return getRuleContext<EscriptParser::DoStatementContext>(0);
}

EscriptParser::WhileStatementContext* EscriptParser::StatementContext::whileStatement() {
  return getRuleContext<EscriptParser::WhileStatementContext>(0);
}

EscriptParser::ExitStatementContext* EscriptParser::StatementContext::exitStatement() {
  return getRuleContext<EscriptParser::ExitStatementContext>(0);
}

EscriptParser::DeclareStatementContext* EscriptParser::StatementContext::declareStatement() {
  return getRuleContext<EscriptParser::DeclareStatementContext>(0);
}

EscriptParser::BreakStatementContext* EscriptParser::StatementContext::breakStatement() {
  return getRuleContext<EscriptParser::BreakStatementContext>(0);
}

EscriptParser::ContinueStatementContext* EscriptParser::StatementContext::continueStatement() {
  return getRuleContext<EscriptParser::ContinueStatementContext>(0);
}

EscriptParser::ForStatementContext* EscriptParser::StatementContext::forStatement() {
  return getRuleContext<EscriptParser::ForStatementContext>(0);
}

EscriptParser::ForeachStatementContext* EscriptParser::StatementContext::foreachStatement() {
  return getRuleContext<EscriptParser::ForeachStatementContext>(0);
}

EscriptParser::RepeatStatementContext* EscriptParser::StatementContext::repeatStatement() {
  return getRuleContext<EscriptParser::RepeatStatementContext>(0);
}

EscriptParser::CaseStatementContext* EscriptParser::StatementContext::caseStatement() {
  return getRuleContext<EscriptParser::CaseStatementContext>(0);
}

EscriptParser::EnumStatementContext* EscriptParser::StatementContext::enumStatement() {
  return getRuleContext<EscriptParser::EnumStatementContext>(0);
}

tree::TerminalNode* EscriptParser::StatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::ExpressionContext* EscriptParser::StatementContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::StatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::StatementContext::COLON() {
  return getToken(EscriptParser::COLON, 0);
}

EscriptParser::StatementContext* EscriptParser::StatementContext::statement() {
  return getRuleContext<EscriptParser::StatementContext>(0);
}


size_t EscriptParser::StatementContext::getRuleIndex() const {
  return EscriptParser::RuleStatement;
}

void EscriptParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void EscriptParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any EscriptParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::StatementContext* EscriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, EscriptParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(214);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(191);
      ifStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(192);
      gotoStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(193);
      returnStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(194);
      constStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(195);
      varStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(196);
      doStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(197);
      whileStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(198);
      exitStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(199);
      declareStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(200);
      breakStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(201);
      continueStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(202);
      forStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(203);
      foreachStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(204);
      repeatStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(205);
      caseStatement();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(206);
      enumStatement();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(207);
      match(EscriptParser::SEMI);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(208);
      dynamic_cast<StatementContext *>(_localctx)->statementExpression = expression(0);
      setState(209);
      match(EscriptParser::SEMI);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(211);
      match(EscriptParser::IDENTIFIER);
      setState(212);
      match(EscriptParser::COLON);
      setState(213);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

EscriptParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::IfStatementContext::IF() {
  return getToken(EscriptParser::IF, 0);
}

std::vector<EscriptParser::ParExpressionContext *> EscriptParser::IfStatementContext::parExpression() {
  return getRuleContexts<EscriptParser::ParExpressionContext>();
}

EscriptParser::ParExpressionContext* EscriptParser::IfStatementContext::parExpression(size_t i) {
  return getRuleContext<EscriptParser::ParExpressionContext>(i);
}

std::vector<EscriptParser::BlockContext *> EscriptParser::IfStatementContext::block() {
  return getRuleContexts<EscriptParser::BlockContext>();
}

EscriptParser::BlockContext* EscriptParser::IfStatementContext::block(size_t i) {
  return getRuleContext<EscriptParser::BlockContext>(i);
}

tree::TerminalNode* EscriptParser::IfStatementContext::ENDIF() {
  return getToken(EscriptParser::ENDIF, 0);
}

tree::TerminalNode* EscriptParser::IfStatementContext::THEN() {
  return getToken(EscriptParser::THEN, 0);
}

std::vector<tree::TerminalNode *> EscriptParser::IfStatementContext::ELSEIF() {
  return getTokens(EscriptParser::ELSEIF);
}

tree::TerminalNode* EscriptParser::IfStatementContext::ELSEIF(size_t i) {
  return getToken(EscriptParser::ELSEIF, i);
}

tree::TerminalNode* EscriptParser::IfStatementContext::ELSE() {
  return getToken(EscriptParser::ELSE, 0);
}


size_t EscriptParser::IfStatementContext::getRuleIndex() const {
  return EscriptParser::RuleIfStatement;
}

void EscriptParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void EscriptParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any EscriptParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::IfStatementContext* EscriptParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, EscriptParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(EscriptParser::IF);
    setState(217);
    parExpression();
    setState(219);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::THEN) {
      setState(218);
      match(EscriptParser::THEN);
    }
    setState(221);
    block();
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::ELSEIF) {
      setState(222);
      match(EscriptParser::ELSEIF);
      setState(223);
      parExpression();
      setState(224);
      block();
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ELSE) {
      setState(231);
      match(EscriptParser::ELSE);
      setState(232);
      block();
    }
    setState(235);
    match(EscriptParser::ENDIF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatementContext ------------------------------------------------------------------

EscriptParser::GotoStatementContext::GotoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::GotoStatementContext::GOTO() {
  return getToken(EscriptParser::GOTO, 0);
}

tree::TerminalNode* EscriptParser::GotoStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::GotoStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::GotoStatementContext::getRuleIndex() const {
  return EscriptParser::RuleGotoStatement;
}

void EscriptParser::GotoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStatement(this);
}

void EscriptParser::GotoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStatement(this);
}


antlrcpp::Any EscriptParser::GotoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitGotoStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::GotoStatementContext* EscriptParser::gotoStatement() {
  GotoStatementContext *_localctx = _tracker.createInstance<GotoStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, EscriptParser::RuleGotoStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(EscriptParser::GOTO);
    setState(238);
    match(EscriptParser::IDENTIFIER);
    setState(239);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

EscriptParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ReturnStatementContext::RETURN() {
  return getToken(EscriptParser::RETURN, 0);
}

tree::TerminalNode* EscriptParser::ReturnStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

EscriptParser::ExpressionContext* EscriptParser::ReturnStatementContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}


size_t EscriptParser::ReturnStatementContext::getRuleIndex() const {
  return EscriptParser::RuleReturnStatement;
}

void EscriptParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void EscriptParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any EscriptParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ReturnStatementContext* EscriptParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, EscriptParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(EscriptParser::RETURN);
    setState(243);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
      | (1ULL << EscriptParser::BANG_B)
      | (1ULL << EscriptParser::KEYWORD_ERROR)
      | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
      | (1ULL << (EscriptParser::ARRAY - 64))
      | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_LITERAL - 64))
      | (1ULL << (EscriptParser::OCT_LITERAL - 64))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
      | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
      | (1ULL << (EscriptParser::STRING_LITERAL - 64))
      | (1ULL << (EscriptParser::NULL_LITERAL - 64))
      | (1ULL << (EscriptParser::LPAREN - 64))
      | (1ULL << (EscriptParser::LBRACE - 64))
      | (1ULL << (EscriptParser::ADD - 64))
      | (1ULL << (EscriptParser::SUB - 64))
      | (1ULL << (EscriptParser::TILDE - 64))
      | (1ULL << (EscriptParser::AT - 64))
      | (1ULL << (EscriptParser::INC - 64))
      | (1ULL << (EscriptParser::DEC - 64))
      | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
      setState(242);
      expression(0);
    }
    setState(245);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstStatementContext ------------------------------------------------------------------

EscriptParser::ConstStatementContext::ConstStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ConstStatementContext::KEYWORD_CONST() {
  return getToken(EscriptParser::KEYWORD_CONST, 0);
}

EscriptParser::VariableDeclarationContext* EscriptParser::ConstStatementContext::variableDeclaration() {
  return getRuleContext<EscriptParser::VariableDeclarationContext>(0);
}

tree::TerminalNode* EscriptParser::ConstStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::ConstStatementContext::getRuleIndex() const {
  return EscriptParser::RuleConstStatement;
}

void EscriptParser::ConstStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstStatement(this);
}

void EscriptParser::ConstStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstStatement(this);
}


antlrcpp::Any EscriptParser::ConstStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitConstStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ConstStatementContext* EscriptParser::constStatement() {
  ConstStatementContext *_localctx = _tracker.createInstance<ConstStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, EscriptParser::RuleConstStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(EscriptParser::KEYWORD_CONST);
    setState(248);
    variableDeclaration();
    setState(249);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarStatementContext ------------------------------------------------------------------

EscriptParser::VarStatementContext::VarStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::VarStatementContext::VAR() {
  return getToken(EscriptParser::VAR, 0);
}

EscriptParser::VariableDeclarationListContext* EscriptParser::VarStatementContext::variableDeclarationList() {
  return getRuleContext<EscriptParser::VariableDeclarationListContext>(0);
}

tree::TerminalNode* EscriptParser::VarStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::VarStatementContext::getRuleIndex() const {
  return EscriptParser::RuleVarStatement;
}

void EscriptParser::VarStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarStatement(this);
}

void EscriptParser::VarStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarStatement(this);
}


antlrcpp::Any EscriptParser::VarStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitVarStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::VarStatementContext* EscriptParser::varStatement() {
  VarStatementContext *_localctx = _tracker.createInstance<VarStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, EscriptParser::RuleVarStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(EscriptParser::VAR);
    setState(252);
    variableDeclarationList();
    setState(253);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoStatementContext ------------------------------------------------------------------

EscriptParser::DoStatementContext::DoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::DoStatementContext::DO() {
  return getToken(EscriptParser::DO, 0);
}

EscriptParser::BlockContext* EscriptParser::DoStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::DoStatementContext::DOWHILE() {
  return getToken(EscriptParser::DOWHILE, 0);
}

EscriptParser::ParExpressionContext* EscriptParser::DoStatementContext::parExpression() {
  return getRuleContext<EscriptParser::ParExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::DoStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::DoStatementContext::getRuleIndex() const {
  return EscriptParser::RuleDoStatement;
}

void EscriptParser::DoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoStatement(this);
}

void EscriptParser::DoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoStatement(this);
}


antlrcpp::Any EscriptParser::DoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDoStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DoStatementContext* EscriptParser::doStatement() {
  DoStatementContext *_localctx = _tracker.createInstance<DoStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, EscriptParser::RuleDoStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    match(EscriptParser::DO);
    setState(256);
    block();
    setState(257);
    match(EscriptParser::DOWHILE);
    setState(258);
    parExpression();
    setState(259);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

EscriptParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::WhileStatementContext::WHILE() {
  return getToken(EscriptParser::WHILE, 0);
}

EscriptParser::ParExpressionContext* EscriptParser::WhileStatementContext::parExpression() {
  return getRuleContext<EscriptParser::ParExpressionContext>(0);
}

EscriptParser::BlockContext* EscriptParser::WhileStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::WhileStatementContext::ENDWHILE() {
  return getToken(EscriptParser::ENDWHILE, 0);
}


size_t EscriptParser::WhileStatementContext::getRuleIndex() const {
  return EscriptParser::RuleWhileStatement;
}

void EscriptParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void EscriptParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any EscriptParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::WhileStatementContext* EscriptParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, EscriptParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
    match(EscriptParser::WHILE);
    setState(262);
    parExpression();
    setState(263);
    block();
    setState(264);
    match(EscriptParser::ENDWHILE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExitStatementContext ------------------------------------------------------------------

EscriptParser::ExitStatementContext::ExitStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ExitStatementContext::EXIT() {
  return getToken(EscriptParser::EXIT, 0);
}

tree::TerminalNode* EscriptParser::ExitStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::ExitStatementContext::getRuleIndex() const {
  return EscriptParser::RuleExitStatement;
}

void EscriptParser::ExitStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExitStatement(this);
}

void EscriptParser::ExitStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExitStatement(this);
}


antlrcpp::Any EscriptParser::ExitStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitExitStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ExitStatementContext* EscriptParser::exitStatement() {
  ExitStatementContext *_localctx = _tracker.createInstance<ExitStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, EscriptParser::RuleExitStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    match(EscriptParser::EXIT);
    setState(267);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclareStatementContext ------------------------------------------------------------------

EscriptParser::DeclareStatementContext::DeclareStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::DeclareStatementContext::DECLARE() {
  return getToken(EscriptParser::DECLARE, 0);
}

tree::TerminalNode* EscriptParser::DeclareStatementContext::FUNCTION() {
  return getToken(EscriptParser::FUNCTION, 0);
}

EscriptParser::IdentifierListContext* EscriptParser::DeclareStatementContext::identifierList() {
  return getRuleContext<EscriptParser::IdentifierListContext>(0);
}

tree::TerminalNode* EscriptParser::DeclareStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::DeclareStatementContext::getRuleIndex() const {
  return EscriptParser::RuleDeclareStatement;
}

void EscriptParser::DeclareStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclareStatement(this);
}

void EscriptParser::DeclareStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclareStatement(this);
}


antlrcpp::Any EscriptParser::DeclareStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDeclareStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DeclareStatementContext* EscriptParser::declareStatement() {
  DeclareStatementContext *_localctx = _tracker.createInstance<DeclareStatementContext>(_ctx, getState());
  enterRule(_localctx, 40, EscriptParser::RuleDeclareStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(EscriptParser::DECLARE);
    setState(270);
    match(EscriptParser::FUNCTION);
    setState(271);
    identifierList();
    setState(272);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

EscriptParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::BreakStatementContext::BREAK() {
  return getToken(EscriptParser::BREAK, 0);
}

tree::TerminalNode* EscriptParser::BreakStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

tree::TerminalNode* EscriptParser::BreakStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}


size_t EscriptParser::BreakStatementContext::getRuleIndex() const {
  return EscriptParser::RuleBreakStatement;
}

void EscriptParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void EscriptParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}


antlrcpp::Any EscriptParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::BreakStatementContext* EscriptParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, EscriptParser::RuleBreakStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(EscriptParser::BREAK);
    setState(276);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(275);
      match(EscriptParser::IDENTIFIER);
    }
    setState(278);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

EscriptParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ContinueStatementContext::CONTINUE() {
  return getToken(EscriptParser::CONTINUE, 0);
}

tree::TerminalNode* EscriptParser::ContinueStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}

tree::TerminalNode* EscriptParser::ContinueStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}


size_t EscriptParser::ContinueStatementContext::getRuleIndex() const {
  return EscriptParser::RuleContinueStatement;
}

void EscriptParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void EscriptParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}


antlrcpp::Any EscriptParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ContinueStatementContext* EscriptParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, EscriptParser::RuleContinueStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(EscriptParser::CONTINUE);
    setState(282);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(281);
      match(EscriptParser::IDENTIFIER);
    }
    setState(284);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

EscriptParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ForStatementContext::FOR() {
  return getToken(EscriptParser::FOR, 0);
}

EscriptParser::ForGroupContext* EscriptParser::ForStatementContext::forGroup() {
  return getRuleContext<EscriptParser::ForGroupContext>(0);
}

tree::TerminalNode* EscriptParser::ForStatementContext::ENDFOR() {
  return getToken(EscriptParser::ENDFOR, 0);
}


size_t EscriptParser::ForStatementContext::getRuleIndex() const {
  return EscriptParser::RuleForStatement;
}

void EscriptParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void EscriptParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


antlrcpp::Any EscriptParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ForStatementContext* EscriptParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, EscriptParser::RuleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    match(EscriptParser::FOR);
    setState(287);
    forGroup();
    setState(288);
    match(EscriptParser::ENDFOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForeachStatementContext ------------------------------------------------------------------

EscriptParser::ForeachStatementContext::ForeachStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ForeachStatementContext::FOREACH() {
  return getToken(EscriptParser::FOREACH, 0);
}

tree::TerminalNode* EscriptParser::ForeachStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::ForeachStatementContext::KEYWORD_IN() {
  return getToken(EscriptParser::KEYWORD_IN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::ForeachStatementContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

EscriptParser::BlockContext* EscriptParser::ForeachStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::ForeachStatementContext::ENDFOREACH() {
  return getToken(EscriptParser::ENDFOREACH, 0);
}


size_t EscriptParser::ForeachStatementContext::getRuleIndex() const {
  return EscriptParser::RuleForeachStatement;
}

void EscriptParser::ForeachStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeachStatement(this);
}

void EscriptParser::ForeachStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeachStatement(this);
}


antlrcpp::Any EscriptParser::ForeachStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitForeachStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ForeachStatementContext* EscriptParser::foreachStatement() {
  ForeachStatementContext *_localctx = _tracker.createInstance<ForeachStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, EscriptParser::RuleForeachStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(EscriptParser::FOREACH);
    setState(291);
    match(EscriptParser::IDENTIFIER);
    setState(292);
    match(EscriptParser::KEYWORD_IN);
    setState(293);
    expression(0);
    setState(294);
    block();
    setState(295);
    match(EscriptParser::ENDFOREACH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatStatementContext ------------------------------------------------------------------

EscriptParser::RepeatStatementContext::RepeatStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::RepeatStatementContext::REPEAT() {
  return getToken(EscriptParser::REPEAT, 0);
}

EscriptParser::BlockContext* EscriptParser::RepeatStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

tree::TerminalNode* EscriptParser::RepeatStatementContext::UNTIL() {
  return getToken(EscriptParser::UNTIL, 0);
}

EscriptParser::ExpressionContext* EscriptParser::RepeatStatementContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::RepeatStatementContext::SEMI() {
  return getToken(EscriptParser::SEMI, 0);
}


size_t EscriptParser::RepeatStatementContext::getRuleIndex() const {
  return EscriptParser::RuleRepeatStatement;
}

void EscriptParser::RepeatStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeatStatement(this);
}

void EscriptParser::RepeatStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeatStatement(this);
}


antlrcpp::Any EscriptParser::RepeatStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitRepeatStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::RepeatStatementContext* EscriptParser::repeatStatement() {
  RepeatStatementContext *_localctx = _tracker.createInstance<RepeatStatementContext>(_ctx, getState());
  enterRule(_localctx, 50, EscriptParser::RuleRepeatStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(EscriptParser::REPEAT);
    setState(298);
    block();
    setState(299);
    match(EscriptParser::UNTIL);
    setState(300);
    expression(0);
    setState(301);
    match(EscriptParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseStatementContext ------------------------------------------------------------------

EscriptParser::CaseStatementContext::CaseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::CaseStatementContext::CASE() {
  return getToken(EscriptParser::CASE, 0);
}

tree::TerminalNode* EscriptParser::CaseStatementContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::CaseStatementContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::CaseStatementContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

tree::TerminalNode* EscriptParser::CaseStatementContext::ENDCASE() {
  return getToken(EscriptParser::ENDCASE, 0);
}

std::vector<EscriptParser::SwitchBlockStatementGroupContext *> EscriptParser::CaseStatementContext::switchBlockStatementGroup() {
  return getRuleContexts<EscriptParser::SwitchBlockStatementGroupContext>();
}

EscriptParser::SwitchBlockStatementGroupContext* EscriptParser::CaseStatementContext::switchBlockStatementGroup(size_t i) {
  return getRuleContext<EscriptParser::SwitchBlockStatementGroupContext>(i);
}


size_t EscriptParser::CaseStatementContext::getRuleIndex() const {
  return EscriptParser::RuleCaseStatement;
}

void EscriptParser::CaseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseStatement(this);
}

void EscriptParser::CaseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseStatement(this);
}


antlrcpp::Any EscriptParser::CaseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitCaseStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::CaseStatementContext* EscriptParser::caseStatement() {
  CaseStatementContext *_localctx = _tracker.createInstance<CaseStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, EscriptParser::RuleCaseStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(EscriptParser::CASE);
    setState(304);
    match(EscriptParser::LPAREN);
    setState(305);
    expression(0);
    setState(306);
    match(EscriptParser::RPAREN);
    setState(308); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(307);
      switchBlockStatementGroup();
      setState(310); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == EscriptParser::DEFAULT || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (EscriptParser::DECIMAL_LITERAL - 68))
      | (1ULL << (EscriptParser::HEX_LITERAL - 68))
      | (1ULL << (EscriptParser::OCT_LITERAL - 68))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 68))
      | (1ULL << (EscriptParser::STRING_LITERAL - 68))
      | (1ULL << (EscriptParser::IDENTIFIER - 68)))) != 0));
    setState(312);
    match(EscriptParser::ENDCASE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumStatementContext ------------------------------------------------------------------

EscriptParser::EnumStatementContext::EnumStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::EnumStatementContext::ENUM() {
  return getToken(EscriptParser::ENUM, 0);
}

tree::TerminalNode* EscriptParser::EnumStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::EnumStatementContext::ENDENUM() {
  return getToken(EscriptParser::ENDENUM, 0);
}

EscriptParser::EnumListContext* EscriptParser::EnumStatementContext::enumList() {
  return getRuleContext<EscriptParser::EnumListContext>(0);
}


size_t EscriptParser::EnumStatementContext::getRuleIndex() const {
  return EscriptParser::RuleEnumStatement;
}

void EscriptParser::EnumStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumStatement(this);
}

void EscriptParser::EnumStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumStatement(this);
}


antlrcpp::Any EscriptParser::EnumStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitEnumStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::EnumStatementContext* EscriptParser::enumStatement() {
  EnumStatementContext *_localctx = _tracker.createInstance<EnumStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, EscriptParser::RuleEnumStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(EscriptParser::ENUM);
    setState(315);
    match(EscriptParser::IDENTIFIER);
    setState(317);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::IDENTIFIER) {
      setState(316);
      enumList();
    }
    setState(319);
    match(EscriptParser::ENDENUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

EscriptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::StatementContext *> EscriptParser::BlockContext::statement() {
  return getRuleContexts<EscriptParser::StatementContext>();
}

EscriptParser::StatementContext* EscriptParser::BlockContext::statement(size_t i) {
  return getRuleContext<EscriptParser::StatementContext>(i);
}


size_t EscriptParser::BlockContext::getRuleIndex() const {
  return EscriptParser::RuleBlock;
}

void EscriptParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void EscriptParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any EscriptParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::BlockContext* EscriptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 56, EscriptParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(324);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(321);
        statement(); 
      }
      setState(326);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationInitializerContext ------------------------------------------------------------------

EscriptParser::VariableDeclarationInitializerContext::VariableDeclarationInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::VariableDeclarationInitializerContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::VariableDeclarationInitializerContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::VariableDeclarationInitializerContext::ARRAY() {
  return getToken(EscriptParser::ARRAY, 0);
}


size_t EscriptParser::VariableDeclarationInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleVariableDeclarationInitializer;
}

void EscriptParser::VariableDeclarationInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationInitializer(this);
}

void EscriptParser::VariableDeclarationInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationInitializer(this);
}


antlrcpp::Any EscriptParser::VariableDeclarationInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::VariableDeclarationInitializerContext* EscriptParser::variableDeclarationInitializer() {
  VariableDeclarationInitializerContext *_localctx = _tracker.createInstance<VariableDeclarationInitializerContext>(_ctx, getState());
  enterRule(_localctx, 58, EscriptParser::RuleVariableDeclarationInitializer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(330);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::ASSIGN: {
        enterOuterAlt(_localctx, 1);
        setState(327);
        match(EscriptParser::ASSIGN);
        setState(328);
        expression(0);
        break;
      }

      case EscriptParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(329);
        match(EscriptParser::ARRAY);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumListContext ------------------------------------------------------------------

EscriptParser::EnumListContext::EnumListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::EnumListEntryContext *> EscriptParser::EnumListContext::enumListEntry() {
  return getRuleContexts<EscriptParser::EnumListEntryContext>();
}

EscriptParser::EnumListEntryContext* EscriptParser::EnumListContext::enumListEntry(size_t i) {
  return getRuleContext<EscriptParser::EnumListEntryContext>(i);
}

tree::TerminalNode* EscriptParser::EnumListContext::COMMA() {
  return getToken(EscriptParser::COMMA, 0);
}


size_t EscriptParser::EnumListContext::getRuleIndex() const {
  return EscriptParser::RuleEnumList;
}

void EscriptParser::EnumListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumList(this);
}

void EscriptParser::EnumListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumList(this);
}


antlrcpp::Any EscriptParser::EnumListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitEnumList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::EnumListContext* EscriptParser::enumList() {
  EnumListContext *_localctx = _tracker.createInstance<EnumListContext>(_ctx, getState());
  enterRule(_localctx, 60, EscriptParser::RuleEnumList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(332);
      enumListEntry();
      setState(335); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == EscriptParser::IDENTIFIER);
    setState(338);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::COMMA) {
      setState(337);
      match(EscriptParser::COMMA);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumListEntryContext ------------------------------------------------------------------

EscriptParser::EnumListEntryContext::EnumListEntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::EnumListEntryContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::EnumListEntryContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::EnumListEntryContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> EscriptParser::EnumListEntryContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::EnumListEntryContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}

std::vector<EscriptParser::EnumListEntryContext *> EscriptParser::EnumListEntryContext::enumListEntry() {
  return getRuleContexts<EscriptParser::EnumListEntryContext>();
}

EscriptParser::EnumListEntryContext* EscriptParser::EnumListEntryContext::enumListEntry(size_t i) {
  return getRuleContext<EscriptParser::EnumListEntryContext>(i);
}


size_t EscriptParser::EnumListEntryContext::getRuleIndex() const {
  return EscriptParser::RuleEnumListEntry;
}

void EscriptParser::EnumListEntryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumListEntry(this);
}

void EscriptParser::EnumListEntryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumListEntry(this);
}


antlrcpp::Any EscriptParser::EnumListEntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitEnumListEntry(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::EnumListEntryContext* EscriptParser::enumListEntry() {
  EnumListEntryContext *_localctx = _tracker.createInstance<EnumListEntryContext>(_ctx, getState());
  enterRule(_localctx, 62, EscriptParser::RuleEnumListEntry);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(340);
    match(EscriptParser::IDENTIFIER);
    setState(343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ASSIGN) {
      setState(341);
      match(EscriptParser::ASSIGN);
      setState(342);
      expression(0);
    }
    setState(349);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(345);
        match(EscriptParser::COMMA);
        setState(346);
        enumListEntry(); 
      }
      setState(351);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBlockStatementGroupContext ------------------------------------------------------------------

EscriptParser::SwitchBlockStatementGroupContext::SwitchBlockStatementGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::BlockContext* EscriptParser::SwitchBlockStatementGroupContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}

std::vector<EscriptParser::SwitchLabelContext *> EscriptParser::SwitchBlockStatementGroupContext::switchLabel() {
  return getRuleContexts<EscriptParser::SwitchLabelContext>();
}

EscriptParser::SwitchLabelContext* EscriptParser::SwitchBlockStatementGroupContext::switchLabel(size_t i) {
  return getRuleContext<EscriptParser::SwitchLabelContext>(i);
}


size_t EscriptParser::SwitchBlockStatementGroupContext::getRuleIndex() const {
  return EscriptParser::RuleSwitchBlockStatementGroup;
}

void EscriptParser::SwitchBlockStatementGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchBlockStatementGroup(this);
}

void EscriptParser::SwitchBlockStatementGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchBlockStatementGroup(this);
}


antlrcpp::Any EscriptParser::SwitchBlockStatementGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitSwitchBlockStatementGroup(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::SwitchBlockStatementGroupContext* EscriptParser::switchBlockStatementGroup() {
  SwitchBlockStatementGroupContext *_localctx = _tracker.createInstance<SwitchBlockStatementGroupContext>(_ctx, getState());
  enterRule(_localctx, 64, EscriptParser::RuleSwitchBlockStatementGroup);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(353); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(352);
              switchLabel();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(355); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(357);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchLabelContext ------------------------------------------------------------------

EscriptParser::SwitchLabelContext::SwitchLabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::SwitchLabelContext::COLON() {
  return getToken(EscriptParser::COLON, 0);
}

EscriptParser::IntegerLiteralContext* EscriptParser::SwitchLabelContext::integerLiteral() {
  return getRuleContext<EscriptParser::IntegerLiteralContext>(0);
}

tree::TerminalNode* EscriptParser::SwitchLabelContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::SwitchLabelContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::SwitchLabelContext::DEFAULT() {
  return getToken(EscriptParser::DEFAULT, 0);
}


size_t EscriptParser::SwitchLabelContext::getRuleIndex() const {
  return EscriptParser::RuleSwitchLabel;
}

void EscriptParser::SwitchLabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchLabel(this);
}

void EscriptParser::SwitchLabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchLabel(this);
}


antlrcpp::Any EscriptParser::SwitchLabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitSwitchLabel(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::SwitchLabelContext* EscriptParser::switchLabel() {
  SwitchLabelContext *_localctx = _tracker.createInstance<SwitchLabelContext>(_ctx, getState());
  enterRule(_localctx, 66, EscriptParser::RuleSwitchLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(367);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::DECIMAL_LITERAL:
      case EscriptParser::HEX_LITERAL:
      case EscriptParser::OCT_LITERAL:
      case EscriptParser::BINARY_LITERAL:
      case EscriptParser::STRING_LITERAL:
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(362);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case EscriptParser::DECIMAL_LITERAL:
          case EscriptParser::HEX_LITERAL:
          case EscriptParser::OCT_LITERAL:
          case EscriptParser::BINARY_LITERAL: {
            setState(359);
            integerLiteral();
            break;
          }

          case EscriptParser::IDENTIFIER: {
            setState(360);
            match(EscriptParser::IDENTIFIER);
            break;
          }

          case EscriptParser::STRING_LITERAL: {
            setState(361);
            match(EscriptParser::STRING_LITERAL);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(364);
        match(EscriptParser::COLON);
        break;
      }

      case EscriptParser::DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(365);
        match(EscriptParser::DEFAULT);
        setState(366);
        match(EscriptParser::COLON);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForGroupContext ------------------------------------------------------------------

EscriptParser::ForGroupContext::ForGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::CstyleForStatementContext* EscriptParser::ForGroupContext::cstyleForStatement() {
  return getRuleContext<EscriptParser::CstyleForStatementContext>(0);
}

EscriptParser::BasicForStatementContext* EscriptParser::ForGroupContext::basicForStatement() {
  return getRuleContext<EscriptParser::BasicForStatementContext>(0);
}


size_t EscriptParser::ForGroupContext::getRuleIndex() const {
  return EscriptParser::RuleForGroup;
}

void EscriptParser::ForGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForGroup(this);
}

void EscriptParser::ForGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForGroup(this);
}


antlrcpp::Any EscriptParser::ForGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitForGroup(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ForGroupContext* EscriptParser::forGroup() {
  ForGroupContext *_localctx = _tracker.createInstance<ForGroupContext>(_ctx, getState());
  enterRule(_localctx, 68, EscriptParser::RuleForGroup);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(371);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(369);
        cstyleForStatement();
        break;
      }

      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(370);
        basicForStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BasicForStatementContext ------------------------------------------------------------------

EscriptParser::BasicForStatementContext::BasicForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::BasicForStatementContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::BasicForStatementContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

std::vector<EscriptParser::ExpressionContext *> EscriptParser::BasicForStatementContext::expression() {
  return getRuleContexts<EscriptParser::ExpressionContext>();
}

EscriptParser::ExpressionContext* EscriptParser::BasicForStatementContext::expression(size_t i) {
  return getRuleContext<EscriptParser::ExpressionContext>(i);
}

tree::TerminalNode* EscriptParser::BasicForStatementContext::TO() {
  return getToken(EscriptParser::TO, 0);
}

EscriptParser::BlockContext* EscriptParser::BasicForStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}


size_t EscriptParser::BasicForStatementContext::getRuleIndex() const {
  return EscriptParser::RuleBasicForStatement;
}

void EscriptParser::BasicForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicForStatement(this);
}

void EscriptParser::BasicForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicForStatement(this);
}


antlrcpp::Any EscriptParser::BasicForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitBasicForStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::BasicForStatementContext* EscriptParser::basicForStatement() {
  BasicForStatementContext *_localctx = _tracker.createInstance<BasicForStatementContext>(_ctx, getState());
  enterRule(_localctx, 70, EscriptParser::RuleBasicForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
    match(EscriptParser::IDENTIFIER);
    setState(374);
    match(EscriptParser::ASSIGN);
    setState(375);
    expression(0);
    setState(376);
    match(EscriptParser::TO);
    setState(377);
    expression(0);
    setState(378);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CstyleForStatementContext ------------------------------------------------------------------

EscriptParser::CstyleForStatementContext::CstyleForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::CstyleForStatementContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

std::vector<EscriptParser::ExpressionContext *> EscriptParser::CstyleForStatementContext::expression() {
  return getRuleContexts<EscriptParser::ExpressionContext>();
}

EscriptParser::ExpressionContext* EscriptParser::CstyleForStatementContext::expression(size_t i) {
  return getRuleContext<EscriptParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::CstyleForStatementContext::SEMI() {
  return getTokens(EscriptParser::SEMI);
}

tree::TerminalNode* EscriptParser::CstyleForStatementContext::SEMI(size_t i) {
  return getToken(EscriptParser::SEMI, i);
}

tree::TerminalNode* EscriptParser::CstyleForStatementContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::BlockContext* EscriptParser::CstyleForStatementContext::block() {
  return getRuleContext<EscriptParser::BlockContext>(0);
}


size_t EscriptParser::CstyleForStatementContext::getRuleIndex() const {
  return EscriptParser::RuleCstyleForStatement;
}

void EscriptParser::CstyleForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCstyleForStatement(this);
}

void EscriptParser::CstyleForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCstyleForStatement(this);
}


antlrcpp::Any EscriptParser::CstyleForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitCstyleForStatement(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::CstyleForStatementContext* EscriptParser::cstyleForStatement() {
  CstyleForStatementContext *_localctx = _tracker.createInstance<CstyleForStatementContext>(_ctx, getState());
  enterRule(_localctx, 72, EscriptParser::RuleCstyleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    match(EscriptParser::LPAREN);
    setState(381);
    expression(0);
    setState(382);
    match(EscriptParser::SEMI);
    setState(383);
    expression(0);
    setState(384);
    match(EscriptParser::SEMI);
    setState(385);
    expression(0);
    setState(386);
    match(EscriptParser::RPAREN);
    setState(387);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

EscriptParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::IdentifierListContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::IdentifierListContext::COMMA() {
  return getToken(EscriptParser::COMMA, 0);
}

EscriptParser::IdentifierListContext* EscriptParser::IdentifierListContext::identifierList() {
  return getRuleContext<EscriptParser::IdentifierListContext>(0);
}


size_t EscriptParser::IdentifierListContext::getRuleIndex() const {
  return EscriptParser::RuleIdentifierList;
}

void EscriptParser::IdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList(this);
}

void EscriptParser::IdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList(this);
}


antlrcpp::Any EscriptParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::IdentifierListContext* EscriptParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 74, EscriptParser::RuleIdentifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    match(EscriptParser::IDENTIFIER);
    setState(392);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::COMMA) {
      setState(390);
      match(EscriptParser::COMMA);
      setState(391);
      identifierList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationListContext ------------------------------------------------------------------

EscriptParser::VariableDeclarationListContext::VariableDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::VariableDeclarationContext *> EscriptParser::VariableDeclarationListContext::variableDeclaration() {
  return getRuleContexts<EscriptParser::VariableDeclarationContext>();
}

EscriptParser::VariableDeclarationContext* EscriptParser::VariableDeclarationListContext::variableDeclaration(size_t i) {
  return getRuleContext<EscriptParser::VariableDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::VariableDeclarationListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::VariableDeclarationListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::VariableDeclarationListContext::getRuleIndex() const {
  return EscriptParser::RuleVariableDeclarationList;
}

void EscriptParser::VariableDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationList(this);
}

void EscriptParser::VariableDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationList(this);
}


antlrcpp::Any EscriptParser::VariableDeclarationListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::VariableDeclarationListContext* EscriptParser::variableDeclarationList() {
  VariableDeclarationListContext *_localctx = _tracker.createInstance<VariableDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 76, EscriptParser::RuleVariableDeclarationList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    variableDeclaration();
    setState(399);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(395);
      match(EscriptParser::COMMA);
      setState(396);
      variableDeclaration();
      setState(401);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

EscriptParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

EscriptParser::VariableDeclarationInitializerContext* EscriptParser::VariableDeclarationContext::variableDeclarationInitializer() {
  return getRuleContext<EscriptParser::VariableDeclarationInitializerContext>(0);
}


size_t EscriptParser::VariableDeclarationContext::getRuleIndex() const {
  return EscriptParser::RuleVariableDeclaration;
}

void EscriptParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void EscriptParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


antlrcpp::Any EscriptParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::VariableDeclarationContext* EscriptParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 78, EscriptParser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
    match(EscriptParser::IDENTIFIER);
    setState(404);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ARRAY

    || _la == EscriptParser::ASSIGN) {
      setState(403);
      variableDeclarationInitializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramParametersContext ------------------------------------------------------------------

EscriptParser::ProgramParametersContext::ProgramParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ProgramParametersContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::ProgramParametersContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::ProgramParameterListContext* EscriptParser::ProgramParametersContext::programParameterList() {
  return getRuleContext<EscriptParser::ProgramParameterListContext>(0);
}


size_t EscriptParser::ProgramParametersContext::getRuleIndex() const {
  return EscriptParser::RuleProgramParameters;
}

void EscriptParser::ProgramParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramParameters(this);
}

void EscriptParser::ProgramParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramParameters(this);
}


antlrcpp::Any EscriptParser::ProgramParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitProgramParameters(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ProgramParametersContext* EscriptParser::programParameters() {
  ProgramParametersContext *_localctx = _tracker.createInstance<ProgramParametersContext>(_ctx, getState());
  enterRule(_localctx, 80, EscriptParser::RuleProgramParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    match(EscriptParser::LPAREN);
    setState(408);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::UNUSED

    || _la == EscriptParser::IDENTIFIER) {
      setState(407);
      programParameterList();
    }
    setState(410);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramParameterListContext ------------------------------------------------------------------

EscriptParser::ProgramParameterListContext::ProgramParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::ProgramParameterContext *> EscriptParser::ProgramParameterListContext::programParameter() {
  return getRuleContexts<EscriptParser::ProgramParameterContext>();
}

EscriptParser::ProgramParameterContext* EscriptParser::ProgramParameterListContext::programParameter(size_t i) {
  return getRuleContext<EscriptParser::ProgramParameterContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::ProgramParameterListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::ProgramParameterListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::ProgramParameterListContext::getRuleIndex() const {
  return EscriptParser::RuleProgramParameterList;
}

void EscriptParser::ProgramParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramParameterList(this);
}

void EscriptParser::ProgramParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramParameterList(this);
}


antlrcpp::Any EscriptParser::ProgramParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitProgramParameterList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ProgramParameterListContext* EscriptParser::programParameterList() {
  ProgramParameterListContext *_localctx = _tracker.createInstance<ProgramParameterListContext>(_ctx, getState());
  enterRule(_localctx, 82, EscriptParser::RuleProgramParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    programParameter();
    setState(419);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 60) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 60)) & ((1ULL << (EscriptParser::UNUSED - 60))
      | (1ULL << (EscriptParser::COMMA - 60))
      | (1ULL << (EscriptParser::IDENTIFIER - 60)))) != 0)) {
      setState(414);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == EscriptParser::COMMA) {
        setState(413);
        match(EscriptParser::COMMA);
      }
      setState(416);
      programParameter();
      setState(421);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramParameterContext ------------------------------------------------------------------

EscriptParser::ProgramParameterContext::ProgramParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ProgramParameterContext::UNUSED() {
  return getToken(EscriptParser::UNUSED, 0);
}

tree::TerminalNode* EscriptParser::ProgramParameterContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::ProgramParameterContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::ProgramParameterContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}


size_t EscriptParser::ProgramParameterContext::getRuleIndex() const {
  return EscriptParser::RuleProgramParameter;
}

void EscriptParser::ProgramParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramParameter(this);
}

void EscriptParser::ProgramParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramParameter(this);
}


antlrcpp::Any EscriptParser::ProgramParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitProgramParameter(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ProgramParameterContext* EscriptParser::programParameter() {
  ProgramParameterContext *_localctx = _tracker.createInstance<ProgramParameterContext>(_ctx, getState());
  enterRule(_localctx, 84, EscriptParser::RuleProgramParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(429);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::UNUSED: {
        enterOuterAlt(_localctx, 1);
        setState(422);
        match(EscriptParser::UNUSED);
        setState(423);
        match(EscriptParser::IDENTIFIER);
        break;
      }

      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(424);
        match(EscriptParser::IDENTIFIER);
        setState(427);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == EscriptParser::ASSIGN) {
          setState(425);
          match(EscriptParser::ASSIGN);
          setState(426);
          expression(0);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParametersContext ------------------------------------------------------------------

EscriptParser::FunctionParametersContext::FunctionParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::FunctionParametersContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::FunctionParametersContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::FunctionParameterListContext* EscriptParser::FunctionParametersContext::functionParameterList() {
  return getRuleContext<EscriptParser::FunctionParameterListContext>(0);
}


size_t EscriptParser::FunctionParametersContext::getRuleIndex() const {
  return EscriptParser::RuleFunctionParameters;
}

void EscriptParser::FunctionParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameters(this);
}

void EscriptParser::FunctionParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameters(this);
}


antlrcpp::Any EscriptParser::FunctionParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionParameters(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::FunctionParametersContext* EscriptParser::functionParameters() {
  FunctionParametersContext *_localctx = _tracker.createInstance<FunctionParametersContext>(_ctx, getState());
  enterRule(_localctx, 86, EscriptParser::RuleFunctionParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    match(EscriptParser::LPAREN);
    setState(433);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 59) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 59)) & ((1ULL << (EscriptParser::BYREF - 59))
      | (1ULL << (EscriptParser::UNUSED - 59))
      | (1ULL << (EscriptParser::IDENTIFIER - 59)))) != 0)) {
      setState(432);
      functionParameterList();
    }
    setState(435);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParameterListContext ------------------------------------------------------------------

EscriptParser::FunctionParameterListContext::FunctionParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::FunctionParameterContext *> EscriptParser::FunctionParameterListContext::functionParameter() {
  return getRuleContexts<EscriptParser::FunctionParameterContext>();
}

EscriptParser::FunctionParameterContext* EscriptParser::FunctionParameterListContext::functionParameter(size_t i) {
  return getRuleContext<EscriptParser::FunctionParameterContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::FunctionParameterListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::FunctionParameterListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::FunctionParameterListContext::getRuleIndex() const {
  return EscriptParser::RuleFunctionParameterList;
}

void EscriptParser::FunctionParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameterList(this);
}

void EscriptParser::FunctionParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameterList(this);
}


antlrcpp::Any EscriptParser::FunctionParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionParameterList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::FunctionParameterListContext* EscriptParser::functionParameterList() {
  FunctionParameterListContext *_localctx = _tracker.createInstance<FunctionParameterListContext>(_ctx, getState());
  enterRule(_localctx, 88, EscriptParser::RuleFunctionParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(437);
    functionParameter();
    setState(442);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(438);
      match(EscriptParser::COMMA);
      setState(439);
      functionParameter();
      setState(444);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParameterContext ------------------------------------------------------------------

EscriptParser::FunctionParameterContext::FunctionParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::FunctionParameterContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::FunctionParameterContext::BYREF() {
  return getToken(EscriptParser::BYREF, 0);
}

tree::TerminalNode* EscriptParser::FunctionParameterContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::FunctionParameterContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::FunctionParameterContext::UNUSED() {
  return getToken(EscriptParser::UNUSED, 0);
}


size_t EscriptParser::FunctionParameterContext::getRuleIndex() const {
  return EscriptParser::RuleFunctionParameter;
}

void EscriptParser::FunctionParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameter(this);
}

void EscriptParser::FunctionParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameter(this);
}


antlrcpp::Any EscriptParser::FunctionParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitFunctionParameter(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::FunctionParameterContext* EscriptParser::functionParameter() {
  FunctionParameterContext *_localctx = _tracker.createInstance<FunctionParameterContext>(_ctx, getState());
  enterRule(_localctx, 90, EscriptParser::RuleFunctionParameter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(455);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::BYREF:
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(446);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == EscriptParser::BYREF) {
          setState(445);
          match(EscriptParser::BYREF);
        }
        setState(448);
        match(EscriptParser::IDENTIFIER);
        setState(451);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == EscriptParser::ASSIGN) {
          setState(449);
          match(EscriptParser::ASSIGN);
          setState(450);
          expression(0);
        }
        break;
      }

      case EscriptParser::UNUSED: {
        enterOuterAlt(_localctx, 2);
        setState(453);
        match(EscriptParser::UNUSED);
        setState(454);
        match(EscriptParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopedMethodCallContext ------------------------------------------------------------------

EscriptParser::ScopedMethodCallContext::ScopedMethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ScopedMethodCallContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::ScopedMethodCallContext::COLONCOLON() {
  return getToken(EscriptParser::COLONCOLON, 0);
}

EscriptParser::MethodCallContext* EscriptParser::ScopedMethodCallContext::methodCall() {
  return getRuleContext<EscriptParser::MethodCallContext>(0);
}


size_t EscriptParser::ScopedMethodCallContext::getRuleIndex() const {
  return EscriptParser::RuleScopedMethodCall;
}

void EscriptParser::ScopedMethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScopedMethodCall(this);
}

void EscriptParser::ScopedMethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScopedMethodCall(this);
}


antlrcpp::Any EscriptParser::ScopedMethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitScopedMethodCall(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ScopedMethodCallContext* EscriptParser::scopedMethodCall() {
  ScopedMethodCallContext *_localctx = _tracker.createInstance<ScopedMethodCallContext>(_ctx, getState());
  enterRule(_localctx, 92, EscriptParser::RuleScopedMethodCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(457);
    match(EscriptParser::IDENTIFIER);
    setState(458);
    match(EscriptParser::COLONCOLON);
    setState(459);
    methodCall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

EscriptParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::PrimaryContext* EscriptParser::ExpressionContext::primary() {
  return getRuleContext<EscriptParser::PrimaryContext>(0);
}

EscriptParser::MethodCallContext* EscriptParser::ExpressionContext::methodCall() {
  return getRuleContext<EscriptParser::MethodCallContext>(0);
}

EscriptParser::ScopedMethodCallContext* EscriptParser::ExpressionContext::scopedMethodCall() {
  return getRuleContext<EscriptParser::ScopedMethodCallContext>(0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::ARRAY() {
  return getToken(EscriptParser::ARRAY, 0);
}

EscriptParser::ArrayInitializerContext* EscriptParser::ExpressionContext::arrayInitializer() {
  return getRuleContext<EscriptParser::ArrayInitializerContext>(0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::STRUCT() {
  return getToken(EscriptParser::STRUCT, 0);
}

EscriptParser::StructInitializerContext* EscriptParser::ExpressionContext::structInitializer() {
  return getRuleContext<EscriptParser::StructInitializerContext>(0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DICTIONARY() {
  return getToken(EscriptParser::DICTIONARY, 0);
}

EscriptParser::DictInitializerContext* EscriptParser::ExpressionContext::dictInitializer() {
  return getRuleContext<EscriptParser::DictInitializerContext>(0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::KEYWORD_ERROR() {
  return getToken(EscriptParser::KEYWORD_ERROR, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

std::vector<EscriptParser::ExpressionListContext *> EscriptParser::ExpressionContext::expressionList() {
  return getRuleContexts<EscriptParser::ExpressionListContext>();
}

EscriptParser::ExpressionListContext* EscriptParser::ExpressionContext::expressionList(size_t i) {
  return getRuleContext<EscriptParser::ExpressionListContext>(i);
}

tree::TerminalNode* EscriptParser::ExpressionContext::AT() {
  return getToken(EscriptParser::AT, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

std::vector<EscriptParser::ExpressionContext *> EscriptParser::ExpressionContext::expression() {
  return getRuleContexts<EscriptParser::ExpressionContext>();
}

EscriptParser::ExpressionContext* EscriptParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<EscriptParser::ExpressionContext>(i);
}

tree::TerminalNode* EscriptParser::ExpressionContext::ADD() {
  return getToken(EscriptParser::ADD, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::SUB() {
  return getToken(EscriptParser::SUB, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::INC() {
  return getToken(EscriptParser::INC, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DEC() {
  return getToken(EscriptParser::DEC, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::TILDE() {
  return getToken(EscriptParser::TILDE, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::BANG_A() {
  return getToken(EscriptParser::BANG_A, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::BANG_B() {
  return getToken(EscriptParser::BANG_B, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::MUL() {
  return getToken(EscriptParser::MUL, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DIV() {
  return getToken(EscriptParser::DIV, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::MOD() {
  return getToken(EscriptParser::MOD, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::LSHIFT() {
  return getToken(EscriptParser::LSHIFT, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::RSHIFT() {
  return getToken(EscriptParser::RSHIFT, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::LE() {
  return getToken(EscriptParser::LE, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::GE() {
  return getToken(EscriptParser::GE, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::GT() {
  return getToken(EscriptParser::GT, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::LT() {
  return getToken(EscriptParser::LT, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::EQUAL() {
  return getToken(EscriptParser::EQUAL, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::NOTEQUAL_B() {
  return getToken(EscriptParser::NOTEQUAL_B, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::NOTEQUAL_A() {
  return getToken(EscriptParser::NOTEQUAL_A, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::BITAND() {
  return getToken(EscriptParser::BITAND, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::CARET() {
  return getToken(EscriptParser::CARET, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::BITOR() {
  return getToken(EscriptParser::BITOR, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::KEYWORD_IN() {
  return getToken(EscriptParser::KEYWORD_IN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::AND_A() {
  return getToken(EscriptParser::AND_A, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::AND_B() {
  return getToken(EscriptParser::AND_B, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::OR_A() {
  return getToken(EscriptParser::OR_A, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::OR_B() {
  return getToken(EscriptParser::OR_B, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::ADD_ASSIGN() {
  return getToken(EscriptParser::ADD_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::SUB_ASSIGN() {
  return getToken(EscriptParser::SUB_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::MUL_ASSIGN() {
  return getToken(EscriptParser::MUL_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DIV_ASSIGN() {
  return getToken(EscriptParser::DIV_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::MOD_ASSIGN() {
  return getToken(EscriptParser::MOD_ASSIGN, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::ADDMEMBER() {
  return getToken(EscriptParser::ADDMEMBER, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DELMEMBER() {
  return getToken(EscriptParser::DELMEMBER, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::CHKMEMBER() {
  return getToken(EscriptParser::CHKMEMBER, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::DOT() {
  return getToken(EscriptParser::DOT, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::LBRACK() {
  return getToken(EscriptParser::LBRACK, 0);
}

tree::TerminalNode* EscriptParser::ExpressionContext::RBRACK() {
  return getToken(EscriptParser::RBRACK, 0);
}


size_t EscriptParser::ExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleExpression;
}

void EscriptParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void EscriptParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any EscriptParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


EscriptParser::ExpressionContext* EscriptParser::expression() {
   return expression(0);
}

EscriptParser::ExpressionContext* EscriptParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  EscriptParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  EscriptParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 94;
  enterRecursionRule(_localctx, 94, EscriptParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(495);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(462);
      primary();
      break;
    }

    case 2: {
      setState(463);
      methodCall();
      break;
    }

    case 3: {
      setState(464);
      scopedMethodCall();
      break;
    }

    case 4: {
      setState(465);
      match(EscriptParser::ARRAY);
      setState(467);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
      case 1: {
        setState(466);
        arrayInitializer();
        break;
      }

      }
      break;
    }

    case 5: {
      setState(469);
      match(EscriptParser::STRUCT);
      setState(471);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
      case 1: {
        setState(470);
        structInitializer();
        break;
      }

      }
      break;
    }

    case 6: {
      setState(473);
      match(EscriptParser::DICTIONARY);
      setState(475);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
      case 1: {
        setState(474);
        dictInitializer();
        break;
      }

      }
      break;
    }

    case 7: {
      setState(477);
      match(EscriptParser::KEYWORD_ERROR);
      setState(479);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
      case 1: {
        setState(478);
        structInitializer();
        break;
      }

      }
      break;
    }

    case 8: {
      setState(481);
      match(EscriptParser::LBRACE);
      setState(485);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
        | (1ULL << EscriptParser::BANG_B)
        | (1ULL << EscriptParser::KEYWORD_ERROR)
        | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
        | (1ULL << (EscriptParser::ARRAY - 64))
        | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_LITERAL - 64))
        | (1ULL << (EscriptParser::OCT_LITERAL - 64))
        | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
        | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
        | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
        | (1ULL << (EscriptParser::STRING_LITERAL - 64))
        | (1ULL << (EscriptParser::NULL_LITERAL - 64))
        | (1ULL << (EscriptParser::LPAREN - 64))
        | (1ULL << (EscriptParser::LBRACE - 64))
        | (1ULL << (EscriptParser::ADD - 64))
        | (1ULL << (EscriptParser::SUB - 64))
        | (1ULL << (EscriptParser::TILDE - 64))
        | (1ULL << (EscriptParser::AT - 64))
        | (1ULL << (EscriptParser::INC - 64))
        | (1ULL << (EscriptParser::DEC - 64))
        | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
        setState(482);
        expressionList();
        setState(487);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(488);
      match(EscriptParser::RBRACE);
      break;
    }

    case 9: {
      setState(489);
      match(EscriptParser::AT);
      setState(490);
      match(EscriptParser::IDENTIFIER);
      break;
    }

    case 10: {
      setState(491);
      dynamic_cast<ExpressionContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 88) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 88)) & ((1ULL << (EscriptParser::ADD - 88))
        | (1ULL << (EscriptParser::SUB - 88))
        | (1ULL << (EscriptParser::INC - 88))
        | (1ULL << (EscriptParser::DEC - 88)))) != 0))) {
        dynamic_cast<ExpressionContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(492);
      expression(14);
      break;
    }

    case 11: {
      setState(493);
      dynamic_cast<ExpressionContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 57) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 57)) & ((1ULL << (EscriptParser::BANG_A - 57))
        | (1ULL << (EscriptParser::BANG_B - 57))
        | (1ULL << (EscriptParser::TILDE - 57)))) != 0))) {
        dynamic_cast<ExpressionContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(494);
      expression(13);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(549);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(547);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(497);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(498);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 85) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 85)) & ((1ULL << (EscriptParser::MUL - 85))
            | (1ULL << (EscriptParser::DIV - 85))
            | (1ULL << (EscriptParser::MOD - 85)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(499);
          expression(13);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(500);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(501);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == EscriptParser::ADD

          || _la == EscriptParser::SUB)) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(502);
          expression(12);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(503);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(504);
          _la = _input->LA(1);
          if (!(_la == EscriptParser::RSHIFT

          || _la == EscriptParser::LSHIFT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(505);
          expression(11);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(506);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(507);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 95) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 95)) & ((1ULL << (EscriptParser::LE - 95))
            | (1ULL << (EscriptParser::LT - 95))
            | (1ULL << (EscriptParser::GE - 95))
            | (1ULL << (EscriptParser::GT - 95)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(508);
          expression(10);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(509);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(510);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 104) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 104)) & ((1ULL << (EscriptParser::NOTEQUAL_A - 104))
            | (1ULL << (EscriptParser::NOTEQUAL_B - 104))
            | (1ULL << (EscriptParser::EQUAL - 104)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(511);
          expression(9);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(512);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(513);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(EscriptParser::BITAND);
          setState(514);
          expression(8);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(515);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(516);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(EscriptParser::CARET);
          setState(517);
          expression(7);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(518);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(519);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(EscriptParser::BITOR);
          setState(520);
          expression(6);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(521);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(522);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(EscriptParser::KEYWORD_IN);
          setState(523);
          expression(5);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(524);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(525);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == EscriptParser::AND_A

          || _la == EscriptParser::AND_B)) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(526);
          expression(4);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(527);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(528);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == EscriptParser::OR_A

          || _la == EscriptParser::OR_B)) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(529);
          expression(3);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(530);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(531);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(((((_la - 90) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 90)) & ((1ULL << (EscriptParser::ADD_ASSIGN - 90))
            | (1ULL << (EscriptParser::SUB_ASSIGN - 90))
            | (1ULL << (EscriptParser::MUL_ASSIGN - 90))
            | (1ULL << (EscriptParser::DIV_ASSIGN - 90))
            | (1ULL << (EscriptParser::MOD_ASSIGN - 90))
            | (1ULL << (EscriptParser::ASSIGN - 90))
            | (1ULL << (EscriptParser::ADDMEMBER - 90))
            | (1ULL << (EscriptParser::DELMEMBER - 90))
            | (1ULL << (EscriptParser::CHKMEMBER - 90)))) != 0))) {
            dynamic_cast<ExpressionContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(532);
          expression(1);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(533);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(534);
          dynamic_cast<ExpressionContext *>(_localctx)->bop = match(EscriptParser::DOT);
          setState(538);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
          case 1: {
            setState(535);
            match(EscriptParser::IDENTIFIER);
            break;
          }

          case 2: {
            setState(536);
            match(EscriptParser::STRING_LITERAL);
            break;
          }

          case 3: {
            setState(537);
            methodCall();
            break;
          }

          }
          break;
        }

        case 14: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(540);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(541);
          match(EscriptParser::LBRACK);
          setState(542);
          expressionList();
          setState(543);
          match(EscriptParser::RBRACK);
          break;
        }

        case 15: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(545);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(546);
          dynamic_cast<ExpressionContext *>(_localctx)->postfix = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == EscriptParser::INC

          || _la == EscriptParser::DEC)) {
            dynamic_cast<ExpressionContext *>(_localctx)->postfix = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        } 
      }
      setState(551);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

EscriptParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::PrimaryContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::PrimaryContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::PrimaryContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::LiteralContext* EscriptParser::PrimaryContext::literal() {
  return getRuleContext<EscriptParser::LiteralContext>(0);
}

tree::TerminalNode* EscriptParser::PrimaryContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}


size_t EscriptParser::PrimaryContext::getRuleIndex() const {
  return EscriptParser::RulePrimary;
}

void EscriptParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void EscriptParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}


antlrcpp::Any EscriptParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::PrimaryContext* EscriptParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 96, EscriptParser::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(558);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(552);
        match(EscriptParser::LPAREN);
        setState(553);
        expression(0);
        setState(554);
        match(EscriptParser::RPAREN);
        break;
      }

      case EscriptParser::DECIMAL_LITERAL:
      case EscriptParser::HEX_LITERAL:
      case EscriptParser::OCT_LITERAL:
      case EscriptParser::BINARY_LITERAL:
      case EscriptParser::FLOAT_LITERAL:
      case EscriptParser::HEX_FLOAT_LITERAL:
      case EscriptParser::CHAR_LITERAL:
      case EscriptParser::STRING_LITERAL:
      case EscriptParser::NULL_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(556);
        literal();
        break;
      }

      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 3);
        setState(557);
        match(EscriptParser::IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParExpressionContext ------------------------------------------------------------------

EscriptParser::ParExpressionContext::ParExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ParExpressionContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::ParExpressionContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::ParExpressionContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}


size_t EscriptParser::ParExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleParExpression;
}

void EscriptParser::ParExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParExpression(this);
}

void EscriptParser::ParExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParExpression(this);
}


antlrcpp::Any EscriptParser::ParExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitParExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ParExpressionContext* EscriptParser::parExpression() {
  ParExpressionContext *_localctx = _tracker.createInstance<ParExpressionContext>(_ctx, getState());
  enterRule(_localctx, 98, EscriptParser::RuleParExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(560);
    match(EscriptParser::LPAREN);
    setState(561);
    expression(0);
    setState(562);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

EscriptParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::ExpressionContext *> EscriptParser::ExpressionListContext::expression() {
  return getRuleContexts<EscriptParser::ExpressionContext>();
}

EscriptParser::ExpressionContext* EscriptParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<EscriptParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::ExpressionListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::ExpressionListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::ExpressionListContext::getRuleIndex() const {
  return EscriptParser::RuleExpressionList;
}

void EscriptParser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void EscriptParser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any EscriptParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ExpressionListContext* EscriptParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 100, EscriptParser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    expression(0);
    setState(569);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(565);
      match(EscriptParser::COMMA);
      setState(566);
      expression(0);
      setState(571);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallContext ------------------------------------------------------------------

EscriptParser::MethodCallContext::MethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::MethodCallContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::MethodCallContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::MethodCallContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}

EscriptParser::ExpressionListContext* EscriptParser::MethodCallContext::expressionList() {
  return getRuleContext<EscriptParser::ExpressionListContext>(0);
}


size_t EscriptParser::MethodCallContext::getRuleIndex() const {
  return EscriptParser::RuleMethodCall;
}

void EscriptParser::MethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall(this);
}

void EscriptParser::MethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall(this);
}


antlrcpp::Any EscriptParser::MethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitMethodCall(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::MethodCallContext* EscriptParser::methodCall() {
  MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
  enterRule(_localctx, 102, EscriptParser::RuleMethodCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    match(EscriptParser::IDENTIFIER);
    setState(573);
    match(EscriptParser::LPAREN);
    setState(575);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
      | (1ULL << EscriptParser::BANG_B)
      | (1ULL << EscriptParser::KEYWORD_ERROR)
      | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
      | (1ULL << (EscriptParser::ARRAY - 64))
      | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_LITERAL - 64))
      | (1ULL << (EscriptParser::OCT_LITERAL - 64))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
      | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
      | (1ULL << (EscriptParser::STRING_LITERAL - 64))
      | (1ULL << (EscriptParser::NULL_LITERAL - 64))
      | (1ULL << (EscriptParser::LPAREN - 64))
      | (1ULL << (EscriptParser::LBRACE - 64))
      | (1ULL << (EscriptParser::ADD - 64))
      | (1ULL << (EscriptParser::SUB - 64))
      | (1ULL << (EscriptParser::TILDE - 64))
      | (1ULL << (EscriptParser::AT - 64))
      | (1ULL << (EscriptParser::INC - 64))
      | (1ULL << (EscriptParser::DEC - 64))
      | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
      setState(574);
      expressionList();
    }
    setState(577);
    match(EscriptParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructInitializerExpressionContext ------------------------------------------------------------------

EscriptParser::StructInitializerExpressionContext::StructInitializerExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::StructInitializerExpressionContext::IDENTIFIER() {
  return getToken(EscriptParser::IDENTIFIER, 0);
}

tree::TerminalNode* EscriptParser::StructInitializerExpressionContext::ASSIGN() {
  return getToken(EscriptParser::ASSIGN, 0);
}

EscriptParser::ExpressionContext* EscriptParser::StructInitializerExpressionContext::expression() {
  return getRuleContext<EscriptParser::ExpressionContext>(0);
}

tree::TerminalNode* EscriptParser::StructInitializerExpressionContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}


size_t EscriptParser::StructInitializerExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleStructInitializerExpression;
}

void EscriptParser::StructInitializerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructInitializerExpression(this);
}

void EscriptParser::StructInitializerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructInitializerExpression(this);
}


antlrcpp::Any EscriptParser::StructInitializerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitStructInitializerExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::StructInitializerExpressionContext* EscriptParser::structInitializerExpression() {
  StructInitializerExpressionContext *_localctx = _tracker.createInstance<StructInitializerExpressionContext>(_ctx, getState());
  enterRule(_localctx, 104, EscriptParser::RuleStructInitializerExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(589);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(579);
        match(EscriptParser::IDENTIFIER);
        setState(582);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == EscriptParser::ASSIGN) {
          setState(580);
          match(EscriptParser::ASSIGN);
          setState(581);
          expression(0);
        }
        break;
      }

      case EscriptParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(584);
        match(EscriptParser::STRING_LITERAL);
        setState(587);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == EscriptParser::ASSIGN) {
          setState(585);
          match(EscriptParser::ASSIGN);
          setState(586);
          expression(0);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructInitializerExpressionListContext ------------------------------------------------------------------

EscriptParser::StructInitializerExpressionListContext::StructInitializerExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::StructInitializerExpressionContext *> EscriptParser::StructInitializerExpressionListContext::structInitializerExpression() {
  return getRuleContexts<EscriptParser::StructInitializerExpressionContext>();
}

EscriptParser::StructInitializerExpressionContext* EscriptParser::StructInitializerExpressionListContext::structInitializerExpression(size_t i) {
  return getRuleContext<EscriptParser::StructInitializerExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::StructInitializerExpressionListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::StructInitializerExpressionListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::StructInitializerExpressionListContext::getRuleIndex() const {
  return EscriptParser::RuleStructInitializerExpressionList;
}

void EscriptParser::StructInitializerExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructInitializerExpressionList(this);
}

void EscriptParser::StructInitializerExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructInitializerExpressionList(this);
}


antlrcpp::Any EscriptParser::StructInitializerExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitStructInitializerExpressionList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::StructInitializerExpressionListContext* EscriptParser::structInitializerExpressionList() {
  StructInitializerExpressionListContext *_localctx = _tracker.createInstance<StructInitializerExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 106, EscriptParser::RuleStructInitializerExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(591);
    structInitializerExpression();
    setState(596);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(592);
      match(EscriptParser::COMMA);
      setState(593);
      structInitializerExpression();
      setState(598);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructInitializerContext ------------------------------------------------------------------

EscriptParser::StructInitializerContext::StructInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::StructInitializerContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::StructInitializerContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

std::vector<EscriptParser::StructInitializerExpressionListContext *> EscriptParser::StructInitializerContext::structInitializerExpressionList() {
  return getRuleContexts<EscriptParser::StructInitializerExpressionListContext>();
}

EscriptParser::StructInitializerExpressionListContext* EscriptParser::StructInitializerContext::structInitializerExpressionList(size_t i) {
  return getRuleContext<EscriptParser::StructInitializerExpressionListContext>(i);
}


size_t EscriptParser::StructInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleStructInitializer;
}

void EscriptParser::StructInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructInitializer(this);
}

void EscriptParser::StructInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructInitializer(this);
}


antlrcpp::Any EscriptParser::StructInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitStructInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::StructInitializerContext* EscriptParser::structInitializer() {
  StructInitializerContext *_localctx = _tracker.createInstance<StructInitializerContext>(_ctx, getState());
  enterRule(_localctx, 108, EscriptParser::RuleStructInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    match(EscriptParser::LBRACE);
    setState(603);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::STRING_LITERAL

    || _la == EscriptParser::IDENTIFIER) {
      setState(600);
      structInitializerExpressionList();
      setState(605);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(606);
    match(EscriptParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictInitializerExpressionContext ------------------------------------------------------------------

EscriptParser::DictInitializerExpressionContext::DictInitializerExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::ExpressionContext *> EscriptParser::DictInitializerExpressionContext::expression() {
  return getRuleContexts<EscriptParser::ExpressionContext>();
}

EscriptParser::ExpressionContext* EscriptParser::DictInitializerExpressionContext::expression(size_t i) {
  return getRuleContext<EscriptParser::ExpressionContext>(i);
}

tree::TerminalNode* EscriptParser::DictInitializerExpressionContext::ARROW() {
  return getToken(EscriptParser::ARROW, 0);
}


size_t EscriptParser::DictInitializerExpressionContext::getRuleIndex() const {
  return EscriptParser::RuleDictInitializerExpression;
}

void EscriptParser::DictInitializerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictInitializerExpression(this);
}

void EscriptParser::DictInitializerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictInitializerExpression(this);
}


antlrcpp::Any EscriptParser::DictInitializerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDictInitializerExpression(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DictInitializerExpressionContext* EscriptParser::dictInitializerExpression() {
  DictInitializerExpressionContext *_localctx = _tracker.createInstance<DictInitializerExpressionContext>(_ctx, getState());
  enterRule(_localctx, 110, EscriptParser::RuleDictInitializerExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(608);
    expression(0);
    setState(611);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == EscriptParser::ARROW) {
      setState(609);
      match(EscriptParser::ARROW);
      setState(610);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictInitializerExpressionListContext ------------------------------------------------------------------

EscriptParser::DictInitializerExpressionListContext::DictInitializerExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<EscriptParser::DictInitializerExpressionContext *> EscriptParser::DictInitializerExpressionListContext::dictInitializerExpression() {
  return getRuleContexts<EscriptParser::DictInitializerExpressionContext>();
}

EscriptParser::DictInitializerExpressionContext* EscriptParser::DictInitializerExpressionListContext::dictInitializerExpression(size_t i) {
  return getRuleContext<EscriptParser::DictInitializerExpressionContext>(i);
}

std::vector<tree::TerminalNode *> EscriptParser::DictInitializerExpressionListContext::COMMA() {
  return getTokens(EscriptParser::COMMA);
}

tree::TerminalNode* EscriptParser::DictInitializerExpressionListContext::COMMA(size_t i) {
  return getToken(EscriptParser::COMMA, i);
}


size_t EscriptParser::DictInitializerExpressionListContext::getRuleIndex() const {
  return EscriptParser::RuleDictInitializerExpressionList;
}

void EscriptParser::DictInitializerExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictInitializerExpressionList(this);
}

void EscriptParser::DictInitializerExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictInitializerExpressionList(this);
}


antlrcpp::Any EscriptParser::DictInitializerExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDictInitializerExpressionList(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DictInitializerExpressionListContext* EscriptParser::dictInitializerExpressionList() {
  DictInitializerExpressionListContext *_localctx = _tracker.createInstance<DictInitializerExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 112, EscriptParser::RuleDictInitializerExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(613);
    dictInitializerExpression();
    setState(618);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == EscriptParser::COMMA) {
      setState(614);
      match(EscriptParser::COMMA);
      setState(615);
      dictInitializerExpression();
      setState(620);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DictInitializerContext ------------------------------------------------------------------

EscriptParser::DictInitializerContext::DictInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::DictInitializerContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::DictInitializerContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

std::vector<EscriptParser::DictInitializerExpressionListContext *> EscriptParser::DictInitializerContext::dictInitializerExpressionList() {
  return getRuleContexts<EscriptParser::DictInitializerExpressionListContext>();
}

EscriptParser::DictInitializerExpressionListContext* EscriptParser::DictInitializerContext::dictInitializerExpressionList(size_t i) {
  return getRuleContext<EscriptParser::DictInitializerExpressionListContext>(i);
}


size_t EscriptParser::DictInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleDictInitializer;
}

void EscriptParser::DictInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDictInitializer(this);
}

void EscriptParser::DictInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDictInitializer(this);
}


antlrcpp::Any EscriptParser::DictInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitDictInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::DictInitializerContext* EscriptParser::dictInitializer() {
  DictInitializerContext *_localctx = _tracker.createInstance<DictInitializerContext>(_ctx, getState());
  enterRule(_localctx, 114, EscriptParser::RuleDictInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(621);
    match(EscriptParser::LBRACE);
    setState(625);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
      | (1ULL << EscriptParser::BANG_B)
      | (1ULL << EscriptParser::KEYWORD_ERROR)
      | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
      | (1ULL << (EscriptParser::ARRAY - 64))
      | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_LITERAL - 64))
      | (1ULL << (EscriptParser::OCT_LITERAL - 64))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
      | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
      | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
      | (1ULL << (EscriptParser::STRING_LITERAL - 64))
      | (1ULL << (EscriptParser::NULL_LITERAL - 64))
      | (1ULL << (EscriptParser::LPAREN - 64))
      | (1ULL << (EscriptParser::LBRACE - 64))
      | (1ULL << (EscriptParser::ADD - 64))
      | (1ULL << (EscriptParser::SUB - 64))
      | (1ULL << (EscriptParser::TILDE - 64))
      | (1ULL << (EscriptParser::AT - 64))
      | (1ULL << (EscriptParser::INC - 64))
      | (1ULL << (EscriptParser::DEC - 64))
      | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
      setState(622);
      dictInitializerExpressionList();
      setState(627);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(628);
    match(EscriptParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayInitializerContext ------------------------------------------------------------------

EscriptParser::ArrayInitializerContext::ArrayInitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::ArrayInitializerContext::LBRACE() {
  return getToken(EscriptParser::LBRACE, 0);
}

tree::TerminalNode* EscriptParser::ArrayInitializerContext::RBRACE() {
  return getToken(EscriptParser::RBRACE, 0);
}

std::vector<EscriptParser::ExpressionListContext *> EscriptParser::ArrayInitializerContext::expressionList() {
  return getRuleContexts<EscriptParser::ExpressionListContext>();
}

EscriptParser::ExpressionListContext* EscriptParser::ArrayInitializerContext::expressionList(size_t i) {
  return getRuleContext<EscriptParser::ExpressionListContext>(i);
}

tree::TerminalNode* EscriptParser::ArrayInitializerContext::LPAREN() {
  return getToken(EscriptParser::LPAREN, 0);
}

tree::TerminalNode* EscriptParser::ArrayInitializerContext::RPAREN() {
  return getToken(EscriptParser::RPAREN, 0);
}


size_t EscriptParser::ArrayInitializerContext::getRuleIndex() const {
  return EscriptParser::RuleArrayInitializer;
}

void EscriptParser::ArrayInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayInitializer(this);
}

void EscriptParser::ArrayInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayInitializer(this);
}


antlrcpp::Any EscriptParser::ArrayInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitArrayInitializer(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::ArrayInitializerContext* EscriptParser::arrayInitializer() {
  ArrayInitializerContext *_localctx = _tracker.createInstance<ArrayInitializerContext>(_ctx, getState());
  enterRule(_localctx, 116, EscriptParser::RuleArrayInitializer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(646);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(630);
        match(EscriptParser::LBRACE);
        setState(634);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
          | (1ULL << EscriptParser::BANG_B)
          | (1ULL << EscriptParser::KEYWORD_ERROR)
          | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
          | (1ULL << (EscriptParser::ARRAY - 64))
          | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
          | (1ULL << (EscriptParser::HEX_LITERAL - 64))
          | (1ULL << (EscriptParser::OCT_LITERAL - 64))
          | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
          | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
          | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
          | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
          | (1ULL << (EscriptParser::STRING_LITERAL - 64))
          | (1ULL << (EscriptParser::NULL_LITERAL - 64))
          | (1ULL << (EscriptParser::LPAREN - 64))
          | (1ULL << (EscriptParser::LBRACE - 64))
          | (1ULL << (EscriptParser::ADD - 64))
          | (1ULL << (EscriptParser::SUB - 64))
          | (1ULL << (EscriptParser::TILDE - 64))
          | (1ULL << (EscriptParser::AT - 64))
          | (1ULL << (EscriptParser::INC - 64))
          | (1ULL << (EscriptParser::DEC - 64))
          | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
          setState(631);
          expressionList();
          setState(636);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(637);
        match(EscriptParser::RBRACE);
        break;
      }

      case EscriptParser::LPAREN: {
        enterOuterAlt(_localctx, 2);
        setState(638);
        match(EscriptParser::LPAREN);
        setState(642);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << EscriptParser::BANG_A)
          | (1ULL << EscriptParser::BANG_B)
          | (1ULL << EscriptParser::KEYWORD_ERROR)
          | (1ULL << EscriptParser::DICTIONARY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & ((1ULL << (EscriptParser::STRUCT - 64))
          | (1ULL << (EscriptParser::ARRAY - 64))
          | (1ULL << (EscriptParser::DECIMAL_LITERAL - 64))
          | (1ULL << (EscriptParser::HEX_LITERAL - 64))
          | (1ULL << (EscriptParser::OCT_LITERAL - 64))
          | (1ULL << (EscriptParser::BINARY_LITERAL - 64))
          | (1ULL << (EscriptParser::FLOAT_LITERAL - 64))
          | (1ULL << (EscriptParser::HEX_FLOAT_LITERAL - 64))
          | (1ULL << (EscriptParser::CHAR_LITERAL - 64))
          | (1ULL << (EscriptParser::STRING_LITERAL - 64))
          | (1ULL << (EscriptParser::NULL_LITERAL - 64))
          | (1ULL << (EscriptParser::LPAREN - 64))
          | (1ULL << (EscriptParser::LBRACE - 64))
          | (1ULL << (EscriptParser::ADD - 64))
          | (1ULL << (EscriptParser::SUB - 64))
          | (1ULL << (EscriptParser::TILDE - 64))
          | (1ULL << (EscriptParser::AT - 64))
          | (1ULL << (EscriptParser::INC - 64))
          | (1ULL << (EscriptParser::DEC - 64))
          | (1ULL << (EscriptParser::IDENTIFIER - 64)))) != 0)) {
          setState(639);
          expressionList();
          setState(644);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(645);
        match(EscriptParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

EscriptParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

EscriptParser::IntegerLiteralContext* EscriptParser::LiteralContext::integerLiteral() {
  return getRuleContext<EscriptParser::IntegerLiteralContext>(0);
}

EscriptParser::FloatLiteralContext* EscriptParser::LiteralContext::floatLiteral() {
  return getRuleContext<EscriptParser::FloatLiteralContext>(0);
}

tree::TerminalNode* EscriptParser::LiteralContext::CHAR_LITERAL() {
  return getToken(EscriptParser::CHAR_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::LiteralContext::STRING_LITERAL() {
  return getToken(EscriptParser::STRING_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::LiteralContext::NULL_LITERAL() {
  return getToken(EscriptParser::NULL_LITERAL, 0);
}


size_t EscriptParser::LiteralContext::getRuleIndex() const {
  return EscriptParser::RuleLiteral;
}

void EscriptParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void EscriptParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any EscriptParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::LiteralContext* EscriptParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 118, EscriptParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(653);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case EscriptParser::DECIMAL_LITERAL:
      case EscriptParser::HEX_LITERAL:
      case EscriptParser::OCT_LITERAL:
      case EscriptParser::BINARY_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(648);
        integerLiteral();
        break;
      }

      case EscriptParser::FLOAT_LITERAL:
      case EscriptParser::HEX_FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(649);
        floatLiteral();
        break;
      }

      case EscriptParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(650);
        match(EscriptParser::CHAR_LITERAL);
        break;
      }

      case EscriptParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(651);
        match(EscriptParser::STRING_LITERAL);
        break;
      }

      case EscriptParser::NULL_LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(652);
        match(EscriptParser::NULL_LITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

EscriptParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::IntegerLiteralContext::DECIMAL_LITERAL() {
  return getToken(EscriptParser::DECIMAL_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::IntegerLiteralContext::HEX_LITERAL() {
  return getToken(EscriptParser::HEX_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::IntegerLiteralContext::OCT_LITERAL() {
  return getToken(EscriptParser::OCT_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::IntegerLiteralContext::BINARY_LITERAL() {
  return getToken(EscriptParser::BINARY_LITERAL, 0);
}


size_t EscriptParser::IntegerLiteralContext::getRuleIndex() const {
  return EscriptParser::RuleIntegerLiteral;
}

void EscriptParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}

void EscriptParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}


antlrcpp::Any EscriptParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::IntegerLiteralContext* EscriptParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 120, EscriptParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(655);
    _la = _input->LA(1);
    if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (EscriptParser::DECIMAL_LITERAL - 68))
      | (1ULL << (EscriptParser::HEX_LITERAL - 68))
      | (1ULL << (EscriptParser::OCT_LITERAL - 68))
      | (1ULL << (EscriptParser::BINARY_LITERAL - 68)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

EscriptParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* EscriptParser::FloatLiteralContext::FLOAT_LITERAL() {
  return getToken(EscriptParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* EscriptParser::FloatLiteralContext::HEX_FLOAT_LITERAL() {
  return getToken(EscriptParser::HEX_FLOAT_LITERAL, 0);
}


size_t EscriptParser::FloatLiteralContext::getRuleIndex() const {
  return EscriptParser::RuleFloatLiteral;
}

void EscriptParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void EscriptParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<EscriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}


antlrcpp::Any EscriptParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<EscriptParserVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

EscriptParser::FloatLiteralContext* EscriptParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 122, EscriptParser::RuleFloatLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(657);
    _la = _input->LA(1);
    if (!(_la == EscriptParser::FLOAT_LITERAL

    || _la == EscriptParser::HEX_FLOAT_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool EscriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 47: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool EscriptParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 12);
    case 1: return precpred(_ctx, 11);
    case 2: return precpred(_ctx, 10);
    case 3: return precpred(_ctx, 9);
    case 4: return precpred(_ctx, 8);
    case 5: return precpred(_ctx, 7);
    case 6: return precpred(_ctx, 6);
    case 7: return precpred(_ctx, 5);
    case 8: return precpred(_ctx, 4);
    case 9: return precpred(_ctx, 3);
    case 10: return precpred(_ctx, 2);
    case 11: return precpred(_ctx, 1);
    case 12: return precpred(_ctx, 25);
    case 13: return precpred(_ctx, 24);
    case 14: return precpred(_ctx, 15);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> EscriptParser::_decisionToDFA;
atn::PredictionContextCache EscriptParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN EscriptParser::_atn;
std::vector<uint16_t> EscriptParser::_serializedATN;

std::vector<std::string> EscriptParser::_ruleNames = {
  "compilationUnit", "moduleUnit", "moduleDeclarationStatement", "moduleFunctionDeclaration", 
  "unitExpression", "topLevelDeclaration", "functionDeclaration", "stringIdentifier", 
  "useDeclaration", "includeDeclaration", "programDeclaration", "statement", 
  "ifStatement", "gotoStatement", "returnStatement", "constStatement", "varStatement", 
  "doStatement", "whileStatement", "exitStatement", "declareStatement", 
  "breakStatement", "continueStatement", "forStatement", "foreachStatement", 
  "repeatStatement", "caseStatement", "enumStatement", "block", "variableDeclarationInitializer", 
  "enumList", "enumListEntry", "switchBlockStatementGroup", "switchLabel", 
  "forGroup", "basicForStatement", "cstyleForStatement", "identifierList", 
  "variableDeclarationList", "variableDeclaration", "programParameters", 
  "programParameterList", "programParameter", "functionParameters", "functionParameterList", 
  "functionParameter", "scopedMethodCall", "expression", "primary", "parExpression", 
  "expressionList", "methodCall", "structInitializerExpression", "structInitializerExpressionList", 
  "structInitializer", "dictInitializerExpression", "dictInitializerExpressionList", 
  "dictInitializer", "arrayInitializer", "literal", "integerLiteral", "floatLiteral"
};

std::vector<std::string> EscriptParser::_literalNames = {
  "", "'if'", "'then'", "'elseif'", "'endif'", "'else'", "'goto'", "'return'", 
  "'const'", "'var'", "'do'", "'dowhile'", "'while'", "'endwhile'", "'exit'", 
  "'declare'", "'function'", "'endfunction'", "'exported'", "'use'", "'include'", 
  "'break'", "'continue'", "'for'", "'endfor'", "'to'", "'foreach'", "'endforeach'", 
  "'repeat'", "'until'", "'program'", "'endprogram'", "'case'", "'default'", 
  "'endcase'", "'enum'", "'endenum'", "'downto'", "'step'", "'reference'", 
  "'out'", "'inout'", "'ByVal'", "'string'", "'long'", "'integer'", "'unsigned'", 
  "'signed'", "'real'", "'float'", "'double'", "'as'", "'is'", "'&&'", "'and'", 
  "'||'", "'or'", "'!'", "'not'", "'byref'", "'unused'", "'error'", "'hash'", 
  "'dictionary'", "'struct'", "'array'", "'stack'", "'in'", "", "", "", 
  "", "", "", "", "", "'null'", "'('", "')'", "'['", "']'", "'{'", "'}'", 
  "'.'", "'->'", "'*'", "'/'", "'%'", "'+'", "'-'", "'+='", "'-='", "'*='", 
  "'/='", "'%='", "'<='", "'<'", "'>='", "'>'", "'>>'", "'<<'", "'&'", "'^'", 
  "'|'", "'<>'", "'!='", "'=='", "':='", "'.+'", "'.-'", "'.?'", "';'", 
  "','", "'~'", "'@'", "'::'", "':'", "'++'", "'--'"
};

std::vector<std::string> EscriptParser::_symbolicNames = {
  "", "IF", "THEN", "ELSEIF", "ENDIF", "ELSE", "GOTO", "RETURN", "KEYWORD_CONST", 
  "VAR", "DO", "DOWHILE", "WHILE", "ENDWHILE", "EXIT", "DECLARE", "FUNCTION", 
  "ENDFUNCTION", "EXPORTED", "USE", "INCLUDE", "BREAK", "CONTINUE", "FOR", 
  "ENDFOR", "TO", "FOREACH", "ENDFOREACH", "REPEAT", "UNTIL", "PROGRAM", 
  "ENDPROGRAM", "CASE", "DEFAULT", "ENDCASE", "ENUM", "ENDENUM", "DOWNTO", 
  "STEP", "REFERENCE", "KEYWORD_OUT", "INOUT", "BYVAL", "STRING", "KEYWORD_LONG", 
  "INTEGER", "UNSIGNED", "SIGNED", "REAL", "FLOAT", "DOUBLE", "AS", "IS", 
  "AND_A", "AND_B", "OR_A", "OR_B", "BANG_A", "BANG_B", "BYREF", "UNUSED", 
  "KEYWORD_ERROR", "HASH", "DICTIONARY", "STRUCT", "ARRAY", "STACK", "KEYWORD_IN", 
  "DECIMAL_LITERAL", "HEX_LITERAL", "OCT_LITERAL", "BINARY_LITERAL", "FLOAT_LITERAL", 
  "HEX_FLOAT_LITERAL", "CHAR_LITERAL", "STRING_LITERAL", "NULL_LITERAL", 
  "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", "DOT", "ARROW", 
  "MUL", "DIV", "MOD", "ADD", "SUB", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", 
  "DIV_ASSIGN", "MOD_ASSIGN", "LE", "LT", "GE", "GT", "RSHIFT", "LSHIFT", 
  "BITAND", "CARET", "BITOR", "NOTEQUAL_A", "NOTEQUAL_B", "EQUAL", "ASSIGN", 
  "ADDMEMBER", "DELMEMBER", "CHKMEMBER", "SEMI", "COMMA", "TILDE", "AT", 
  "COLONCOLON", "COLON", "INC", "DEC", "WS", "COMMENT", "LINE_COMMENT", 
  "IDENTIFIER"
};

dfa::Vocabulary EscriptParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> EscriptParser::_tokenNames;

EscriptParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x7c, 0x296, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x3, 0x2, 0x7, 0x2, 0x80, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x83, 
    0xb, 0x2, 0x3, 0x2, 0x5, 0x2, 0x86, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x7, 0x3, 0x8b, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x8e, 0xb, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x94, 0xa, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x99, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa0, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0xa7, 0xa, 0x7, 0x3, 0x8, 0x5, 
    0x8, 0xaa, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xd9, 0xa, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xde, 0xa, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xe5, 0xa, 0xe, 0xc, 
    0xe, 0xe, 0xe, 0xe8, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xec, 0xa, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0xf6, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x117, 0xa, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x11d, 0xa, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x6, 0x1c, 0x137, 0xa, 0x1c, 
    0xd, 0x1c, 0xe, 0x1c, 0x138, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x5, 0x1d, 0x140, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
    0x7, 0x1e, 0x145, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x148, 0xb, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x14d, 0xa, 0x1f, 0x3, 0x20, 
    0x6, 0x20, 0x150, 0xa, 0x20, 0xd, 0x20, 0xe, 0x20, 0x151, 0x3, 0x20, 
    0x5, 0x20, 0x155, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 
    0x15a, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x15e, 0xa, 0x21, 
    0xc, 0x21, 0xe, 0x21, 0x161, 0xb, 0x21, 0x3, 0x22, 0x6, 0x22, 0x164, 
    0xa, 0x22, 0xd, 0x22, 0xe, 0x22, 0x165, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x16d, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x5, 0x23, 0x172, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 
    0x176, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x5, 0x27, 0x18b, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x7, 0x28, 0x190, 0xa, 0x28, 0xc, 0x28, 0xe, 0x28, 0x193, 0xb, 0x28, 
    0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x197, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
    0x5, 0x2a, 0x19b, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
    0x5, 0x2b, 0x1a1, 0xa, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x1a4, 0xa, 0x2b, 
    0xc, 0x2b, 0xe, 0x2b, 0x1a7, 0xb, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x1ae, 0xa, 0x2c, 0x5, 0x2c, 0x1b0, 
    0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x1b4, 0xa, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x1bb, 0xa, 0x2e, 
    0xc, 0x2e, 0xe, 0x2e, 0x1be, 0xb, 0x2e, 0x3, 0x2f, 0x5, 0x2f, 0x1c1, 
    0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x1c6, 0xa, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x1ca, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x5, 0x31, 0x1d6, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x5, 0x31, 0x1da, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x1de, 
    0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x1e2, 0xa, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x7, 0x31, 0x1e6, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x1e9, 
    0xb, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x5, 0x31, 0x1f2, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x5, 0x31, 0x21d, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 0x226, 0xa, 0x31, 0xc, 0x31, 
    0xe, 0x31, 0x229, 0xb, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x231, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x7, 0x34, 0x23a, 
    0xa, 0x34, 0xc, 0x34, 0xe, 0x34, 0x23d, 0xb, 0x34, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x5, 0x35, 0x242, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x249, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x5, 0x36, 0x24e, 0xa, 0x36, 0x5, 0x36, 0x250, 0xa, 0x36, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x7, 0x37, 0x255, 0xa, 0x37, 0xc, 0x37, 
    0xe, 0x37, 0x258, 0xb, 0x37, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 0x25c, 
    0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x25f, 0xb, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x266, 0xa, 0x39, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x26b, 0xa, 0x3a, 0xc, 0x3a, 0xe, 0x3a, 
    0x26e, 0xb, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x272, 0xa, 0x3b, 
    0xc, 0x3b, 0xe, 0x3b, 0x275, 0xb, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 
    0x3, 0x3c, 0x7, 0x3c, 0x27b, 0xa, 0x3c, 0xc, 0x3c, 0xe, 0x3c, 0x27e, 
    0xb, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x283, 0xa, 0x3c, 
    0xc, 0x3c, 0xe, 0x3c, 0x286, 0xb, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x289, 
    0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 
    0x3d, 0x290, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x2, 0x3, 0x60, 0x40, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
    0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
    0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 
    0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x2, 0x10, 0x4, 0x2, 0x4d, 
    0x4d, 0x7c, 0x7c, 0x4, 0x2, 0x5a, 0x5b, 0x77, 0x78, 0x4, 0x2, 0x3b, 
    0x3c, 0x73, 0x73, 0x3, 0x2, 0x57, 0x59, 0x3, 0x2, 0x5a, 0x5b, 0x3, 0x2, 
    0x65, 0x66, 0x3, 0x2, 0x61, 0x64, 0x3, 0x2, 0x6a, 0x6c, 0x3, 0x2, 0x37, 
    0x38, 0x3, 0x2, 0x39, 0x3a, 0x4, 0x2, 0x5c, 0x60, 0x6d, 0x70, 0x3, 0x2, 
    0x77, 0x78, 0x3, 0x2, 0x46, 0x49, 0x3, 0x2, 0x4a, 0x4b, 0x2, 0x2c7, 
    0x2, 0x81, 0x3, 0x2, 0x2, 0x2, 0x4, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x6, 0x93, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x95, 0x3, 0x2, 0x2, 0x2, 0xa, 0x9d, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xe, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x12, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0x16, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x18, 0xd8, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xda, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xef, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x20, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x24, 0x101, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x107, 0x3, 0x2, 0x2, 0x2, 0x28, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x114, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x11a, 0x3, 0x2, 0x2, 0x2, 0x30, 0x120, 0x3, 0x2, 0x2, 0x2, 0x32, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x36, 0x131, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x14f, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x156, 0x3, 0x2, 0x2, 0x2, 0x42, 0x163, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x171, 0x3, 0x2, 0x2, 0x2, 0x46, 0x175, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x177, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x187, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x50, 0x194, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x198, 0x3, 0x2, 0x2, 0x2, 0x54, 0x19e, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1b1, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x60, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x230, 0x3, 0x2, 0x2, 0x2, 0x64, 0x232, 0x3, 0x2, 0x2, 0x2, 0x66, 0x236, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x24f, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x251, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x259, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x262, 0x3, 0x2, 0x2, 0x2, 0x72, 0x267, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x76, 0x288, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x291, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x293, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x80, 0x5, 0xc, 0x7, 0x2, 0x7f, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x5, 0xa, 0x6, 
    0x2, 0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x7, 0x2, 0x2, 0x3, 0x88, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8b, 0x5, 0x6, 0x4, 0x2, 0x8a, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x2, 0x2, 
    0x3, 0x90, 0x5, 0x3, 0x2, 0x2, 0x2, 0x91, 0x94, 0x5, 0x8, 0x5, 0x2, 
    0x92, 0x94, 0x5, 0x20, 0x11, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x7, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 
    0x7, 0x7c, 0x2, 0x2, 0x96, 0x98, 0x7, 0x4f, 0x2, 0x2, 0x97, 0x99, 0x5, 
    0x4e, 0x28, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x50, 0x2, 
    0x2, 0x9b, 0x9c, 0x7, 0x71, 0x2, 0x2, 0x9c, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x9f, 0x5, 0x60, 0x31, 0x2, 0x9e, 0xa0, 0x7, 0x71, 0x2, 0x2, 0x9f, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0xa1, 0xa7, 0x5, 0x12, 0xa, 0x2, 0xa2, 0xa7, 0x5, 
    0x14, 0xb, 0x2, 0xa3, 0xa7, 0x5, 0x16, 0xc, 0x2, 0xa4, 0xa7, 0x5, 0xe, 
    0x8, 0x2, 0xa5, 0xa7, 0x5, 0x18, 0xd, 0x2, 0xa6, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xaa, 0x7, 0x14, 0x2, 0x2, 0xa9, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 
    0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x12, 0x2, 0x2, 0xac, 0xad, 0x7, 0x7c, 
    0x2, 0x2, 0xad, 0xae, 0x5, 0x58, 0x2d, 0x2, 0xae, 0xaf, 0x5, 0x3a, 0x1e, 
    0x2, 0xaf, 0xb0, 0x7, 0x13, 0x2, 0x2, 0xb0, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0xb1, 0xb2, 0x9, 0x2, 0x2, 0x2, 0xb2, 0x11, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0xb4, 0x7, 0x15, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x10, 0x9, 0x2, 0xb5, 0xb6, 
    0x7, 0x71, 0x2, 0x2, 0xb6, 0x13, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 
    0x16, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x10, 0x9, 0x2, 0xb9, 0xba, 0x7, 0x71, 
    0x2, 0x2, 0xba, 0x15, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0x20, 0x2, 
    0x2, 0xbc, 0xbd, 0x7, 0x7c, 0x2, 0x2, 0xbd, 0xbe, 0x5, 0x52, 0x2a, 0x2, 
    0xbe, 0xbf, 0x5, 0x3a, 0x1e, 0x2, 0xbf, 0xc0, 0x7, 0x21, 0x2, 0x2, 0xc0, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xd9, 0x5, 0x1a, 0xe, 0x2, 0xc2, 0xd9, 
    0x5, 0x1c, 0xf, 0x2, 0xc3, 0xd9, 0x5, 0x1e, 0x10, 0x2, 0xc4, 0xd9, 0x5, 
    0x20, 0x11, 0x2, 0xc5, 0xd9, 0x5, 0x22, 0x12, 0x2, 0xc6, 0xd9, 0x5, 
    0x24, 0x13, 0x2, 0xc7, 0xd9, 0x5, 0x26, 0x14, 0x2, 0xc8, 0xd9, 0x5, 
    0x28, 0x15, 0x2, 0xc9, 0xd9, 0x5, 0x2a, 0x16, 0x2, 0xca, 0xd9, 0x5, 
    0x2c, 0x17, 0x2, 0xcb, 0xd9, 0x5, 0x2e, 0x18, 0x2, 0xcc, 0xd9, 0x5, 
    0x30, 0x19, 0x2, 0xcd, 0xd9, 0x5, 0x32, 0x1a, 0x2, 0xce, 0xd9, 0x5, 
    0x34, 0x1b, 0x2, 0xcf, 0xd9, 0x5, 0x36, 0x1c, 0x2, 0xd0, 0xd9, 0x5, 
    0x38, 0x1d, 0x2, 0xd1, 0xd9, 0x7, 0x71, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x60, 
    0x31, 0x2, 0xd3, 0xd4, 0x7, 0x71, 0x2, 0x2, 0xd4, 0xd9, 0x3, 0x2, 0x2, 
    0x2, 0xd5, 0xd6, 0x7, 0x7c, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x76, 0x2, 0x2, 
    0xd7, 0xd9, 0x5, 0x18, 0xd, 0x2, 0xd8, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xc6, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xd8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xca, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xcc, 0x3, 0x2, 0x2, 0x2, 
    0xd8, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd5, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0x19, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x3, 
    0x2, 0x2, 0xdb, 0xdd, 0x5, 0x64, 0x33, 0x2, 0xdc, 0xde, 0x7, 0x4, 0x2, 
    0x2, 0xdd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe6, 0x5, 0x3a, 0x1e, 0x2, 0xe0, 
    0xe1, 0x7, 0x5, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x64, 0x33, 0x2, 0xe2, 0xe3, 
    0x5, 0x3a, 0x1e, 0x2, 0xe3, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x7, 0x2, 0x2, 
    0xea, 0xec, 0x5, 0x3a, 0x1e, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 
    0x7, 0x6, 0x2, 0x2, 0xee, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 
    0x8, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x7c, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x71, 
    0x2, 0x2, 0xf2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf5, 0x7, 0x9, 0x2, 
    0x2, 0xf4, 0xf6, 0x5, 0x60, 0x31, 0x2, 0xf5, 0xf4, 0x3, 0x2, 0x2, 0x2, 
    0xf5, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 
    0xf8, 0x7, 0x71, 0x2, 0x2, 0xf8, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 
    0x7, 0xa, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x50, 0x29, 0x2, 0xfb, 0xfc, 0x7, 
    0x71, 0x2, 0x2, 0xfc, 0x21, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0xb, 
    0x2, 0x2, 0xfe, 0xff, 0x5, 0x4e, 0x28, 0x2, 0xff, 0x100, 0x7, 0x71, 
    0x2, 0x2, 0x100, 0x23, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x7, 0xc, 0x2, 
    0x2, 0x102, 0x103, 0x5, 0x3a, 0x1e, 0x2, 0x103, 0x104, 0x7, 0xd, 0x2, 
    0x2, 0x104, 0x105, 0x5, 0x64, 0x33, 0x2, 0x105, 0x106, 0x7, 0x71, 0x2, 
    0x2, 0x106, 0x25, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0xe, 0x2, 0x2, 
    0x108, 0x109, 0x5, 0x64, 0x33, 0x2, 0x109, 0x10a, 0x5, 0x3a, 0x1e, 0x2, 
    0x10a, 0x10b, 0x7, 0xf, 0x2, 0x2, 0x10b, 0x27, 0x3, 0x2, 0x2, 0x2, 0x10c, 
    0x10d, 0x7, 0x10, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x71, 0x2, 0x2, 0x10e, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x7, 0x11, 0x2, 0x2, 0x110, 
    0x111, 0x7, 0x12, 0x2, 0x2, 0x111, 0x112, 0x5, 0x4c, 0x27, 0x2, 0x112, 
    0x113, 0x7, 0x71, 0x2, 0x2, 0x113, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x114, 
    0x116, 0x7, 0x17, 0x2, 0x2, 0x115, 0x117, 0x7, 0x7c, 0x2, 0x2, 0x116, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 
    0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x7, 0x71, 0x2, 0x2, 0x119, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11c, 0x7, 0x18, 0x2, 0x2, 0x11b, 
    0x11d, 0x7, 0x7c, 0x2, 0x2, 0x11c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11c, 
    0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x11f, 0x7, 0x71, 0x2, 0x2, 0x11f, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x121, 0x7, 0x19, 0x2, 0x2, 0x121, 0x122, 0x5, 0x46, 0x24, 0x2, 0x122, 
    0x123, 0x7, 0x1a, 0x2, 0x2, 0x123, 0x31, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x125, 0x7, 0x1c, 0x2, 0x2, 0x125, 0x126, 0x7, 0x7c, 0x2, 0x2, 0x126, 
    0x127, 0x7, 0x45, 0x2, 0x2, 0x127, 0x128, 0x5, 0x60, 0x31, 0x2, 0x128, 
    0x129, 0x5, 0x3a, 0x1e, 0x2, 0x129, 0x12a, 0x7, 0x1d, 0x2, 0x2, 0x12a, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x7, 0x1e, 0x2, 0x2, 0x12c, 
    0x12d, 0x5, 0x3a, 0x1e, 0x2, 0x12d, 0x12e, 0x7, 0x1f, 0x2, 0x2, 0x12e, 
    0x12f, 0x5, 0x60, 0x31, 0x2, 0x12f, 0x130, 0x7, 0x71, 0x2, 0x2, 0x130, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x7, 0x22, 0x2, 0x2, 0x132, 
    0x133, 0x7, 0x4f, 0x2, 0x2, 0x133, 0x134, 0x5, 0x60, 0x31, 0x2, 0x134, 
    0x136, 0x7, 0x50, 0x2, 0x2, 0x135, 0x137, 0x5, 0x42, 0x22, 0x2, 0x136, 
    0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 
    0x13a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x24, 0x2, 0x2, 0x13b, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x25, 0x2, 0x2, 0x13d, 
    0x13f, 0x7, 0x7c, 0x2, 0x2, 0x13e, 0x140, 0x5, 0x3e, 0x20, 0x2, 0x13f, 
    0x13e, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x7, 0x26, 0x2, 0x2, 0x142, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x143, 0x145, 0x5, 0x18, 0xd, 0x2, 0x144, 
    0x143, 0x3, 0x2, 0x2, 0x2, 0x145, 0x148, 0x3, 0x2, 0x2, 0x2, 0x146, 
    0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 
    0x7, 0x6d, 0x2, 0x2, 0x14a, 0x14d, 0x5, 0x60, 0x31, 0x2, 0x14b, 0x14d, 
    0x7, 0x43, 0x2, 0x2, 0x14c, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14b, 
    0x3, 0x2, 0x2, 0x2, 0x14d, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x150, 0x5, 
    0x40, 0x21, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 
    0x2, 0x2, 0x2, 0x152, 0x154, 0x3, 0x2, 0x2, 0x2, 0x153, 0x155, 0x7, 
    0x72, 0x2, 0x2, 0x154, 0x153, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x3, 
    0x2, 0x2, 0x2, 0x155, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x156, 0x159, 0x7, 0x7c, 
    0x2, 0x2, 0x157, 0x158, 0x7, 0x6d, 0x2, 0x2, 0x158, 0x15a, 0x5, 0x60, 
    0x31, 0x2, 0x159, 0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 
    0x2, 0x2, 0x15a, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x72, 
    0x2, 0x2, 0x15c, 0x15e, 0x5, 0x40, 0x21, 0x2, 0x15d, 0x15b, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x161, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x15d, 0x3, 0x2, 
    0x2, 0x2, 0x15f, 0x160, 0x3, 0x2, 0x2, 0x2, 0x160, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x161, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x162, 0x164, 0x5, 0x44, 0x23, 
    0x2, 0x163, 0x162, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 
    0x2, 0x165, 0x163, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x5, 0x3a, 0x1e, 
    0x2, 0x168, 0x43, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16d, 0x5, 0x7a, 0x3e, 
    0x2, 0x16a, 0x16d, 0x7, 0x7c, 0x2, 0x2, 0x16b, 0x16d, 0x7, 0x4d, 0x2, 
    0x2, 0x16c, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 
    0x2, 0x16c, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x172, 0x7, 0x76, 0x2, 0x2, 0x16f, 0x170, 0x7, 0x23, 0x2, 
    0x2, 0x170, 0x172, 0x7, 0x76, 0x2, 0x2, 0x171, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x172, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x173, 0x176, 0x5, 0x4a, 0x26, 0x2, 0x174, 0x176, 0x5, 0x48, 0x25, 0x2, 
    0x175, 0x173, 0x3, 0x2, 0x2, 0x2, 0x175, 0x174, 0x3, 0x2, 0x2, 0x2, 
    0x176, 0x47, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x7, 0x7c, 0x2, 0x2, 
    0x178, 0x179, 0x7, 0x6d, 0x2, 0x2, 0x179, 0x17a, 0x5, 0x60, 0x31, 0x2, 
    0x17a, 0x17b, 0x7, 0x1b, 0x2, 0x2, 0x17b, 0x17c, 0x5, 0x60, 0x31, 0x2, 
    0x17c, 0x17d, 0x5, 0x3a, 0x1e, 0x2, 0x17d, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x17e, 0x17f, 0x7, 0x4f, 0x2, 0x2, 0x17f, 0x180, 0x5, 0x60, 0x31, 0x2, 
    0x180, 0x181, 0x7, 0x71, 0x2, 0x2, 0x181, 0x182, 0x5, 0x60, 0x31, 0x2, 
    0x182, 0x183, 0x7, 0x71, 0x2, 0x2, 0x183, 0x184, 0x5, 0x60, 0x31, 0x2, 
    0x184, 0x185, 0x7, 0x50, 0x2, 0x2, 0x185, 0x186, 0x5, 0x3a, 0x1e, 0x2, 
    0x186, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x187, 0x18a, 0x7, 0x7c, 0x2, 0x2, 
    0x188, 0x189, 0x7, 0x72, 0x2, 0x2, 0x189, 0x18b, 0x5, 0x4c, 0x27, 0x2, 
    0x18a, 0x188, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x3, 0x2, 0x2, 0x2, 
    0x18b, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x191, 0x5, 0x50, 0x29, 0x2, 
    0x18d, 0x18e, 0x7, 0x72, 0x2, 0x2, 0x18e, 0x190, 0x5, 0x50, 0x29, 0x2, 
    0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x190, 0x193, 0x3, 0x2, 0x2, 0x2, 
    0x191, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 0x194, 
    0x196, 0x7, 0x7c, 0x2, 0x2, 0x195, 0x197, 0x5, 0x3c, 0x1f, 0x2, 0x196, 
    0x195, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x3, 0x2, 0x2, 0x2, 0x197, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x198, 0x19a, 0x7, 0x4f, 0x2, 0x2, 0x199, 
    0x19b, 0x5, 0x54, 0x2b, 0x2, 0x19a, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19a, 
    0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 
    0x19d, 0x7, 0x50, 0x2, 0x2, 0x19d, 0x53, 0x3, 0x2, 0x2, 0x2, 0x19e, 
    0x1a5, 0x5, 0x56, 0x2c, 0x2, 0x19f, 0x1a1, 0x7, 0x72, 0x2, 0x2, 0x1a0, 
    0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 
    0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a4, 0x5, 0x56, 0x2c, 0x2, 0x1a3, 
    0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a5, 
    0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a6, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 
    0x7, 0x3e, 0x2, 0x2, 0x1a9, 0x1b0, 0x7, 0x7c, 0x2, 0x2, 0x1aa, 0x1ad, 
    0x7, 0x7c, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0x6d, 0x2, 0x2, 0x1ac, 0x1ae, 
    0x5, 0x60, 0x31, 0x2, 0x1ad, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 
    0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1a8, 
    0x3, 0x2, 0x2, 0x2, 0x1af, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x1b1, 0x1b3, 0x7, 0x4f, 0x2, 0x2, 0x1b2, 0x1b4, 0x5, 
    0x5a, 0x2e, 0x2, 0x1b3, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x3, 
    0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x7, 
    0x50, 0x2, 0x2, 0x1b6, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1bc, 0x5, 
    0x5c, 0x2f, 0x2, 0x1b8, 0x1b9, 0x7, 0x72, 0x2, 0x2, 0x1b9, 0x1bb, 0x5, 
    0x5c, 0x2f, 0x2, 0x1ba, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1be, 0x3, 
    0x2, 0x2, 0x2, 0x1bc, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x3, 
    0x2, 0x2, 0x2, 0x1bd, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x1bf, 0x1c1, 0x7, 0x3d, 0x2, 0x2, 0x1c0, 0x1bf, 0x3, 0x2, 
    0x2, 0x2, 0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 
    0x2, 0x2, 0x1c2, 0x1c5, 0x7, 0x7c, 0x2, 0x2, 0x1c3, 0x1c4, 0x7, 0x6d, 
    0x2, 0x2, 0x1c4, 0x1c6, 0x5, 0x60, 0x31, 0x2, 0x1c5, 0x1c3, 0x3, 0x2, 
    0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1ca, 0x3, 0x2, 
    0x2, 0x2, 0x1c7, 0x1c8, 0x7, 0x3e, 0x2, 0x2, 0x1c8, 0x1ca, 0x7, 0x7c, 
    0x2, 0x2, 0x1c9, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1c7, 0x3, 0x2, 
    0x2, 0x2, 0x1ca, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x7, 0x7c, 
    0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x75, 0x2, 0x2, 0x1cd, 0x1ce, 0x5, 0x68, 
    0x35, 0x2, 0x1ce, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x8, 0x31, 
    0x1, 0x2, 0x1d0, 0x1f2, 0x5, 0x62, 0x32, 0x2, 0x1d1, 0x1f2, 0x5, 0x68, 
    0x35, 0x2, 0x1d2, 0x1f2, 0x5, 0x5e, 0x30, 0x2, 0x1d3, 0x1d5, 0x7, 0x43, 
    0x2, 0x2, 0x1d4, 0x1d6, 0x5, 0x76, 0x3c, 0x2, 0x1d5, 0x1d4, 0x3, 0x2, 
    0x2, 0x2, 0x1d5, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1f2, 0x3, 0x2, 
    0x2, 0x2, 0x1d7, 0x1d9, 0x7, 0x42, 0x2, 0x2, 0x1d8, 0x1da, 0x5, 0x6e, 
    0x38, 0x2, 0x1d9, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x3, 0x2, 
    0x2, 0x2, 0x1da, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dd, 0x7, 0x41, 
    0x2, 0x2, 0x1dc, 0x1de, 0x5, 0x74, 0x3b, 0x2, 0x1dd, 0x1dc, 0x3, 0x2, 
    0x2, 0x2, 0x1dd, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1f2, 0x3, 0x2, 
    0x2, 0x2, 0x1df, 0x1e1, 0x7, 0x3f, 0x2, 0x2, 0x1e0, 0x1e2, 0x5, 0x6e, 
    0x38, 0x2, 0x1e1, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x3, 0x2, 
    0x2, 0x2, 0x1e2, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e7, 0x7, 0x53, 
    0x2, 0x2, 0x1e4, 0x1e6, 0x5, 0x66, 0x34, 0x2, 0x1e5, 0x1e4, 0x3, 0x2, 
    0x2, 0x2, 0x1e6, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 
    0x2, 0x2, 0x1e7, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1ea, 0x3, 0x2, 
    0x2, 0x2, 0x1e9, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1f2, 0x7, 0x54, 
    0x2, 0x2, 0x1eb, 0x1ec, 0x7, 0x74, 0x2, 0x2, 0x1ec, 0x1f2, 0x7, 0x7c, 
    0x2, 0x2, 0x1ed, 0x1ee, 0x9, 0x3, 0x2, 0x2, 0x1ee, 0x1f2, 0x5, 0x60, 
    0x31, 0x10, 0x1ef, 0x1f0, 0x9, 0x4, 0x2, 0x2, 0x1f0, 0x1f2, 0x5, 0x60, 
    0x31, 0xf, 0x1f1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1d1, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1d3, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1db, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1e3, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1ed, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x227, 0x3, 0x2, 
    0x2, 0x2, 0x1f3, 0x1f4, 0xc, 0xe, 0x2, 0x2, 0x1f4, 0x1f5, 0x9, 0x5, 
    0x2, 0x2, 0x1f5, 0x226, 0x5, 0x60, 0x31, 0xf, 0x1f6, 0x1f7, 0xc, 0xd, 
    0x2, 0x2, 0x1f7, 0x1f8, 0x9, 0x6, 0x2, 0x2, 0x1f8, 0x226, 0x5, 0x60, 
    0x31, 0xe, 0x1f9, 0x1fa, 0xc, 0xc, 0x2, 0x2, 0x1fa, 0x1fb, 0x9, 0x7, 
    0x2, 0x2, 0x1fb, 0x226, 0x5, 0x60, 0x31, 0xd, 0x1fc, 0x1fd, 0xc, 0xb, 
    0x2, 0x2, 0x1fd, 0x1fe, 0x9, 0x8, 0x2, 0x2, 0x1fe, 0x226, 0x5, 0x60, 
    0x31, 0xc, 0x1ff, 0x200, 0xc, 0xa, 0x2, 0x2, 0x200, 0x201, 0x9, 0x9, 
    0x2, 0x2, 0x201, 0x226, 0x5, 0x60, 0x31, 0xb, 0x202, 0x203, 0xc, 0x9, 
    0x2, 0x2, 0x203, 0x204, 0x7, 0x67, 0x2, 0x2, 0x204, 0x226, 0x5, 0x60, 
    0x31, 0xa, 0x205, 0x206, 0xc, 0x8, 0x2, 0x2, 0x206, 0x207, 0x7, 0x68, 
    0x2, 0x2, 0x207, 0x226, 0x5, 0x60, 0x31, 0x9, 0x208, 0x209, 0xc, 0x7, 
    0x2, 0x2, 0x209, 0x20a, 0x7, 0x69, 0x2, 0x2, 0x20a, 0x226, 0x5, 0x60, 
    0x31, 0x8, 0x20b, 0x20c, 0xc, 0x6, 0x2, 0x2, 0x20c, 0x20d, 0x7, 0x45, 
    0x2, 0x2, 0x20d, 0x226, 0x5, 0x60, 0x31, 0x7, 0x20e, 0x20f, 0xc, 0x5, 
    0x2, 0x2, 0x20f, 0x210, 0x9, 0xa, 0x2, 0x2, 0x210, 0x226, 0x5, 0x60, 
    0x31, 0x6, 0x211, 0x212, 0xc, 0x4, 0x2, 0x2, 0x212, 0x213, 0x9, 0xb, 
    0x2, 0x2, 0x213, 0x226, 0x5, 0x60, 0x31, 0x5, 0x214, 0x215, 0xc, 0x3, 
    0x2, 0x2, 0x215, 0x216, 0x9, 0xc, 0x2, 0x2, 0x216, 0x226, 0x5, 0x60, 
    0x31, 0x3, 0x217, 0x218, 0xc, 0x1b, 0x2, 0x2, 0x218, 0x21c, 0x7, 0x55, 
    0x2, 0x2, 0x219, 0x21d, 0x7, 0x7c, 0x2, 0x2, 0x21a, 0x21d, 0x7, 0x4d, 
    0x2, 0x2, 0x21b, 0x21d, 0x5, 0x68, 0x35, 0x2, 0x21c, 0x219, 0x3, 0x2, 
    0x2, 0x2, 0x21c, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21b, 0x3, 0x2, 
    0x2, 0x2, 0x21d, 0x226, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0xc, 0x1a, 
    0x2, 0x2, 0x21f, 0x220, 0x7, 0x51, 0x2, 0x2, 0x220, 0x221, 0x5, 0x66, 
    0x34, 0x2, 0x221, 0x222, 0x7, 0x52, 0x2, 0x2, 0x222, 0x226, 0x3, 0x2, 
    0x2, 0x2, 0x223, 0x224, 0xc, 0x11, 0x2, 0x2, 0x224, 0x226, 0x9, 0xd, 
    0x2, 0x2, 0x225, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x225, 0x1f6, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x225, 0x1fc, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x225, 0x202, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x205, 0x3, 0x2, 0x2, 0x2, 0x225, 0x208, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x225, 0x20e, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x211, 0x3, 0x2, 0x2, 0x2, 0x225, 0x214, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x217, 0x3, 0x2, 0x2, 0x2, 0x225, 0x21e, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x223, 0x3, 0x2, 0x2, 0x2, 0x226, 0x229, 0x3, 0x2, 
    0x2, 0x2, 0x227, 0x225, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x3, 0x2, 
    0x2, 0x2, 0x228, 0x61, 0x3, 0x2, 0x2, 0x2, 0x229, 0x227, 0x3, 0x2, 0x2, 
    0x2, 0x22a, 0x22b, 0x7, 0x4f, 0x2, 0x2, 0x22b, 0x22c, 0x5, 0x60, 0x31, 
    0x2, 0x22c, 0x22d, 0x7, 0x50, 0x2, 0x2, 0x22d, 0x231, 0x3, 0x2, 0x2, 
    0x2, 0x22e, 0x231, 0x5, 0x78, 0x3d, 0x2, 0x22f, 0x231, 0x7, 0x7c, 0x2, 
    0x2, 0x230, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x230, 0x22e, 0x3, 0x2, 0x2, 
    0x2, 0x230, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x231, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x232, 0x233, 0x7, 0x4f, 0x2, 0x2, 0x233, 0x234, 0x5, 0x60, 0x31, 0x2, 
    0x234, 0x235, 0x7, 0x50, 0x2, 0x2, 0x235, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x236, 0x23b, 0x5, 0x60, 0x31, 0x2, 0x237, 0x238, 0x7, 0x72, 0x2, 0x2, 
    0x238, 0x23a, 0x5, 0x60, 0x31, 0x2, 0x239, 0x237, 0x3, 0x2, 0x2, 0x2, 
    0x23a, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x239, 0x3, 0x2, 0x2, 0x2, 
    0x23b, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x67, 0x3, 0x2, 0x2, 0x2, 0x23d, 
    0x23b, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x7, 0x7c, 0x2, 0x2, 0x23f, 
    0x241, 0x7, 0x4f, 0x2, 0x2, 0x240, 0x242, 0x5, 0x66, 0x34, 0x2, 0x241, 
    0x240, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 0x2, 0x242, 
    0x243, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x7, 0x50, 0x2, 0x2, 0x244, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x245, 0x248, 0x7, 0x7c, 0x2, 0x2, 0x246, 
    0x247, 0x7, 0x6d, 0x2, 0x2, 0x247, 0x249, 0x5, 0x60, 0x31, 0x2, 0x248, 
    0x246, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x3, 0x2, 0x2, 0x2, 0x249, 
    0x250, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24d, 0x7, 0x4d, 0x2, 0x2, 0x24b, 
    0x24c, 0x7, 0x6d, 0x2, 0x2, 0x24c, 0x24e, 0x5, 0x60, 0x31, 0x2, 0x24d, 
    0x24b, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x24e, 
    0x250, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x245, 0x3, 0x2, 0x2, 0x2, 0x24f, 
    0x24a, 0x3, 0x2, 0x2, 0x2, 0x250, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x251, 0x256, 
    0x5, 0x6a, 0x36, 0x2, 0x252, 0x253, 0x7, 0x72, 0x2, 0x2, 0x253, 0x255, 
    0x5, 0x6a, 0x36, 0x2, 0x254, 0x252, 0x3, 0x2, 0x2, 0x2, 0x255, 0x258, 
    0x3, 0x2, 0x2, 0x2, 0x256, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 
    0x3, 0x2, 0x2, 0x2, 0x257, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x258, 0x256, 0x3, 
    0x2, 0x2, 0x2, 0x259, 0x25d, 0x7, 0x53, 0x2, 0x2, 0x25a, 0x25c, 0x5, 
    0x6c, 0x37, 0x2, 0x25b, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25f, 0x3, 
    0x2, 0x2, 0x2, 0x25d, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x3, 
    0x2, 0x2, 0x2, 0x25e, 0x260, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x25d, 0x3, 
    0x2, 0x2, 0x2, 0x260, 0x261, 0x7, 0x54, 0x2, 0x2, 0x261, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x262, 0x265, 0x5, 0x60, 0x31, 0x2, 0x263, 0x264, 0x7, 
    0x56, 0x2, 0x2, 0x264, 0x266, 0x5, 0x60, 0x31, 0x2, 0x265, 0x263, 0x3, 
    0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x267, 0x26c, 0x5, 0x70, 0x39, 0x2, 0x268, 0x269, 0x7, 0x72, 
    0x2, 0x2, 0x269, 0x26b, 0x5, 0x70, 0x39, 0x2, 0x26a, 0x268, 0x3, 0x2, 
    0x2, 0x2, 0x26b, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26a, 0x3, 0x2, 
    0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x26e, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x273, 0x7, 0x53, 0x2, 
    0x2, 0x270, 0x272, 0x5, 0x72, 0x3a, 0x2, 0x271, 0x270, 0x3, 0x2, 0x2, 
    0x2, 0x272, 0x275, 0x3, 0x2, 0x2, 0x2, 0x273, 0x271, 0x3, 0x2, 0x2, 
    0x2, 0x273, 0x274, 0x3, 0x2, 0x2, 0x2, 0x274, 0x276, 0x3, 0x2, 0x2, 
    0x2, 0x275, 0x273, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 0x7, 0x54, 0x2, 
    0x2, 0x277, 0x75, 0x3, 0x2, 0x2, 0x2, 0x278, 0x27c, 0x7, 0x53, 0x2, 
    0x2, 0x279, 0x27b, 0x5, 0x66, 0x34, 0x2, 0x27a, 0x279, 0x3, 0x2, 0x2, 
    0x2, 0x27b, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27a, 0x3, 0x2, 0x2, 
    0x2, 0x27c, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27f, 0x3, 0x2, 0x2, 
    0x2, 0x27e, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x289, 0x7, 0x54, 0x2, 
    0x2, 0x280, 0x284, 0x7, 0x4f, 0x2, 0x2, 0x281, 0x283, 0x5, 0x66, 0x34, 
    0x2, 0x282, 0x281, 0x3, 0x2, 0x2, 0x2, 0x283, 0x286, 0x3, 0x2, 0x2, 
    0x2, 0x284, 0x282, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x3, 0x2, 0x2, 
    0x2, 0x285, 0x287, 0x3, 0x2, 0x2, 0x2, 0x286, 0x284, 0x3, 0x2, 0x2, 
    0x2, 0x287, 0x289, 0x7, 0x50, 0x2, 0x2, 0x288, 0x278, 0x3, 0x2, 0x2, 
    0x2, 0x288, 0x280, 0x3, 0x2, 0x2, 0x2, 0x289, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x28a, 0x290, 0x5, 0x7a, 0x3e, 0x2, 0x28b, 0x290, 0x5, 0x7c, 0x3f, 0x2, 
    0x28c, 0x290, 0x7, 0x4c, 0x2, 0x2, 0x28d, 0x290, 0x7, 0x4d, 0x2, 0x2, 
    0x28e, 0x290, 0x7, 0x4e, 0x2, 0x2, 0x28f, 0x28a, 0x3, 0x2, 0x2, 0x2, 
    0x28f, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x28c, 0x3, 0x2, 0x2, 0x2, 
    0x28f, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x28e, 0x3, 0x2, 0x2, 0x2, 
    0x290, 0x79, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x9, 0xe, 0x2, 0x2, 0x292, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x9, 0xf, 0x2, 0x2, 0x294, 0x7d, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x81, 0x85, 0x8c, 0x93, 0x98, 0x9f, 0xa6, 
    0xa9, 0xd8, 0xdd, 0xe6, 0xeb, 0xf5, 0x116, 0x11c, 0x138, 0x13f, 0x146, 
    0x14c, 0x151, 0x154, 0x159, 0x15f, 0x165, 0x16c, 0x171, 0x175, 0x18a, 
    0x191, 0x196, 0x19a, 0x1a0, 0x1a5, 0x1ad, 0x1af, 0x1b3, 0x1bc, 0x1c0, 
    0x1c5, 0x1c9, 0x1d5, 0x1d9, 0x1dd, 0x1e1, 0x1e7, 0x1f1, 0x21c, 0x225, 
    0x227, 0x230, 0x23b, 0x241, 0x248, 0x24d, 0x24f, 0x256, 0x25d, 0x265, 
    0x26c, 0x273, 0x27c, 0x284, 0x288, 0x28f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

EscriptParser::Initializer EscriptParser::_init;
