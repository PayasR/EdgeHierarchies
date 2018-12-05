################################################################################
# CMakeLists.txt
#
# Copyright (C) 2018 Demian Hespe <hespe@kit.edu>
#
# All rights reserved.
################################################################################

cmake_minimum_required(VERSION 2.8.12)

project(edgeHierarchies)

# prohibit in-source builds
if("${PROJECT_SOURCE_DIR}" STREQUAL "${PROJECT_BINARY_DIR}")
  message(SEND_ERROR "In-source builds are not allowed.")
endif()

# default to Release building
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message("Defaulting CMAKE_BUILD_TYPE to Release")
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build type")
endif()


add_subdirectory(googletest/googletest)


include_directories(
  ${PROJECT_SOURCE_DIR}/lib
  )

# descend into apps
# add_subdirectory(app)

#descend into tests
enable_testing()
add_subdirectory(tests)
################################################################################