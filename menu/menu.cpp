#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"


int main()
{
    std::setlocale(LC_ALL, "");
    
    cookies::MenuItem read = {"1 - Русские писатели", cookies:: read };
    cookies::MenuItem exit = {"0 - Завершить чтение", cookies:: exit };
    
    int user_input;
    
    cookies::MenuItem* main_children[] = { &exit, &read };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
    
    do{
        std::cout << "Читалка приветствует тебя, мой юный ученик!" << std::endl;
        for (int i = 1; i < main_size; ++i)
        {
            std::cout << main_children[i] -> title << std::endl;
        }
        std::cout << main_children[0] -> title << std::endl;
        std::cout << "Читалка > ";
        
        std::cin >> user_input;
        main_children[user_input] -> func();
        
        std::cout << std::endl;
    } while (true);
    
    return 0;
}
