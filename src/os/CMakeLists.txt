add_library(VxLibOs
    os.h
    key_state.h
    window_descriptor.h
    window.h window.c
    window_control.h window_control.c
    input_helper.h input_helper.c
    state_manager.h state_manager.c
    nuklear/input_helper.h nuklear/input_helper.c
    context/opengl.h context/opengl.c
    context/sokol.h context/sokol.c
)

target_include_directories(VxLibOs PUBLIC ..)

target_link_libraries(VxLibOs PRIVATE VxLibCommon)
target_link_libraries(VxLibOs PRIVATE VxUtils)
target_link_libraries(VxLibOs PRIVATE Sokol)
target_link_libraries(VxLibOs PRIVATE glfw)
target_link_libraries(VxLibOs PRIVATE Nuklear)
target_link_libraries(VxLibOs PRIVATE Glad)