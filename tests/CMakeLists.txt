include_directories(${CMAKE_SOURCE_DIR})

add_executable(test1 test1.cpp ../GraphPacket/Graph.cpp ../Solution/Solution.cpp)
configure_file(${CMAKE_SOURCE_DIR}/tests/in/test1.in ${CMAKE_BINARY_DIR}/tests/test1.in COPYONLY)

add_executable(test2 test2.cpp ../GraphPacket/Graph.cpp ../Solution/Solution.cpp)
configure_file(${CMAKE_SOURCE_DIR}/tests/in/test2.in ${CMAKE_BINARY_DIR}/tests/test2.in COPYONLY)

add_executable(test3 test3.cpp ../GraphPacket/Graph.cpp ../Solution/Solution.cpp)
configure_file(${CMAKE_SOURCE_DIR}/tests/in/test3.in ${CMAKE_BINARY_DIR}/tests/test3.in COPYONLY)

add_executable(test4 test4.cpp ../GraphPacket/Graph.cpp ../Solution/Solution.cpp)
configure_file(${CMAKE_SOURCE_DIR}/tests/in/test4.in ${CMAKE_BINARY_DIR}/tests/test4.in COPYONLY)
