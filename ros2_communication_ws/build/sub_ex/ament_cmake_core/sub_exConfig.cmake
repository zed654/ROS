# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_sub_ex_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED sub_ex_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(sub_ex_FOUND FALSE)
  elseif(NOT sub_ex_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(sub_ex_FOUND FALSE)
  endif()
  return()
endif()
set(_sub_ex_CONFIG_INCLUDED TRUE)

# output package information
if(NOT sub_ex_FIND_QUIETLY)
  message(STATUS "Found sub_ex: 0.4.0 (${sub_ex_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'sub_ex' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(sub_ex_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${sub_ex_DIR}/${_extra}")
endforeach()
