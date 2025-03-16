cmake_minimum_required(VERSION 3.30)
project(checkTask)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR}/GraphPacket ${CMAKE_SOURCE_DIR}/Solution)
configure_file(${CMAKE_SOURCE_DIR}/graph.txt ${CMAKE_BINARY_DIR}/graph.txt COPYONLY)

add_executable(checkTask
        main.cpp
        GraphPacket/Graph.cpp
        Solution/Solution.cpp
)
