#pragma once

namespace cookies {
struct MenuItem {
    const char* title;
    void (*func)(const MenuItem* current);
    const MenuItem* const *children;
    const int children_count;
    
};
}
