# The plugins this game ships: its bundled core mods.
add_custom_target(core_mods
  COMMAND ${Python3_EXECUTABLE} ${POP_ROOT}/tools/recomp/build_core.py
          --source ${CMAKE_CURRENT_SOURCE_DIR}/core
          --dest ${POP_OUT}/mods/core --cc ${CMAKE_C_COMPILER}
  WORKING_DIRECTORY ${POP_ROOT}
  COMMENT "Installing core mods into build/recomp/mods/core"
  VERBATIM)

add_custom_target(plugins DEPENDS core_mods)
