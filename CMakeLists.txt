cmake_minimum_required(VERSION 3.22.1)
project(disk_handler)
set(subProjects 
memory_handler_lib)#all subdirector and libraries
add_executable(${PROJECT_NAME} memory_handler_test/main.cpp)  #excultable file .0
foreach(Project IN LISTS subProjects)
    include_directories(${Project})
    if(NOT TARGET ${Project})
        add_subdirectory(${Project})
    endif()
    target_link_libraries(${PROJECT_NAME} ${Project})
endforeach()


