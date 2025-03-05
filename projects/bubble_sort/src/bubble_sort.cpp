
#include "bubble_sort.hpp"

void bubble_sort(std::vector<int> &arr) {
    for (int i = 0; i < arr.size()- 1; i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
        }
    }
}
void print_array(std::vector<int> &arr) {
    const char format = ' ';
    for (int i = 0; i < arr.size(); i++) {
        std::cout << format << arr[i];
    }
    std::cout << std::endl;
}
