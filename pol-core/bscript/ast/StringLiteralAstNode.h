//
// Created by Eric Swanson on 4/29/20.
//

#ifndef POLSERVER_STRINGLITERALASTNODE_H
#define POLSERVER_STRINGLITERALASTNODE_H

#include "AstNode.h"

namespace Pol
{
namespace Bscript
{

class StringLiteralAstNode : public AstNode
{
public:
  StringLiteralAstNode(const std::string& value);

  virtual std::string describe() const override;

private:
  std::string value;
};

}
}

#endif  // POLSERVER_STRINGLITERALASTNODE_H
