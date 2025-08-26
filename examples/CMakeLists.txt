add_executable(graphical_UI graphical_UI.cpp)
target_link_libraries(graphical_UI PRIVATE Qt6::Widgets)

add_executable(hello_world hello_world.cpp)
target_link_libraries(hello_world PRIVATE Qt6::Widgets)