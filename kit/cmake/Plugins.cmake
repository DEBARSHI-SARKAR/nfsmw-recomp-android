# pop_add_plugin(<target> SOURCE <c file> OUTPUT_DIR <dir> OUTPUT_NAME <stem>
#                [INCLUDE_FIRST <dir>] [WARNINGS <flags>...] [OPTIONS <flags>...])
#
# A mod plugin: one C file, a MODULE library named <stem> with the platform's
# extension, compiled against mods for pop_mod_api.h. Undefined
# symbols are left for load time on Apple because the API arrives as a pointer;
# ELF modules allow them by default and COFF plugins reference nothing.
function(pop_add_plugin target)
  if(IOS)
    return() # no loadable plugins on a stock device
  endif()
  cmake_parse_arguments(ARG "" "SOURCE;OUTPUT_DIR;OUTPUT_NAME;INCLUDE_FIRST" "WARNINGS;OPTIONS" ${ARGN})
  add_library(${target} MODULE ${ARG_SOURCE})
  set_target_properties(${target} PROPERTIES
    PREFIX "" OUTPUT_NAME ${ARG_OUTPUT_NAME}
    LIBRARY_OUTPUT_DIRECTORY ${ARG_OUTPUT_DIR}
    C_STANDARD 11 C_EXTENSIONS OFF)
  if(APPLE)
    # MODULE libraries default to .so on Apple; the loader wants .dylib.
    set_target_properties(${target} PROPERTIES SUFFIX ".dylib")
    target_link_options(${target} PRIVATE -Wl,-undefined,dynamic_lookup)
  endif()
  if(ARG_INCLUDE_FIRST)
    target_include_directories(${target} BEFORE PRIVATE ${ARG_INCLUDE_FIRST})
  endif()
  target_include_directories(${target} PRIVATE ${POP_ROOT}/mods)
  target_compile_options(${target} PRIVATE ${ARG_WARNINGS} ${ARG_OPTIONS})
  pop_optimize(${target} 1)
endfunction()
