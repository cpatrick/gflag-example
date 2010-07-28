cmake_minimum_required(VERSION 2.8)

project(gflag-example)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMake")

find_package( GFlags REQUIRED )
include_directories(${GFlags_INCLUDE_DIR})

add_executable( gflag-example gflag-example.cxx )
target_link_libraries( gflag-example ${GFlags_LIBS} )