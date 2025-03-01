#include <iostream>


void Bubble_Sort(int array[], int array_size){
    for (int i = 0; i < array_size - 1; ++i){
        bool sorted = true;
        for (int j = 0; j < array_size - i - 1;++j){
            if (array[j] > array[j+1]){
                sorted = false;
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        if (sorted){
            break;
            std::cout<<"array is sorted!";
        }
        }
    }

}


int main(){

    int element;
    int array_size;
    int array[array_size];
    int count = 0;
    std::cin>>element;
    std::cout<<std::endl;
    for(int i = 0; i < array_size; ++i)
        std::cin>>array[i];
        
    Bubble_Sort(array, array_size);

    for(int i = 0; i < array_size; ++i)
        std::cout<<array[i]<<"    ";
}