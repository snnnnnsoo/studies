#pragma once

namespace cookies {
struct MenuItem {
    const char* title;
    void (*func)();
};
}
