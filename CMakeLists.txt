#cmake_minimum_required(VERSION 3.10)
#project(Testprojekt)
#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_AUTOMOC ON)   # Genererar MOC-kod för Qt:s signals/slots
#set(CMAKE_AUTOUIC ON)   # Gör att du kan använda .ui-filer direkt
#set(CMAKE_AUTORCC ON)   # Gör att du kan använda .qrc-resurser
#add_executable(testprogram hello_world.cpp)
#add_executable(testprogram exampels/graphical_UI.cpp)


cmake_minimum_required(VERSION 3.16)
project(magic_moneyz LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(testprogram exampels/graphical_UI.cpp)

target_link_libraries(testprogram PRIVATE Qt6::Widgets)