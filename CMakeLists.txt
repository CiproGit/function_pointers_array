cmake_minimum_required(VERSION 3.5)

project(function_pointers_array LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB SOURCES src/*.cpp)
file(GLOB HEADERS include/*.h)

add_executable(function_pointers_array ${SOURCES} ${HEADERS})
