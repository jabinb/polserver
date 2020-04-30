//
// Created by Eric Swanson on 4/29/20.
//

#include "TopLevelDeclarationAstNode.h"

namespace Pol
{
namespace Bscript
{

TopLevelDeclarationAstNode::TopLevelDeclarationAstNode(
    const std::vector<std::shared_ptr<AstNode>> children, AstNode* statement )
    : AstNode( children ), statement( statement )
{
}

}
}
