#pragma once
#include "menu.hpp"

namespace cookies {
const MenuItem* exit(const MenuItem* current);
const MenuItem* show_menu(const MenuItem* current);
const MenuItem* go_back(const MenuItem* current);

const MenuItem* read_lermontov(const MenuItem* current);
const MenuItem* read_krylov(const MenuItem* current);

const MenuItem* dubrovskiy(const MenuItem* current);
const MenuItem* onegin(const MenuItem* current);
const MenuItem* zimnie_vecera(const MenuItem* current);
const MenuItem* pushkin_go_back(const MenuItem* current);
}

