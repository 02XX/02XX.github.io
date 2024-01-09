# 最低版本
cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_COMPILER "E:/CodeEnvironment/TDM-GCC/bin/g++.exe")
set(CMAKE_C_COMPILER "E:/CodeEnvironment/TDM-GCC/bin/gcc.exe")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_SUBSYSTEM_WINDOWS_CONSOLE)

# 项目名称
project(HelloWorld)

# 可执行文件
add_executable(HelloWorld main.cpp)

# 源文件
file(GLOB srcs ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp)
message("源文件列表: ${srcs}")
target_sources(HelloWorld PRIVATE ${srcs})

# 头文件
target_include_directories(HelloWorld PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
message("头文件列表: ${include}")

# find_library(LIB_DIV libdiv.dll PATHS ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# message("库路径${LIB_DIV}")
target_link_libraries(HelloWorld PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib/libdiv.dll)