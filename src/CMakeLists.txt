add_subdirectory(common)
add_subdirectory(os)
add_subdirectory(gfx)
add_subdirectory(logic)

add_library(VxLib INTERFACE)
target_link_libraries(VxLib INTERFACE VxUtils)
target_link_libraries(VxLib INTERFACE VxLibOs)
target_link_libraries(VxLib INTERFACE VxLibLogic)
target_link_libraries(VxLib INTERFACE VxLibGfx)
target_link_libraries(VxLib INTERFACE HandmadeMath)
target_link_libraries(VxLib INTERFACE glfw)

if (VX_LIB_ENABLE_GLAD)
    target_link_libraries(VxLib INTERFACE Glad)
endif()
if (VX_LIB_ENABLE_SOKOL)
    target_link_libraries(VxLib INTERFACE Sokol)
endif()
if (VX_LIB_ENABLE_NUKLEAR)
    target_link_libraries(VxLib INTERFACE Nuklear)
endif()
if (VX_LIB_ENABLE_WGPU)
    target_link_libraries(VxLib INTERFACE Wgpu)
endif()
