cmake_minimum_required(VERSION 3.0.2)
project(chap2)

include_directories(
    include
)

add_executable(test_class_example1
src/test_person_student.cpp
include/person.cpp
include/student.cpp)