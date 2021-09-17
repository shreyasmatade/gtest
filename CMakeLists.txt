cmake_minimum_required(VERSION 3.12)
project(Gtest)

set(CMAKE_CXX_STANDARD 17)


set (CMAKE_CXX_FLAGS "-g -W -Wall -Wextra")

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>

add_executable(mytest mytest.cpp myfunctions.cpp) # add this executable

target_link_libraries(mytest PRIVATE gtest) # link google test to this executable

