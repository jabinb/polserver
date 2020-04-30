//
// Created by Eric Swanson on 4/29/20.
//

#include "StatementAstNode.h"

namespace Pol
{
namespace Bscript
{

StatementAstNode::StatementAstNode( const std::vector<std::shared_ptr<AstNode>> children )
    : AstNode( children )
{
}

}  // namespace Bscript
}  // namespace Pol