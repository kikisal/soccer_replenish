#pragma once

struct WindowManager;

struct AppContext {

    WindowManager getWindowManager();

    static void init();
    static AppContext* get();
};

#define CHECK_APP_INITIALIZED() {   \
    auto app = AppContext::get();   \
    if (!app)                       \
        throw;                      \
}