//
// Created by Eric Swanson on 4/28/20.
//

#ifndef POLSERVER_COMPILATIONUNITS_H
#define POLSERVER_COMPILATIONUNITS_H

#include <map>
#include <string>
#include <vector>

namespace Pol
{
namespace Bscript
{

class CompilationUnit;

class CompilationUnits
{
public:
  ~CompilationUnits();
  void load( const std::string& pathname );

private:
  std::vector<CompilationUnit*> files_in_order;
  std::map<std::string, CompilationUnit*> files;
};

}
}

#endif  // POLSERVER_COMPILATIONUNITS_H
