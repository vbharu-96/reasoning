cmake_minimum_required(VERSION 3.12) 
project(REASONING_PRACTICE LANGUAGES CXX)
set(CMAKE_CXX_STANDARD_REQUIRED 17)

set(SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
           ${CMAKE_CURRENT_SOURCE_DIR}/pattern.cpp)

add_executable(reasoningPractice ${SOURCE})
