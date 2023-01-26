cmake_minimum_required(VERSION 3.16.0)
project(tree VERSION 0.0.1)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(RUN_DIR ${PROJECT_SOURCE_DIR})
set(EXE tree)

set(SOURCES main.cpp tree.h)

add_executable(${EXE} ${SOURCES})
target_include_directories(${EXE} PRIVATE ${PROJECT_SOURCE_DIR})
set_target_properties(${EXE} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${RUN_DIR})
