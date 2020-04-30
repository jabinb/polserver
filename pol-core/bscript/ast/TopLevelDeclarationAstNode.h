//
// Created by Eric Swanson on 4/29/20.
//

#ifndef POLSERVER_TOPLEVELDECLARATIONASTNODE_H
#define POLSERVER_TOPLEVELDECLARATIONASTNODE_H

#include "AstNode.h"

namespace Pol
{
namespace Bscript
{

class AstNode;

class TopLevelDeclarationAstNode : public AstNode
{
public:
  TopLevelDeclarationAstNode( const std::vector<std::shared_ptr<AstNode>> children,
                              AstNode* statementAstNode );

private:
  AstNode* statement;
};

}  // namespace Bscript
}  // namespace Pol


#endif  // POLSERVER_TOPLEVELDECLARATIONASTNODE_H
