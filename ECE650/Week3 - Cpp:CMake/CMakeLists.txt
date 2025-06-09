cmake_minimum_required(VERSION 3.29)
project(Week3___Cpp_CMake)

set(CMAKE_CXX_STANDARD 20)

add_executable(Week3___Cpp_CMake main.cpp)
#        src/mylib.h)

# include_directories(src)
# 添加头文件搜索路径
include_directories(${CMAKE_SOURCE_DIR}/src)

# 添加头文件搜索路径
#include_directories(${CMAKE_SOURCE_DIR}/code)

# 添加可执行文件和源文件
#add_executable(MyApp main.cpp code/mylib.cpp)