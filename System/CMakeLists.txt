cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Google Test Dependency via FetchContent
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)

# Download and build Google Test
FetchContent_MakeAvailable(googletest)

# Collect all .cpp files in System as a library
file(GLOB_RECURSE PROJECT_SOURCES "*.cpp")
add_library(MyLibrary ${PROJECT_SOURCES})

# Make headers accessible
target_include_directories(MyLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Include the tests subdirectory
add_subdirectory(tests)
