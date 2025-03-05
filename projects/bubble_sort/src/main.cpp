
#include "bubble_sort.hpp"

int main() {
    std::vector<int>actual;
    actual.push_back(1);
    actual.push_back(8);
    actual.push_back(2);
    actual.push_back(5);
    actual.push_back(3);
    actual.push_back(11);
	
	print_array(actual);
    
    bubble_sort(actual);

    print_array(actual);

    return 0;
}


