//
// Created by Eric Swanson on 4/29/20.
//

#ifndef POLSERVER_METHODCALLASTNODE_H
#define POLSERVER_METHODCALLASTNODE_H

#include "AstNode.h"

namespace Pol
{
namespace Bscript
{

class MethodCallAstNode : public AstNode
{
public:
  MethodCallAstNode(const std::string& name, std::vector<std::shared_ptr<AstNode>> children);

  virtual std::string describe() const override;

  // "Specified" arguments are in contrast to arguments that use defaults.
  size_t num_specified_arguments() const;
  const std::shared_ptr<AstNode> specified_argument(size_t n) const;

private:
  std::string method_name;
};

};
};



#endif  // POLSERVER_METHODCALLASTNODE_H
