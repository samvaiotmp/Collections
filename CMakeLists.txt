cmake_minimum_required(VERSION 3.7)
project(Collections)

set(CMAKE_CXX_STANDARD 11)

include_directories(header)

set(SOURCE_FILES src/Collections.cpp src/Person.cpp header/Person.h)
add_executable(Collections ${SOURCE_FILES})