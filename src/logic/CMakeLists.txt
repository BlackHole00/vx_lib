add_library(VxLibLogic
    logic.h
    transform.h transform.c
    components/components.h
    components/position.h
    components/rotation.h
)

target_include_directories(VxLibLogic PUBLIC ..)

target_link_libraries(VxLibLogic PRIVATE VxUtils)
target_link_libraries(VxLibLogic PRIVATE Sokol)
target_link_libraries(VxLibLogic PRIVATE glfw)
target_link_libraries(VxLibLogic PRIVATE Nuklear)
target_link_libraries(VxLibLogic PRIVATE Glad)
target_link_libraries(VxLibLogic PRIVATE HandmadeMath)