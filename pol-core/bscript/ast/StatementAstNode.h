//
// Created by Eric Swanson on 4/29/20.
//

#ifndef POLSERVER_STATEMENTASTNODE_H
#define POLSERVER_STATEMENTASTNODE_H

#include "AstNode.h"

namespace Pol
{
namespace Bscript
{

class StatementAstNode : public AstNode
{
public:
  StatementAstNode(const std::vector<std::shared_ptr<AstNode>> children);
};

}
}


#endif  // POLSERVER_STATEMENTASTNODE_H
