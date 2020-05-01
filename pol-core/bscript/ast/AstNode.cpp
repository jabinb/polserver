//
// Created by Eric Swanson on 4/29/20.
//

#include "ASTNode.h"
#include "../../clib/stlutil.h"

namespace Pol
{
namespace Bscript
{

AstNode::AstNode(const std::vector<std::shared_ptr<AstNode>>& children) : children(children)
{
}

std::string AstNode::toStringTree() const
{
  OSTRINGSTREAM os;
  formatToStringTree(os, *this, 0);
  return OSTRINGSTREAM_STR(os);
}

void AstNode::formatToStringTree(std::ostringstream& os, const AstNode& node, int indent)
{
  os << std::string(indent*2, ' ') << "- " << node.describe() + "\n";
  for ( auto child : node.children )
  {
    formatToStringTree(os, *child, indent+1);
  }
}

}
}