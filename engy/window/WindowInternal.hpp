#pragma once

#include <engy/external/glfw/glfw3.h>

struct WindowInternal {
    void resize();
    GLFWwindow* window;
};
