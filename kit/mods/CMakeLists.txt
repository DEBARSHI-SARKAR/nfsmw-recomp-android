# Vendored Lua 5.4: the library only, lua.c and luac.c are not vendored.
file(GLOB POP_LUA_SOURCES CONFIGURE_DEPENDS ${POP_ROOT}/third_party/lua/*.c)
add_library(lua STATIC ${POP_LUA_SOURCES})
set_target_properties(lua PROPERTIES
  C_STANDARD 99 C_EXTENSIONS OFF
  ARCHIVE_OUTPUT_DIRECTORY ${POP_ARCHIVE_DIR} OUTPUT_NAME lua)
target_include_directories(lua PUBLIC ${POP_ROOT}/third_party/lua)
target_compile_options(lua PRIVATE -Wall -Wextra -Wno-unused-parameter)
target_compile_definitions(lua PRIVATE
  $<$<PLATFORM_ID:Darwin>:LUA_USE_MACOSX>
  $<$<PLATFORM_ID:iOS>:LUA_USE_IOS>
  $<$<PLATFORM_ID:Linux>:LUA_USE_LINUX>)
pop_optimize(lua 2)

# The mod foundation. Globbed as the scripts globbed, so a new module is
# picked up by the next configure.
file(GLOB POP_MODS_SOURCES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/lua/*.cpp)
list(REMOVE_ITEM POP_MODS_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/builtin_mods.cpp)
add_library(recomp_builtin_defaults STATIC builtin_mods.cpp)
set_target_properties(recomp_builtin_defaults PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${POP_ARCHIVE_DIR})
# The capture seam includes the page-tracking harness from native,
# which is mprotect and signal handlers. Windows gets the stub that says so.
list(REMOVE_ITEM POP_MODS_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/capture_seam_win32.cpp)
if(WIN32)
  list(REMOVE_ITEM POP_MODS_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/capture_seam.cpp)
  list(APPEND POP_MODS_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/capture_seam_win32.cpp)
endif()

add_library(recomp_mods OBJECT ${POP_MODS_SOURCES})
target_include_directories(recomp_mods PUBLIC ${POP_ROOT} ${POP_ROOT}/runtime)
target_link_libraries(recomp_mods PUBLIC lua recomp_runtime recomp_builtin_defaults)
target_compile_options(recomp_mods PRIVATE ${POP_WARN_HOST})
pop_optimize(recomp_mods 2)
if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
  # std::atomic::is_lock_free in the page tracker needs libatomic with clang + libstdc++.
  target_link_libraries(recomp_mods PUBLIC atomic)
endif()

if(NOT IOS AND NOT ANDROID)
add_library(recomp_mods_testing OBJECT ${POP_MODS_SOURCES})
target_include_directories(recomp_mods_testing PUBLIC ${POP_ROOT} ${POP_ROOT}/runtime)
target_link_libraries(recomp_mods_testing PUBLIC lua recomp_runtime_testing recomp_builtin_defaults)
target_compile_definitions(recomp_mods_testing PUBLIC POPM_TESTING=1)
target_compile_options(recomp_mods_testing PRIVATE ${POP_WARN_HOST})
pop_optimize(recomp_mods_testing 1)
if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
  target_link_libraries(recomp_mods_testing PUBLIC atomic)
endif()
endif()

# Plugin fixtures the loader tests load. Every .c becomes a module of the same
# name; old_cpu is built with the older header AHEAD of the real one so its
# sizeof(pop_cpu_v1) really is the older value.
if(NOT IOS AND NOT ANDROID)
file(GLOB POP_FIXTURE_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/tests/fixtures/*.c)
add_custom_target(mod_fixtures)
foreach(src ${POP_FIXTURE_SOURCES})
  get_filename_component(stem ${src} NAME_WE)
  set(first "")
  if(stem STREQUAL "old_cpu")
    set(first INCLUDE_FIRST ${CMAKE_CURRENT_SOURCE_DIR}/tests/fixtures/old_header)
  endif()
  # capture_mod calls the host's capture seam directly, which a Windows DLL
  # cannot import; the replay suite that loads it is not built there either.
  if(WIN32 AND stem STREQUAL "capture_mod")
    continue()
  endif()
  # display_projection wraps the game's own display mod; without that game
  # there is nothing to wrap.
  if(stem STREQUAL "display_projection")
    if(NOT EXISTS ${RECOMP_GAME_DIR}/mods/core/display/display.c)
      continue()
    endif()
    set(first INCLUDE_FIRST ${RECOMP_GAME_DIR})
  endif()
  pop_add_plugin(fixture_${stem} SOURCE ${src} OUTPUT_DIR ${POP_OUT}/mods-fixtures
    OUTPUT_NAME ${stem} ${first} OPTIONS -g)
  add_dependencies(mod_fixtures fixture_${stem})
endforeach()
endif()

# Where resources and the profile live, for every layout an executable can have.
if(NOT IOS AND NOT ANDROID)
add_executable(layout_tests ${POP_ROOT}/runtime/layout.cpp tests/layout_tests.cpp)
target_include_directories(layout_tests PRIVATE ${POP_ROOT})
target_link_libraries(layout_tests PRIVATE recomp_platform)
target_compile_options(layout_tests PRIVATE ${POP_WARN_STRICT})
pop_optimize(layout_tests 1)
pop_test_binary(layout_tests)
add_test(NAME layout_tests COMMAND layout_tests WORKING_DIRECTORY ${POP_ROOT})
set_tests_properties(layout_tests PROPERTIES LABELS nogame)
endif()

if(TARGET recomp_gen AND NOT IOS AND NOT ANDROID)
  add_library(mods_api_header_test OBJECT tests/api_header_test.c)
  target_compile_definitions(mods_api_header_test PRIVATE POPM_TESTING=1)
  target_include_directories(mods_api_header_test PRIVATE ${POP_ROOT} ${POP_ROOT}/runtime ${POP_GEN_DIR})
  target_compile_options(mods_api_header_test PRIVATE -Wall -Wextra -Wno-unused-parameter)
  pop_optimize(mods_api_header_test 1)

  file(GLOB POP_MODS_TEST_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp)
  # layout_tests is its own nogame executable with its own main.
  list(REMOVE_ITEM POP_MODS_TEST_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/tests/layout_tests.cpp)
  # game_view_tests decodes the game's entity records with the game's own codec.
  if(NOT EXISTS ${RECOMP_GAME_DIR}/tests/entity_codec.hpp)
    list(REMOVE_ITEM POP_MODS_TEST_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/tests/game_view_tests.cpp)
  endif()
  if(WIN32)
    # The replay bridge includes the native page tracker (mprotect, signal
    # handlers); Windows has the capture seam stub instead.
    list(REMOVE_ITEM POP_MODS_TEST_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/tests/replay_tests_bridge.cpp)
  endif()
  add_executable(mods_tests ${POP_MODS_TEST_SOURCES} $<TARGET_OBJECTS:mods_api_header_test>)
  target_include_directories(mods_tests PRIVATE ${RECOMP_GAME_DIR})
  target_link_libraries(mods_tests PRIVATE recomp_platform recomp_runtime_testing recomp_snapshot recomp_mods_testing lua)
  target_compile_options(mods_tests PRIVATE ${POP_WARN_HOST})
  pop_optimize(mods_tests 1)
  pop_link_gen(mods_tests)
  add_dependencies(mods_tests mod_fixtures)
  if(TARGET core_mods) # the game's core mods, when the game has any
    add_dependencies(mods_tests core_mods)
  endif()
  if(MINGW)
    target_link_libraries(mods_tests PRIVATE pthread) # the run-record test's small-stack thread
  endif()
  add_test(NAME mods_tests COMMAND mods_tests WORKING_DIRECTORY ${POP_ROOT})
  set_tests_properties(mods_tests PROPERTIES LABELS mods ENVIRONMENT RECOMP_BUILD_ROOT=${POP_BUILD_ROOT})
endif()
