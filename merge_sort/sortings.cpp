#include "sortings.hpp"
#include <vector>
#include <iostream>


void Insert_sort(std::vector<int> &array_to_sort, int m){
    int temp;
    for (int i = 1; i < int(array_to_sort.size()); i+=m){
        for (int j = i; j < i - 1 + m; ++j){
            temp = array_to_sort[j];
            int l;
            for (l = j; l > i - 1 && array_to_sort[l-1] > temp; --l){
                array_to_sort[l] = array_to_sort[l-1];
            }
        array_to_sort[l] = temp;
        }

    }
}

void Merge(
        std::vector<int> &array_to_sort,
        int left_edge,
        int right_edge,
        int m,
        int median){

        int left_array_size = median - left_edge + 1;
        int right_array_size = right_edge - median;
        std::vector<int> left_array(left_array_size);
        std::vector<int> right_array(right_array_size);

        for(int i = 0; i < left_array_size; ++i){
            left_array[i] = array_to_sort[left_edge + i];
        
        }
        for(int j = 0; j < right_array_size; ++j){
            right_array[j] = array_to_sort[median + j + 1];
        }
        
        left_array.push_back(1e9);
        right_array.push_back(1e9);

        int i = 0;
        int j = 0;

        for (int k = left_edge; k <= right_edge; ++k){
            if (left_array[i] < right_array[j]){
                array_to_sort[k] = left_array[i];
                ++i;
            }else if(left_array[i] > right_array[j]){
                array_to_sort[k] = right_array[j];
                ++j;
        }
    }
}


void Merge_sort(
        std::vector<int> &array_to_sort,
        int left_edge,
        int right_edge,
        int m){
    int median;
    if (right_edge - left_edge + 1 > m){
        if(((right_edge - left_edge+1)/m)%2==0){
            median = (right_edge + left_edge)/2;
        }else{
            median = right_edge - m;
        }
        Merge_sort(array_to_sort, left_edge, median, m);
        Merge_sort(array_to_sort, median + 1, right_edge, m);
        Merge(array_to_sort, left_edge, right_edge, m, median);
    }
}
