#pragma once

#include <engy/core/types.hpp>
#include <engy/memory/map.hpp>
#include <engy/window/Window.hpp>

class WindowManager {

public:
    WindowManager() {}

    /// @brief 
    /// @param title 
    /// @param width 
    /// @param height 
    /// @return 
    engy::Window createWindow(const char* title, u32 width, u32 height);

    
    /// @brief 
    /// @return 
    Window_t genWinID();

    void addWindow(engy::Window win);

    /// @brief 
    /// @param width 
    /// @param height 
    /// @return 
    static engy::Window createWindow(u32 width, u32 height);


private:
    Window_t winInstances {0};
    
    engy::Map<Window_t, engy::Window> mWinTable;
};