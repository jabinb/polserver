//
// Created by Eric Swanson on 4/29/20.
//

#include "StringLiteralAstNode.h"

#include <iomanip>
#include "../../clib/strutil.h"

namespace Pol
{
namespace Bscript
{

StringLiteralAstNode::StringLiteralAstNode(const std::string& value) : AstNode({}), value(value)
{

}

std::string StringLiteralAstNode::describe() const
{
  // why doesn't <iomanip> provide std::quoted?
  return "String literal: " + Clib::getencodedquotedstring(value);
}

}
}