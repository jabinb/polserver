//
// Created by Eric Swanson on 4/29/20.
//

#include "MethodCallAstNode.h"

namespace Pol
{
namespace Bscript
{
MethodCallAstNode::MethodCallAstNode( const std::string& name,
                                      std::vector<std::shared_ptr<AstNode>> children )
    : AstNode( children ), method_name( name )
{
}

}  // namespace Bscript
}  // namespace Pol
