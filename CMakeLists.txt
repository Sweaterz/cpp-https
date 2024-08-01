cmake_minimum_required(VERSION 3.5)

project(cpp-https LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
add_executable(cpp-https main.cpp)
target_link_libraries(cpp-https PUBLIC pthread)
add_executable(client client.cpp)
target_link_libraries(client PUBLIC pthread)

