cmake_minimum_required(VERSION 3.0.0)
project(testSTC)

include_directories(include)

set(SOURCES
  src/main.cpp
  src/smv.cpp
)

add_executable(testSRC ${SOURCES})
