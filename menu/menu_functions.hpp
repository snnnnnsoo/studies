#pragma once
#include "menu.hpp"

namespace cookies {
    void exit(const cookies::MenuItem* current);
    void read(const cookies::MenuItem* current);
    void read_pushkin(const cookies::MenuItem* current);
    void read_lermontov(const MenuItem* current);
    void read_krylov(const MenuItem* current);
    void read_go_back(const MenuItem* current);
    void show_menu(const MenuItem* current);
}

