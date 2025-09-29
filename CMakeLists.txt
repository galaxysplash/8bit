cmake_minimum_required(VERSION 3.30)
project(8bit)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
file(GLOB SOURCES src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})
