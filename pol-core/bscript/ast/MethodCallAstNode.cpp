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

std::string MethodCallAstNode::describe() const
{
  return "method-call: " + method_name;
}

size_t MethodCallAstNode::num_specified_arguments() const
{
  return children.size();
}

const std::shared_ptr<AstNode> MethodCallAstNode::specified_argument( size_t n ) const
{
  return children.at( n );
}


}  // namespace Bscript
}  // namespace Pol
