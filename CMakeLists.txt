cmake_minimum_required(VERSION 3.16)
project(magic_moneyz LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

include_directories(${CMAKE_SOURCE_DIR}/project/includes)

file(GLOB SOURCES "./project/src/*.cpp")
add_executable(MagicMoneyz ${SOURCES})

target_link_libraries(MagicMoneyz PRIVATE Qt6::Widgets)

#makes it so every example get it's own executebel
add_subdirectory(examples)