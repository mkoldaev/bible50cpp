# cmake_minimum_required(VERSION <specify CMake version here>)
project(bible50cpp)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")
set(SOURCE_FILES main.cpp)
#add_executable(bible50cpp\${SOURCE_FILES})
add_executable(bible50cpp main.cpp)