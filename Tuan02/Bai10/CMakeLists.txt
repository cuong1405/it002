cmake_minimum_required(VERSION 3.10)
project(Bai10 LANGUAGES CXX)

# Use modern C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# For clangd (Neovim)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Folders
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(INC_DIR "${PROJECT_SOURCE_DIR}/include")

# Gather all .cpp files
file(GLOB SRC_FILES "${SRC_DIR}/*.cpp")

# Create executable
add_executable(${PROJECT_NAME} ${SRC_FILES})

# Include headers
target_include_directories(${PROJECT_NAME} PRIVATE ${INC_DIR})

# Basic warnings
if(MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE /W4)
else()
  target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic)
endif()
