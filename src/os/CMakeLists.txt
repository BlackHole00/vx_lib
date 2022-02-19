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
target_link_libraries(VxLibOs PRIVATE glfw)

if (VX_LIB_ENABLE_GLAD)
    message("glad")
    target_link_libraries(VxLibOs PRIVATE Glad)
endif()
if (VX_LIB_ENABLE_SOKOL)
    message("sokol")
    target_link_libraries(VxLibOs PRIVATE Sokol)
endif()
if (VX_LIB_ENABLE_NUKLEAR)
    message("nuklear")
    target_link_libraries(VxLibOs PRIVATE Nuklear)
endif()
if (VX_LIB_ENABLE_WGPU)
    message("wgpu")
    target_link_libraries(VxLibOs PRIVATE Wgpu)
endif()