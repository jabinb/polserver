//
// Created by Eric Swanson on 4/28/20.
//

#ifndef POLSERVER_COMPILATIONUNIT_H
#define POLSERVER_COMPILATIONUNIT_H

#include <string>

#include "antlr4-runtime.h"

#include <EscriptGrammar/EscriptLexer.h>
#include <EscriptGrammar/EscriptParser.h>

namespace Pol
{
namespace Bscript
{

class CompilationUnit
{
public:
  CompilationUnit(const std::string& pathname);

private:
  std::string pathname;
  antlr4::ANTLRFileStream input;
  EscriptGrammar::EscriptLexer lexer;
  antlr4::CommonTokenStream tokens;
  EscriptGrammar::EscriptParser parser;
};

}
}

#endif  // POLSERVER_COMPILATIONUNIT_H
