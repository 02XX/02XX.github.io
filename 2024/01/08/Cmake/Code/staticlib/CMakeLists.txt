cmake_minimum_required(VERSION 3.5)

project(muti)


add_library(muti STATIC)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} source)
message("头文件列表: ${include}")
message("源文件列表: ${source}")
target_sources(muti PRIVATE ${source})
target_include_directories(muti PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})