#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const cookies::MenuItem cookies::PUSHKIN_DUBROVSKIY = {"1 - Дубровский", cookies::dubrovskiy, &cookies::READ_PUSHKIN};
const cookies::MenuItem cookies::PUSHKIN_ONEGIN = {"2 - Онегин", cookies::onegin, &cookies::READ_PUSHKIN};
const cookies::MenuItem cookies::PUSHKIN_ZIMNIE_VECERA = {"3 - Зимние вечера", cookies::zimnie_vecera, &cookies::READ_PUSHKIN};
const cookies::MenuItem cookies::PUSHKIN_GO_BACK = {"0 - Выйти в главное меню", cookies::pushkin_go_back, &cookies::READ_PUSHKIN};

namespace{
    const cookies::MenuItem* const pushkin_children [] = {
        &cookies::PUSHKIN_GO_BACK,
        &cookies::PUSHKIN_DUBROVSKIY,
        &cookies::PUSHKIN_ONEGIN,
        &cookies::PUSHKIN_ZIMNIE_VECERA
    };
const int pushkin_size = sizeof(pushkin_children)/sizeof(pushkin_children[0]);
}


const cookies::MenuItem cookies::READ_PUSHKIN = {"1 - Читать Пушкина", cookies:: show_menu, &cookies:: READ, pushkin_children, pushkin_size};
const cookies::MenuItem cookies::READ_LERMONTOV = {"2 - Читать Лермонтова", cookies:: read_lermontov, &cookies:: READ};
const cookies::MenuItem cookies::READ_KRYLOV = {"3 - Читать Крылова", cookies:: read_krylov, &cookies:: READ};
const cookies::MenuItem cookies::READ_GO_BACK = {"0 - Выйти в главное меню", cookies:: read_go_back, &cookies:: READ};

namespace{
    const cookies::MenuItem* const read_children [] = {
        &cookies::READ_GO_BACK,
        &cookies::READ_PUSHKIN,
        &cookies::READ_LERMONTOV,
        &cookies::READ_KRYLOV
    };
    const int read_size = sizeof(read_children) / sizeof(read_children[0]);
}


const cookies::MenuItem cookies::READ = {"1 - Русские писатели", cookies:: show_menu, &cookies::MAIN, read_children, read_size};
const cookies::MenuItem cookies::EXIT = {"0 - Завершить чтение", cookies:: exit, &cookies::MAIN};

namespace{
    const cookies::MenuItem* const main_children[] = {
        &cookies::EXIT,
        &cookies::READ
        };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}


const cookies::MenuItem cookies::MAIN = {nullptr,cookies::show_menu, nullptr, main_children, main_size};


