add_library(VxLibGfx
    gfx.h
    camera.h    camera.c
)

target_include_directories(VxLibGfx PUBLIC ..)

target_link_libraries(VxLibGfx PRIVATE VxUtils)
target_link_libraries(VxLibGfx PRIVATE Sokol)
target_link_libraries(VxLibGfx PRIVATE glfw)
target_link_libraries(VxLibGfx PRIVATE Nuklear)
target_link_libraries(VxLibGfx PRIVATE Glad)
target_link_libraries(VxLibGfx PRIVATE HandmadeMath)