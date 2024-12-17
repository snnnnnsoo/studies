#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"


int main()
{
    std::setlocale(LC_ALL, "");
    
    cookies::MenuItem read_pushkin = {"1 - Читать Пушкина", cookies:: read_pushkin };
    cookies::MenuItem read_lermontov = {"2 - Читать Лермонтова", cookies:: read_lermontov };
    cookies::MenuItem read_krylov = {"3 - Читать Крылова", cookies:: read_krylov };
    cookies::MenuItem read_go_back = {"0 - Выйти в главное меню", cookies:: read_go_back };
    
    cookies:: MenuItem* read_children [] = {
        &read_go_back,
        &read_pushkin,
        &read_lermontov,
        &read_krylov
    };
    
    const int read_size = sizeof(read_children) / sizeof(read_children[0]);
    
    cookies::MenuItem read = {"1 - Русские писатели", cookies:: show_menu, read_children, read_size};
    cookies::MenuItem exit = {"0 - Завершить чтение", cookies:: exit };
    
    

    
    cookies::MenuItem* main_children[] = { &exit, &read };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
    
    cookies::MenuItem main_menu = {nullptr,cookies::show_menu, main_children, main_size};
    
    int user_input;
    
    main_menu.func(&main_menu);  ///??????
    do {
        std::cin >> user_input;
        std::cout << std:: endl;
        
        main_menu.children[user_input] -> func(main_menu.children[user_input]); ///?????
    } while (true);
    
    return 0;
}
