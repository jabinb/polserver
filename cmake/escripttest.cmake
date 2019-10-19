#EScript test suite

cmake_minimum_required(VERSION 3.2)
if(NOT DEFINED testdir)
  message(FATAL_ERROR "testdir not defined")
endif()
if(NOT DEFINED subtest)
  message(FATAL_ERROR "subtest not defined")
endif()
if(NOT DEFINED runecl)
  message(FATAL_ERROR "runecl not defined")
endif()
if(NOT DEFINED ecompile)
  message(FATAL_ERROR "ecompile not defined")
endif()

function (cleanup scriptname)
  foreach (ext .ecl .tst .lst)
    if(EXISTS "${scriptname}${ext}")
      file(REMOVE "${scriptname}${ext}")
    endif()
  endforeach()
endfunction()

function (readfile file content content_len)
  # read given file into string list
  FILE(READ ${file} contents)
  STRING(REGEX REPLACE ";" "\\\\;" contents "${contents}")
  STRING(REGEX REPLACE "\n" ";" contents "${contents}")
  list(LENGTH contents len)
  math(EXPR len ${len}-2) # extra ; at end
  set(${content} ${contents} PARENT_SCOPE)
  set(${content_len} ${len} PARENT_SCOPE)
endfunction()

function (compareresult scriptname testext currext res)
  execute_process(
    COMMAND ${CMAKE_COMMAND} -E compare_files "${scriptname}.${testext}" "${scriptname}.${currext}"
    RESULT_VARIABLE test_not_successful
    OUTPUT_QUIET
    ERROR_QUIET
  )
  if (NOT ${test_not_successful})
    set(${res} 0 PARENT_SCOPE)
    return()
  endif()
  readfile("${scriptname}.${testext}" outcontent outlen)
  readfile("${scriptname}.${currext}" tstcontent tstlen)
  if (${outlen} EQUAL ${tstlen})
    foreach(i RANGE ${outlen})
      list(GET outcontent ${i} out)
      list(GET tstcontent ${i} tst)
      if (NOT ${out} STREQUAL ${tst})
        math(EXPR line ${i}+1)
        message("${scriptname}.src failed (.${testext}):")
        message("Line ${line} Expected:\n${out}\nGot:\n${tst}")
        cleanup(${scriptname})
        set(${result} 0 PARENT_SCOPE)
        message(SEND_ERROR "Line differs")
        set(${res} 0 PARENT_SCOPE)
        return()
      endif()
    endforeach()
  else()
    message("\"${tst}\"")
    message(SEND_ERROR "Testdata length differs")
    cleanup(${scriptname})
    set(${res} 0 PARENT_SCOPE)
  endif()
  set(${res} 1 PARENT_SCOPE)
endfunction()

function (checkprocfailure output errorfile result)
  # correct error msg from process?
  file(READ "${errorfile}" contents)
  string(FIND "${output}" "${contents}" err_found)
  if(${err_found} LESS 0)
    set(${result} 0 PARENT_SCOPE)
  else()
    set(${result} 1 PARENT_SCOPE)
  endif()
endfunction()

# start of test
file(GLOB scripts RELATIVE ${testdir} ${testdir}/${subtest}/*)
foreach(script ${scripts})
  string(FIND "${script}" ".src" out)
  if(${out} LESS 0)
    continue()
  endif()
  message(${script})
  string(REPLACE ".src" "" scriptname "${script}")
  if (EXISTS "${testdir}/${scriptname}.out" OR EXISTS "${testdir}/${scriptname}.err" OR EXISTS "${testdir}/${scriptname}.ins")
    set (comp_flags "-q -C ecompile.cfg")
    if (EXISTS "${testdir}/${scriptname}.ins")
      set (comp_flags "-l ${comp_flags}")
    endif()
    execute_process( COMMAND ${ecompile} ${comp_flags} ${script}
      RESULT_VARIABLE ecompile_res
      OUTPUT_VARIABLE ecompile_out
      ERROR_VARIABLE ecompile_out)
    if (EXISTS "${testdir}/${scriptname}.err")
      if("${ecompile_res}" STREQUAL "0")
        cleanup(${scriptname})
        message(SEND_ERROR "${scriptname}.src compiled, but should not")
      else()
        checkprocfailure("${ecompile_out}" "${testdir}/${scriptname}.err" success)
        if (NOT ${success})
          cleanup(${scriptname})
          message(SEND_ERROR "${scriptname}.src failed with different error")
        endif()
      endif()
    else()
      if(NOT "${ecompile_res}" STREQUAL "0")
        cleanup(${scriptname})
        message(SEND_ERROR "${scriptname}.src did not compile")
        message(${ecompile_out})
      endif()
      if (EXISTS "${testdir}/${scriptname}.ins")
        compareresult(${scriptname} "ins" "lst" cres)
        if (NOT ${cres})
          return()
        endif()
      endif()
      execute_process( COMMAND ${runecl} -q "${scriptname}.ecl"
        OUTPUT_FILE "${scriptname}.tst"
        RESULT_VARIABLE runecl_res
        ERROR_VARIABLE runecl_out)
      if (EXISTS "${testdir}/${scriptname}.exr")
        if(NOT "${runecl_res}" STREQUAL "0")
          checkprocfailure("${runecl_out}" "${testdir}/${scriptname}.exr" success)
          if (NOT ${success})
            cleanup(${scriptname})
            message(SEND_ERROR "${scriptname}.ecl failed with different error")
          endif()
        else()
          cleanup(${scriptname})
          message(SEND_ERROR "${scriptname}.ecl should have failed")
        endif()
      else()
        if(NOT "${runecl_res}" STREQUAL "0")
          cleanup(${scriptname})
          message(SEND_ERROR "${scriptname}.ecl did not run")
          message(${runecl_out})
        else()
          compareresult(${scriptname} "out" "tst" rres)
          if (NOT ${success})
            message(${runecl_out})
          endif()
        endif()
      endif()
    endif()
    cleanup(${scriptname})
  endif()
endforeach()
