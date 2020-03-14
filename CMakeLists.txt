project(tut_project)
cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 11)
# -Wall -Wextra : show all warnings 
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
# keep debug informatio nin binary 
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
# optimization level {0, 1, 2, 3}, when  3 is full optimization, and 0 is no optimization
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

#tell cmake to output binaries here: 
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
#tell cmake where to look for *.h files 
include_directories(${PROJECT_SOURCE_DIR}/src)
# create library "libtools"
add_library(tools src/Declaration_Definition.cpp)
#add executable file
add_executable(main src/main.cpp)
add_executable(move_main src/move_main.cpp)
add_executable(CustumOperator src/CustumOperator.cpp)
add_executable(inheritance src/inheritance.cpp)
add_executable(staticFunctions src/staticFunctions.cpp)
add_executable(digits_extinction src/digits_extinction.cpp)
add_executable(pointer_dereferencing src/pointer_dereferencing.cpp)
add_executable(pointer_overflow src/pointer_overflow.cpp)

# tell the linker to bind these objects together
target_link_libraries(main tools)