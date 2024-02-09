cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(testSTC)

set(SOURCES
  src/main.cpp
)

add_executable(testSTC ${SOURCES})

target_include_directories(testSTC PUBLIC include)
