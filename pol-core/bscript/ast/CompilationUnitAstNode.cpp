//
// Created by Eric Swanson on 4/29/20.
//

#include "CompilationUnitAstNode.h"

namespace Pol
{
namespace Bscript
{

CompilationUnitAstNode::CompilationUnitAstNode( std::vector<std::shared_ptr<AstNode>> children )
    : AstNode( children )
{
}

}  // namespace Bscript
}  // namespace Pol