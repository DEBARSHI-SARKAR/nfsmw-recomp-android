cmake_minimum_required(VERSION 3.24)
project(PopulousRecomp LANGUAGES C CXX)
if(APPLE)
  enable_language(OBJCXX)
endif()

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_OBJCXX_STANDARD 20)
if(EMSCRIPTEN)
  # EM_ASM and EM_JS, in SDL and in the web host, need the GNU dialects.
  set(CMAKE_C_EXTENSIONS ON)
  set(CMAKE_CXX_EXTENSIONS ON)
endif()
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
if(ANDROID)
  # All static and object libraries feed the shared SDL application.
  set(CMAKE_POSITION_INDEPENDENT_CODE ON)
endif()

# Optimization is a per-target decision (cmake/Warnings.cmake). The
# configuration only decides whether -O0 is forced.
foreach(lang C CXX OBJCXX)
  set(CMAKE_${lang}_FLAGS_RELEASE "-g")
  set(CMAKE_${lang}_FLAGS_DEBUG "-g -O0")
endforeach()

set(POP_ROOT ${CMAKE_SOURCE_DIR})
set(POP_TRANSLATE AUTO CACHE STRING "AUTO, ON, OFF or STUB: how targets that need generated code get it")
set_property(CACHE POP_TRANSLATE PROPERTY STRINGS AUTO ON OFF STUB)
# Where every output goes: the translation, the texture pack, the apps and the
# logs. A game outside the kit keeps them beside itself (tools/build.py passes
# <game-dir>/build); the kit's own builds use build/.
set(POP_BUILD_ROOT ${POP_ROOT}/build CACHE PATH "Root of build outputs (build/recomp, build/ios, ...)")
# A stub build (no game code) keeps its outputs apart from a real build so it
# can never overwrite the archive or the bundle a player runs.
if(ANDROID AND POP_TRANSLATE STREQUAL "STUB")
  set(POP_BUILD_DIR ${POP_BUILD_ROOT}/android-stub)
elseif(ANDROID)
  set(POP_BUILD_DIR ${POP_BUILD_ROOT}/android)
elseif(IOS AND POP_TRANSLATE STREQUAL "STUB")
  set(POP_BUILD_DIR ${POP_BUILD_ROOT}/ios-stub)
# Cross builds (the web, Windows from macOS or Linux) keep theirs apart from
# the machine's own, which share the tree; the translation stays shared.
elseif(EMSCRIPTEN AND POP_TRANSLATE STREQUAL "STUB")
  set(POP_BUILD_DIR ${POP_BUILD_ROOT}/web-stub)
elseif(EMSCRIPTEN)
  set(POP_BUILD_DIR ${POP_BUILD_ROOT}/web)
elseif(WIN32 AND CMAKE_CROSSCOMPILING AND POP_TRANSLATE STREQUAL "STUB")
  set(POP_BUILD_DIR ${POP_BUILD_ROOT}/windows-stub)
elseif(WIN32 AND CMAKE_CROSSCOMPILING)
  set(POP_BUILD_DIR ${POP_BUILD_ROOT}/windows)
elseif(POP_TRANSLATE STREQUAL "STUB")
  set(POP_BUILD_DIR ${POP_BUILD_ROOT}/stub)
elseif(IOS)
  set(POP_BUILD_DIR ${POP_BUILD_ROOT}/ios)
else()
  set(POP_BUILD_DIR ${POP_BUILD_ROOT})
endif()
set(POP_OUT ${POP_BUILD_DIR}/recomp)
# Static archives are compiler/platform-specific. Shared game outputs can hold
# both mobile and desktop builds; never let one preset overwrite another's libs.
set(POP_ARCHIVE_DIR ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${POP_OUT})
set(POP_TRACE_DIR "" CACHE PATH "Snapshot directory for pop_fixture_trace")

# tools/build.py passes its own interpreter; a bare configure finds one.
if(NOT Python3_EXECUTABLE)
  find_package(Python3 REQUIRED COMPONENTS Interpreter)
endif()

# The game this build is for: a directory holding game.toml, rendered into
# generated/game_config.h (C macros) and generated/game_config.cmake (build
# names) at configure time; editing the toml reconfigures. The kit's own
# default is the stub game; real games live in their own repositories.
set(RECOMP_GAME_DIR ${POP_ROOT}/games/stub CACHE PATH "Directory holding the game.toml this build is for")
if(NOT IS_ABSOLUTE ${RECOMP_GAME_DIR})
  message(FATAL_ERROR "RECOMP_GAME_DIR must be absolute: ${RECOMP_GAME_DIR}")
