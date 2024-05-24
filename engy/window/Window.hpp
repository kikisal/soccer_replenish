#pragma once

#include <engy/core/types.hpp>

using Window_t = size_t;

struct GLContext;


namespace engy {

struct Window {

    Window(const char* title, u32 width, u32 height);

    /// @brief 
    /// @return 
    GLContext getContext();

    /// @brief 
    /// @param width 
    /// @param height 
    void resize(u32 width, u32 height);

    /// @brief 
    void close();

    /// @brief 
    /// @return width of window 
    inline u32 width() const {
        return uWidth;
    }

    /// @brief 
    /// @return height of window 
    inline u32 height() const {
        return uHeight;
    }

    /// @brief 
    /// @return id of window 
    inline size_t id() const {
        return wId;
    }

private:
    friend class ::WindowManager;

    void latchWindow(Window_t wid);

private:
    Window_t    wId;
    const char* sTitle;
    u32         uWidth;
    u32         uHeight;

};


extern Window createWindow(u32 width, u32 height);

};

