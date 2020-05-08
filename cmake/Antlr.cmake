set(lib_name antlr)


set (ANTLR_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/../lib/antlr4-4.8")
if(NOT EXISTS "${ANTLR_SOURCE_DIR}/antlr")
    ExternalProject_Add(antlr
#            URL "https://github.com/antlr/antlr4/archive/4.8.zip"
            URL "${ANTLR_SOURCE_DIR}/../antlr4-4.8.tar.gz"
            SOURCE_DIR "${ANTLR_SOURCE_DIR}"
            INSTALL_COMMAND ""
            CONFIGURE_COMMAND ""
            BUILD_COMMAND ""
            LOG_DOWNLOAD 1
            BUILD_IN_SOURCE 1
            )
    set_target_properties (antlr PROPERTIES FOLDER 3rdParty)
else()
    message("Antlr already extracted")
endif()

#set (ANTLR4_LIBRARY_DIR "${ANTLR4_SOURCE_DIR}/lib/lib")



add_library(${lib_name} STATIC
        # sorted !
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ANTLRErrorListener.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ANTLRErrorListener.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ANTLRErrorStrategy.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ANTLRErrorStrategy.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ANTLRFileStream.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ANTLRFileStream.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ANTLRInputStream.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ANTLRInputStream.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/BailErrorStrategy.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/BailErrorStrategy.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/BaseErrorListener.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/BaseErrorListener.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/BufferedTokenStream.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/BufferedTokenStream.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/CharStream.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/CharStream.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/CommonToken.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/CommonToken.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/CommonTokenFactory.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/CommonTokenFactory.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/CommonTokenStream.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/CommonTokenStream.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ConsoleErrorListener.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ConsoleErrorListener.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/DefaultErrorStrategy.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/DefaultErrorStrategy.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/DiagnosticErrorListener.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/DiagnosticErrorListener.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Exceptions.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Exceptions.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/FailedPredicateException.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/FailedPredicateException.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/InputMismatchException.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/InputMismatchException.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/IntStream.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/IntStream.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/InterpreterRuleContext.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/InterpreterRuleContext.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Lexer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Lexer.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/LexerInterpreter.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/LexerInterpreter.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/LexerNoViableAltException.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/LexerNoViableAltException.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ListTokenSource.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ListTokenSource.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/NoViableAltException.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/NoViableAltException.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Parser.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Parser.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ParserInterpreter.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ParserInterpreter.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ParserRuleContext.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ParserRuleContext.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ProxyErrorListener.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/ProxyErrorListener.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/RecognitionException.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/RecognitionException.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Recognizer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Recognizer.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/RuleContext.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/RuleContext.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/RuleContextWithAltNum.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/RuleContextWithAltNum.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/RuntimeMetaData.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/RuntimeMetaData.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Token.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Token.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/TokenFactory.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/TokenSource.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/TokenSource.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/TokenStream.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/TokenStream.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/TokenStreamRewriter.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/TokenStreamRewriter.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/UnbufferedCharStream.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/UnbufferedCharStream.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/UnbufferedTokenStream.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/UnbufferedTokenStream.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Vocabulary.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/Vocabulary.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/WritableToken.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/WritableToken.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/antlr4-common.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/antlr4-runtime.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATN.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATN.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNConfig.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNConfig.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNConfigSet.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNConfigSet.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNDeserializationOptions.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNDeserializationOptions.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNDeserializer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNDeserializer.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNSerializer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNSerializer.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNSimulator.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNSimulator.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ATNType.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/AbstractPredicateTransition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/AbstractPredicateTransition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ActionTransition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ActionTransition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/AmbiguityInfo.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/AmbiguityInfo.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ArrayPredictionContext.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ArrayPredictionContext.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/AtomTransition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/AtomTransition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/BasicBlockStartState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/BasicBlockStartState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/BasicState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/BasicState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/BlockEndState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/BlockEndState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/BlockStartState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/BlockStartState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ContextSensitivityInfo.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ContextSensitivityInfo.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/DecisionEventInfo.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/DecisionEventInfo.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/DecisionInfo.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/DecisionInfo.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/DecisionState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/DecisionState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/EmptyPredictionContext.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/EmptyPredictionContext.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/EpsilonTransition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/EpsilonTransition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ErrorInfo.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ErrorInfo.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LL1Analyzer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LL1Analyzer.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerATNConfig.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerATNConfig.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerATNSimulator.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerATNSimulator.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerAction.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerAction.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerActionExecutor.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerActionExecutor.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerActionType.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerChannelAction.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerChannelAction.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerCustomAction.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerCustomAction.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerIndexedCustomAction.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerIndexedCustomAction.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerModeAction.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerModeAction.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerMoreAction.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerMoreAction.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerPopModeAction.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerPopModeAction.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerPushModeAction.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerPushModeAction.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerSkipAction.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerSkipAction.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerTypeAction.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LexerTypeAction.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LookaheadEventInfo.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LookaheadEventInfo.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LoopEndState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/LoopEndState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/NotSetTransition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/NotSetTransition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/OrderedATNConfigSet.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/OrderedATNConfigSet.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ParseInfo.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ParseInfo.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ParserATNSimulator.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ParserATNSimulator.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PlusBlockStartState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PlusBlockStartState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PlusLoopbackState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PlusLoopbackState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PrecedencePredicateTransition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PrecedencePredicateTransition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PredicateEvalInfo.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PredicateEvalInfo.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PredicateTransition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PredicateTransition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PredictionContext.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PredictionContext.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PredictionMode.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/PredictionMode.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ProfilingATNSimulator.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/ProfilingATNSimulator.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/RangeTransition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/RangeTransition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/RuleStartState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/RuleStartState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/RuleStopState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/RuleStopState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/RuleTransition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/RuleTransition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/SemanticContext.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/SemanticContext.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/SetTransition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/SetTransition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/SingletonPredictionContext.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/SingletonPredictionContext.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/StarBlockStartState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/StarBlockStartState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/StarLoopEntryState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/StarLoopEntryState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/StarLoopbackState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/StarLoopbackState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/TokensStartState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/TokensStartState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/Transition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/Transition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/WildcardTransition.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/atn/WildcardTransition.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/dfa/DFA.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/dfa/DFA.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/dfa/DFASerializer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/dfa/DFASerializer.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/dfa/DFAState.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/dfa/DFAState.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/dfa/LexerDFASerializer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/dfa/LexerDFASerializer.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/misc/InterpreterDataReader.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/misc/InterpreterDataReader.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/misc/Interval.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/misc/Interval.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/misc/IntervalSet.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/misc/IntervalSet.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/misc/MurmurHash.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/misc/MurmurHash.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/misc/Predicate.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/misc/Predicate.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/Any.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/Any.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/Arrays.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/Arrays.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/BitSet.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/CPPUtils.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/CPPUtils.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/Declarations.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/StringUtils.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/StringUtils.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/guid.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/support/guid.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/AbstractParseTreeVisitor.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ErrorNode.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ErrorNode.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ErrorNodeImpl.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ErrorNodeImpl.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/IterativeParseTreeWalker.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/IterativeParseTreeWalker.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ParseTree.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ParseTree.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ParseTreeListener.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ParseTreeListener.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ParseTreeProperty.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ParseTreeVisitor.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ParseTreeVisitor.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ParseTreeWalker.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/ParseTreeWalker.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/TerminalNode.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/TerminalNode.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/TerminalNodeImpl.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/TerminalNodeImpl.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/Trees.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/Trees.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/Chunk.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/Chunk.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/ParseTreeMatch.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/ParseTreeMatch.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/ParseTreePattern.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/ParseTreePattern.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/ParseTreePatternMatcher.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/ParseTreePatternMatcher.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/RuleTagToken.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/RuleTagToken.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/TagChunk.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/TagChunk.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/TextChunk.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/TextChunk.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/TokenTagToken.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/pattern/TokenTagToken.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPath.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPath.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathElement.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathElement.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathLexer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathLexer.g4
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathLexer.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathLexer.tokens
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathLexerErrorListener.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathLexerErrorListener.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathRuleAnywhereElement.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathRuleAnywhereElement.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathRuleElement.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathRuleElement.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathTokenAnywhereElement.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathTokenAnywhereElement.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathTokenElement.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathTokenElement.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathWildcardAnywhereElement.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathWildcardAnywhereElement.h
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathWildcardElement.cpp
        ${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src/tree/xpath/XPathWildcardElement.h
        )

set_compile_flags(${lib_name} 0)

target_include_directories(${lib_name}  PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/../lib/antlr/runtime/Cpp/runtime/src"
        )

target_compile_definitions(${lib_name} PUBLIC
        ANTLR4CPP_STATIC
        )

#if (${windows})
#    target_compile_options(${lib_name} PRIVATE
#            /wd4458 #var name hides
#            )
#endif()

set_target_properties (${lib_name} PROPERTIES FOLDER 3rdParty)
