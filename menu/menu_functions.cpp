#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>



const cookies::MenuItem* cookies::show_menu(const cookies::MenuItem* current)
{
    std::cout << "Читалка приветствует тебя, мой юный ученик!" << std::endl;
    for (int i = 1; i < current -> children_count; ++i)
    {
        std::cout << current -> children[i] -> title << std::endl;
    }
    std::cout << current -> children[0] -> title << std::endl;
    std::cout << "Читалка > ";
    
    int user_input;
    std::cin >> user_input;
    std::cout << std:: endl;
    
    return current->children[user_input];
}

const cookies::MenuItem* cookies::exit(const cookies::MenuItem* current)
{
    std:: exit(0);
}



const cookies::MenuItem* cookies::read_lermontov(const cookies::MenuItem* current)
{
    std::cout<< current->title<<std::endl;
    return current->parent;
}
const cookies::MenuItem* cookies::read_krylov(const cookies::MenuItem* current)
{
    std::cout<< current->title<<std::endl;
    return current->parent;
}
const cookies::MenuItem* cookies::read_go_back(const cookies::MenuItem* current)
{
    std::cout<< current->title<<std::endl;
    return current->parent->parent;
}



const cookies::MenuItem* cookies::dubrovskiy(const cookies::MenuItem* current)
{
    std::cout<<current->title<<std::endl;
    return current->parent;
}

const cookies::MenuItem* cookies::onegin(const cookies::MenuItem* current)
{
    std::cout<<current->title<<std::endl;
    return current->parent;
}

const cookies::MenuItem* cookies::zimnie_vecera(const cookies::MenuItem* current)
{
    std::cout<<current->title<<std::endl;
    return current->parent;
}

const cookies::MenuItem* cookies::pushkin_go_back(const cookies::MenuItem* current)
{
    std::cout<< current->title<<std::endl;
    return current->parent->parent;
}

    		
