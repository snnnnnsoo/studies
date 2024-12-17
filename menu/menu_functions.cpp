#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>


void cookies::exit(const cookies::MenuItem* current)
{
    std:: exit(0);
}

void cookies::read_pushkin(const cookies::MenuItem* current)
{
    
}
void cookies::read_lermontov(const cookies::MenuItem* current)
{
    
}
void cookies::read_krylov(const cookies::MenuItem* current)
{
    
}
void cookies::read_go_back(const cookies::MenuItem* current)
{
    
}
void cookies::show_menu(const cookies::MenuItem* current)
{
    std::cout << "Читалка приветствует тебя, мой юный ученик!" << std::endl;
    for (int i = 1; i < current -> children_count; ++i)
    {
        std::cout << current -> children[i] -> title << std::endl;
    }
    std::cout << current -> children[0] -> title << std::endl;
    std::cout << "Читалка > ";
    
    
    std::cout << std::endl;
}
    		
