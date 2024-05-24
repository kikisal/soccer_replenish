#include <iostream>
#include <engy/window/win.hpp>





static void demoWindow();


int main() {

    Window win { CreateWindow(400, 400) };
    GLContext glContext = win.getContext();

    demoWindow();
    
    return 0;
}


static Window CreateWindow(i32 width, i32 height) {
    return Window {width, height};
}




static void demoWindow() {
    

    
}


static void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
}