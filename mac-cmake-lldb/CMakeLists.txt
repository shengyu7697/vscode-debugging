cmake_minimum_required(VERSION 3.17)

project(vscode-debugging-mac-cmake-lldb)

set(CMAKE_BUILD_TYPE "Debug")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
SET(CMAKE_CXX_STANDARD 14)

add_executable(a.out main.cpp)
#target_link_libraries(a.out )
