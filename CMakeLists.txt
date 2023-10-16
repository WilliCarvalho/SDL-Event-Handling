cmake_minimum_required(VERSION 3.26)
project(Event_Handle)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake-modules)

set(SDL2_PATH "C:/SDL2-2.28.4/x86_64-w64-mingw32")

find_package(SDL2 REQUIRED)
INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIR})

add_executable(Event_Handle main.cpp)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})
