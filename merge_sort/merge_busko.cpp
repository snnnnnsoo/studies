#include <iostream>
#include "sortings.hpp"



int main(){
    std::vector<int> array;
    int array_element, m;

    std::cout << "enter m: ";
    std::cin >> m;

    std::cout<<"enter array's elements (array's length must be a multiple of m): "<<std::endl;
    while (std::cin>>array_element)
        array.push_back(array_element);
    std::cout<<std::endl;
    
    Insert_sort(array, m);
    Merge_sort(array, 0, int(array.size())-1, m);

    for (size_t i = 0; i < array.size(); ++i)
        std::cout<< array[i] << " ";
}
