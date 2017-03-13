# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project (Interview)

# 查找当前目录下的所有源文件, 并将名称保存到 DIR_SRCS 变量
# aux_source_directory(. DIR_SRCS_001)


# 指定生成目标
add_executable(book1_001 ./book1/book1_001_main.cpp ./book1/book1_001.cpp)
add_executable(book1_002 ./book1/book1_002_main.cpp ./book1/book1_002.cpp)


# 添加c++xx支持
target_compile_features(book1_001 PRIVATE cxx_range_for)
target_compile_features(book1_002 PRIVATE cxx_range_for)
