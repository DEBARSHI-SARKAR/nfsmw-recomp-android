# pop_mac_bundle(<target>): make <target> a .app in build/, named by
# RECOMP_APP_NAME, with Info.plist copied verbatim and the resources,
# core mods, texture pack and ad-hoc signature applied after the link.
function(pop_mac_bundle target)
  # Core plugins are compiled during bundle finishing. Relink/repackage when
  # their source or manifests change, even if the host itself is unchanged.
  file(GLOB_RECURSE core_inputs CONFIGURE_DEPENDS
    ${RECOMP_GAME_DIR}/mods/core/*.c ${RECOMP_GAME_DIR}/mods/core/*.h
    ${RECOMP_GAME_DIR}/mods/core/*.toml)
  if(core_inputs)
    set_property(TARGET ${target} APPEND PROPERTY LINK_DEPENDS ${core_inputs})
  endif()
  configure_file(${POP_ROOT}/host/Info.plist.in ${CMAKE_BINARY_DIR}/generated/Info.plist @ONLY)
  set_target_properties(${target} PROPERTIES
    MACOSX_BUNDLE ON
    OUTPUT_NAME ${RECOMP_APP_NAME}
    RUNTIME_OUTPUT_DIRECTORY ${POP_BUILD_DIR}
    MACOSX_BUNDLE_INFO_PLIST ${CMAKE_BINARY_DIR}/generated/Info.plist)
  set(video_args)
  if(RECOMP_VIDEO)
    # Use the shipped libraries even in a developer build; no build-tree rpath
    # may make an incomplete bundle appear to work.
    set_target_properties(${target} PROPERTIES
      BUILD_WITH_INSTALL_RPATH ON
      INSTALL_RPATH "@executable_path/../Frameworks")
    set_property(TARGET ${target} APPEND PROPERTY LINK_DEPENDS
      ${POP_ROOT}/third_party/ffmpeg/NOTICE.md)
    foreach(library IN LISTS RECOMP_FFMPEG_LIBRARIES)
      list(APPEND video_args --ffmpeg-library "${library}")
    endforeach()
  endif()
  set_property(TARGET ${target} APPEND PROPERTY LINK_DEPENDS
    ${POP_ROOT}/tools/recomp/finish_bundle.py)
  add_custom_command(TARGET ${target} POST_BUILD
    COMMAND ${Python3_EXECUTABLE} ${POP_ROOT}/tools/recomp/finish_bundle.py
            --bundle ${POP_BUILD_DIR}/${RECOMP_APP_NAME}.app
            --name ${RECOMP_APP_NAME} --cc ${CMAKE_C_COMPILER} --version ${POP_RECOMP_VERSION}
            --build-root ${POP_BUILD_ROOT} --game-dir ${RECOMP_GAME_DIR}
            ${video_args}
    WORKING_DIRECTORY ${POP_ROOT}
    COMMENT "Finishing ${RECOMP_APP_NAME}.app"
    VERBATIM)
endfunction()
