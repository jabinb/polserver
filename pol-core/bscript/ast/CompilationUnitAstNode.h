//
// Created by Eric Swanson on 4/29/20.
//

#ifndef POLSERVER_COMPILATIONUNITASTNODE_H
#define POLSERVER_COMPILATIONUNITASTNODE_H

#include "AstNode.h"

namespace Pol
{
namespace Bscript
{

class CompilationUnitAstNode : AstNode
{
public:
  CompilationUnitAstNode(std::vector<std::shared_ptr<AstNode>> children);
};

}  // namespace Bscript
}  // namespace Pol


#endif  // POLSERVER_COMPILATIONUNITASTNODE_H
