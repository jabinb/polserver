//
// Created by Eric Swanson on 4/29/20.
//

#ifndef POLSERVER_ASTNODE_H
#define POLSERVER_ASTNODE_H

#include <iosfwd>
#include <memory>
#include <string>
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

  std::string toStringTree() const;

  virtual std::string describe() const = 0;

protected:
  Token token;
  std::vector<std::shared_ptr<AstNode>> children;

private:
  static void formatToStringTree(std::ostringstream& os, const AstNode& node, int indent);
};

}
}

#endif  // POLSERVER_ASTNODE_H
