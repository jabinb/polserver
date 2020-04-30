//
// Created by Eric Swanson on 4/29/20.
//

#include "ASTNode.h"

namespace Pol
{
namespace Bscript
{

AstNode::AstNode(const std::vector<std::shared_ptr<AstNode>>& children) : children(children)
{

}

}
}