//
// Created by Eric Swanson on 4/29/20.
//

#ifndef POLSERVER_ASTNODE_H
#define POLSERVER_ASTNODE_H

#include <vector>
#include "token.h"

namespace Pol
{
namespace Bscript
{

class ASTNode
{
private:
  Token token;
  std::vector<ASTNode> children;
};

}
}

#endif  // POLSERVER_ASTNODE_H