endif()
if(NOT EXISTS ${RECOMP_GAME_DIR}/game.toml)
  message(FATAL_ERROR "No game config at ${RECOMP_GAME_DIR}/game.toml")
endif()
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
  ${RECOMP_GAME_DIR}/game.toml ${RECOMP_GAME_DIR}/globals.toml
  ${POP_ROOT}/tools/gen_game_config.py ${POP_ROOT}/tools/game_config.py)
execute_process(
  COMMAND ${Python3_EXECUTABLE} ${POP_ROOT}/tools/gen_game_config.py
          --game-dir ${RECOMP_GAME_DIR}
          --header ${CMAKE_BINARY_DIR}/generated/game_config.h
          --cmake ${CMAKE_BINARY_DIR}/generated/game_config.cmake
  RESULT_VARIABLE RECOMP_GAME_CONFIG_RESULT)
if(NOT RECOMP_GAME_CONFIG_RESULT EQUAL 0)
  message(FATAL_ERROR "tools/gen_game_config.py failed for ${RECOMP_GAME_DIR}")
endif()
include(${CMAKE_BINARY_DIR}/generated/game_config.cmake)
if(NOT RECOMP_APP_NAME MATCHES "^[A-Za-z0-9_-]+$")
  message(FATAL_ERROR "Invalid app_name in ${RECOMP_GAME_DIR}/game.toml: ${RECOMP_APP_NAME}")
endif()
include_directories(${CMAKE_BINARY_DIR}/generated)
add_compile_definitions(GUEST_IMAGE_BASE=${RECOMP_IMAGE_BASE})
add_compile_definitions(GUEST_HEAP_BASE=${RECOMP_HEAP_BASE})
add_compile_definitions(GUEST_SIZE=${RECOMP_GUEST_SIZE})

if(IOS)
  set(RECOMP_IOS_TEAM "$ENV{RECOMP_IOS_TEAM}" CACHE STRING "Apple development team for automatic signing")
  if(RECOMP_IOS_TEAM STREQUAL "" AND NOT POP_TRANSLATE STREQUAL "STUB")
    message(FATAL_ERROR "iOS builds need a signing team: set RECOMP_IOS_TEAM or pass tools/build.py --team; "
                        "`security find-identity -v -p codesigning` lists them")
  endif()
endif()

# The version is the git description of the commit being built; a tree
# without git history gets "unknown". The release workflow passes it in.
find_package(Git QUIET)
set(POP_RECOMP_VERSION "unknown" CACHE STRING "Version string baked into the hosts")
if(POP_RECOMP_VERSION STREQUAL "unknown" AND GIT_FOUND)
  execute_process(COMMAND ${GIT_EXECUTABLE} describe --tags --always --dirty
                  WORKING_DIRECTORY ${POP_ROOT} OUTPUT_VARIABLE POP_GIT_DESCRIBE
                  OUTPUT_STRIP_TRAILING_WHITESPACE ERROR_QUIET)
  if(POP_GIT_DESCRIBE)
    set(POP_RECOMP_VERSION ${POP_GIT_DESCRIBE})
  endif()
endif()
configure_file(${POP_ROOT}/host/version.h.in ${CMAKE_BINARY_DIR}/generated/version.h @ONLY)


if(NOT IOS AND NOT ANDROID)
  enable_testing()
endif()
add_custom_target(check_binaries)

include(cmake/Warnings.cmake)
include(cmake/Plugins.cmake)
include(cmake/BuiltinMods.cmake)
include(cmake/Translate.cmake)
include(cmake/MacBundle.cmake)
include(cmake/IosBundle.cmake)
include(cmake/Dependencies.cmake)
add_subdirectory(platform)
add_subdirectory(runtime)
add_subdirectory(dx)
add_subdirectory(mods)
# The game's own mods (core plugins, examples, smoke probe), when it has any.
if(NOT IOS AND NOT ANDROID AND EXISTS ${RECOMP_GAME_DIR}/mods/CMakeLists.txt)
  add_subdirectory(${RECOMP_GAME_DIR}/mods ${CMAKE_BINARY_DIR}/game-mods)
endif()
add_subdirectory(host)
