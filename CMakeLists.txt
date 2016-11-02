cmake_minimum_required(VERSION 3.1)
project(Foo)

# Set option to use C++11
set (CMAKE_CXX_STANDARD 11)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/out/lib)

# Add library
include_directories("${PROJECT_SOURCE_DIR}/include")
# include_directories("${PROJECT_SOURCE_DIR}/src")
add_subdirectory(src lib)
