cmake_minimum_required(VERSION 3.5)

project(div)


add_library(div SHARED)

file(GLOB include ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
file(GLOB source ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
message("头文件列表: ${include}")
message("源文件列表: ${source}")
target_sources(div PRIVATE ${source})
target_include_directories(div PRIVATE ${include})