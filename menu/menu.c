#include <clocale>
#include <cstdlib>
#include <iostream>

int main()
{
    std::setlocale(LC_ALL, "");
    
    int user_input;
    do {
        std::cout << "Читалка приветствует тебя, мой юный ученик!" << std::endl;
        std::cout << "1 - Русские писатели";
        std::cout << "0 - Завершить чтение";
        std::cout << "Читалка > ";
        
        std::cin >> user_input;
        if (user_input == 1)
        {
            
        }
        else if (user_input == 0)
        {
            exit(0);
        }
        
        std::cout << std::endl;
    } while (true);
    
    return 0;
}
