#include "vector.hpp"

#include <iostream>

using biv::Vector;

template<typename T>
const std::size_t Vector<T>::START_CAPACITY = 10;

template<typename T>
Vector<T>::Vector() {
    arr = new T[capacity];
}

template<typename T>
Vector<T>::~Vector() {
    delete[] arr;
}

template<typename T>
std::size_t Vector<T>::get_size() const {
    return size;
}

template<typename T>
bool Vector<T>::has_item(const T& value) const {
    for (int i = 0; i < size; ++i){
        if (arr[i] == value){
            return 1;
        }
    }
    return 0;
}

template<typename T>
bool Vector<T>::insert(const std::size_t position, const T& value) {
    if ((position >= size) || (position < 0)){
        return 0;
    }else{
        if (size == capacity){
            capacity_overflow();
        }
        for (int i = size - 1; i >= position; --i){
            arr[i + 1] = arr[i];
        }
        arr[position] = value;
        size += 1;
        return 1;
    }
}
    
template<typename T>
void Vector<T>::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size - 1; ++i){
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[size - 1] << " ]";
}
    
    template<typename T>
    void Vector<T>::push_back(const T& value) {
        if (size == capacity){
            capacity_overflow();
        }
        arr[size + 1] = value;
        size += 1;
    }
    
    template<typename T>
    bool Vector<T>::remove_first(const T& value) {
        bool flag = false;
        for (int i = 0; i < size - 1; ++i){
            if (arr[i] == value){
                flag = true;
            }
            if (flag){
                arr[i] = arr[i + 1];
            }
        }
        size -= 1;
        return flag;
    }
    
    template<typename T>
    void Vector<T>::capacity_overflow(){
        capacity *=2 ;
        T* temp = new T[capacity];
        for (int i = 0; i < size; ++i){
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;

    }
