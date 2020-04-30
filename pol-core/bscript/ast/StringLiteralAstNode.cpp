//
// Created by Eric Swanson on 4/29/20.
//

#include "StringLiteralAstNode.h"

namespace Pol
{
namespace Bscript
{

StringLiteralAstNode::StringLiteralAstNode(const std::string& value) : AstNode({}), value(value)
{

}

}
}