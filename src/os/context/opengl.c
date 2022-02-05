#include "opengl.h"

#include <stdio.h>
#include <glad/glad.h>
#include <vx_utils.h>

#include "../window.h"

void vx_context_load_opengl(GLFWwindow* window) {
    vx_glfw_window_hint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    vx_glfw_window_hint(GLFW_CONTEXT_VERSION_MINOR, 3);
    vx_glfw_window_hint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    vx_glfw_window_hint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    /*  Make the window's context current   */
    glfwMakeContextCurrent(window);

    /*  Initialize GLAD so we can use modern OpenGL */
    VX_ASSERT("Could not Initialize GLAD!", gladLoadGLLoader((GLADloadproc)glfwGetProcAddress));
    printf("Using opengl %s\n", glGetString(GL_VERSION));
}