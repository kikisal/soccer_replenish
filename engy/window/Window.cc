#include <engy/window/Window.hpp>

#include <engy/gfx/gfx.hpp>
#include <engy/core/AppContext.hpp>
#include <engy/window/WindowInternal.hpp>

namespace engy {
    
Window::Window(const char* title, u32 width, u32 height) : 
    sTitle {title}, uWidth {width}, uHeight {height} {}

extern Window createWindow(u32 width, u32 height) {
    CHECK_APP_INITIALIZED();

    return AppContext::get()->getWindowManager()
        .createWindow(width, height);
}

};




void WindowInternal::resize() {

}