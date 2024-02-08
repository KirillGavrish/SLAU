cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_FLAGS "-g")
project(main)

add_executable(main main.cpp)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

target_link_libraries(main ALOP ${GTEST_LIBRARIES} pthread)
