cmake_minimum_required(VERSION 3.0.2)
project(chap1)

include_directories(
    INCLUDE_DIRS include
)


add_executable(test_pass 
src/test_passenger.cpp
include/passenger.cpp
)
target_link_libraries(test_pass)

add_executable(test_vect
src/test_vect.cpp
)
target_link_libraries(test_vect)
