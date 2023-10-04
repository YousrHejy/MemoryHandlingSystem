cmake_minimum_required(VERSION 3.22.1)
project(memory_handler_lib)
set (sourceFiles 
src/filesInfo.cpp
src/purgingService.cpp
src/logs.cpp
headers.hpp
)# to allow edit and adding more than source file
include_directories(header) #in order not to use #include"../header/handler.hpp" in cpp file 
add_library(${PROJECT_NAME} ${sourceFiles} )
