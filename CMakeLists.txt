cmake_minimum_required(VERSION 3.12) 
project(REASONING_PRACTICE LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
           ${CMAKE_CURRENT_SOURCE_DIR}/pattern.cpp)

add_executable(reasoningPractice ${SOURCE})
target_include_directories(reasoningPractice PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/.)
