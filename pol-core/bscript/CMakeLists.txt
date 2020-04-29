set(lib_name bscript)

include(CMakeSources.cmake)

add_library(${lib_name} STATIC
  ${${lib_name}_sources}
        ASTNode.cpp ASTNode.h)

set_compile_flags(${lib_name} 0)
warning_suppression(${lib_name})
enable_pch(${lib_name})
include_directories(${ANTLR4_INCLUDE_DIRS})

target_link_libraries(${lib_name} PUBLIC
  clib
  antlr4_static
)
if (${linux})
  target_link_libraries(${lib_name} PUBLIC
    pthread    
  )
endif()

use_tidy(${lib_name})
