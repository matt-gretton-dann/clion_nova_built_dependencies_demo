cmake_minimum_required(VERSION 3.27)
project(clion_nova_built_dependencies_demo CXX)

set(CMAKE_CXX_STANDARD 11)

set (ClassName Bar)
add_custom_command(
        OUTPUT "standards.h"
        COMMAND "cp" "${CMAKE_CURRENT_SOURCE_DIR}/generated.txt" "${CMAKE_CURRENT_BINARY_DIR}/standards.h"
        WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
        MAIN_DEPENDENCY generated.txt
)

add_library(clion_nova_built_dependencies_demo STATIC library.cxx standards.h)
target_include_directories(clion_nova_built_dependencies_demo PUBLIC "${CMAKE_CURRENT_BINARY_DIR}")