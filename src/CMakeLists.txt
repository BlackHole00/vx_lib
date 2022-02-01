add_subdirectory(os)
add_subdirectory(gfx)
add_subdirectory(logic)

add_library(VxLib INTERFACE)
target_link_libraries(VxLib INTERFACE Os)
target_link_libraries(VxLib INTERFACE Logic)
target_link_libraries(VxLib INTERFACE Gfx)