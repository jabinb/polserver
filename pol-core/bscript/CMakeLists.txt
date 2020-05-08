set(lib_name bscript)

include(CMakeSources.cmake)

add_library(${lib_name} STATIC
  ${${lib_name}_sources}
)

set_compile_flags(${lib_name} 0)
warning_suppression(${lib_name})
enable_pch(${lib_name})
include_directories("${CMAKE_CURRENT_LIST_DIR}/../../lib/antlr/runtime/Cpp/runtime/src")

#target_include_directories(${lib_name}  PRIVATE
#        "${CMAKE_CURRENT_LIST_DIR}/../../lib/antlr/runtime/Cpp/runtime/src"
#        )

#clib is our base lib, if this waits for boost extraction
#its enough, the external libs can start to build already
if(NOT EXISTS "${ANTLR_SOURCE_DIR}/antlr")
  add_dependencies(${lib_name} antlr)
endif()

target_link_libraries(${lib_name} PUBLIC
  antlr
  clib
)
if (${linux})
  target_link_libraries(${lib_name} PUBLIC
    pthread    
  )
endif()

use_tidy(${lib_name})
