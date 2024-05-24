#pragma once

#include <engy/window/WindowManager.hpp>

#include <engy/core/AppContext.hpp>
#include <engy/window/Window.hpp>

#include <engy/external/glad/glad.h>
#define GLFW_INCLUDE_NONE
#include <engy/external/glfw/glfw3.h>

engy::Window WindowManager::createWindow(const char* title, u32 width, u32 height) {

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);

    GLFWwindow* gw = glfwCreateWindow(width, height, title, NULL, NULL);

    if (!gw)
        throw;

    // glfwSetKeyCallback(w1, key_callback);

    glfwMakeContextCurrent(gw);
    gladLoadGL();

    engy::Window w {
        title, width, height
    };

    auto winId    = this->genWinID();

    w.latchWindow(winId);

    this->addWindow(w);

    return w;
}

Window_t WindowManager::genWinID() {
    return this->winInstances++;
}

void WindowManager::addWindow(engy::Window win) {
    mWinTable[win.id()] = win;
}
