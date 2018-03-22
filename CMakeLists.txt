# CMake 最低版本号要求
cmake_minimum_required (VERSION 3.8)

# 项目信息
project (Interview)

set(CMAKE_CXX_STANDARD 11)

# 查找当前目录下的所有源文件, 并将名称保存到 DIR_SRCS 变量
# aux_source_directory(. DIR_SRCS_001)


# 指定生成目标
add_executable(092 leetcode/online/092.cpp)



