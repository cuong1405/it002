cmake_minimum_required (VERSION 3.10)

project (Bai05)

set (CMAKE_CXX_STANDARD 17) 
set (CMAKE_EXPORT_COMPILE_COMMANDS ON)
set (source_dir "${PROJECT_SOURCE_DIR}/src/")

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (Bai05 ${source_files})

