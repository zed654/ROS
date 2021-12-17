# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ex_msg_srv_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ex_msg_srv_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ex_msg_srv_FOUND FALSE)
  elseif(NOT ex_msg_srv_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ex_msg_srv_FOUND FALSE)
  endif()
  return()
endif()
set(_ex_msg_srv_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ex_msg_srv_FIND_QUIETLY)
  message(STATUS "Found ex_msg_srv: 0.0.0 (${ex_msg_srv_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ex_msg_srv' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ex_msg_srv_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${ex_msg_srv_DIR}/${_extra}")
endforeach()
