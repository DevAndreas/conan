cmake_minimum_required(VERSION 2.8.12)
project(hello CXX)

set(${PROJECT_NAME}_SOURCES
    ${CMAKE_SOURCE_DIR}/src/hello.cpp
)

set(${PROJECT_NAME}_HEADERS
    ${CMAKE_SOURCE_DIR}/include/hello.h
)

include(${CMAKE_SOURCE_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

include_directories(include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")

add_executable(${PROJECT_NAME}
    ${${PROJECT_NAME}_SOURCES}
    ${${PROJECT_NAME}_HEADERS}
    ${CMAKE_SOURCE_DIR}/src/main.cpp
)
