//
// Created by Eric Swanson on 4/29/20.
//

#ifndef POLSERVER_ASTNODE_H
#define POLSERVER_ASTNODE_H

#include <memory>
#include <vector>
#include "token.h"

namespace Pol
{
namespace Bscript
{

class AstNode
{
public:
  AstNode(const std::vector<std::shared_ptr<AstNode>>& children);

private:
  Token token;
  std::vector<std::shared_ptr<AstNode>> children;
};

}
}

#endif  // POLSERVER_ASTNODE_H
