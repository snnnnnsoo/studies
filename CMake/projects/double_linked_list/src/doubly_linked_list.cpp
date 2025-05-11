#include "doubly_linked_list.hpp"

#include <iostream>

using biv::DoublyLinkedList;


template<typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    Node* current = begin;
    while (current != end){
        Node* next = current->next;
        delete current;
        current = next;
    }

}

template<typename T>
std::size_t DoublyLinkedList<T>::get_size() const {
    Node* current = begin;
    std::size_t size = 0;
    while (current != end){
        size += 1;
        current = current->next;
    }
    return size;
}

template<typename T>
bool DoublyLinkedList<T>::has_item(const T& value) const {
    Node* current = begin;
    int size = 0;
    while (current != end){
        if (current->value == value){
            return 1;
        }
        current = current->next;
    }
    return 0;
}

template<typename T>
void DoublyLinkedList<T>::print() const {
    Node* current = begin;
    int size = 0;
    
    std::cout << "[ ";
    while (current != end){
        std::cout << current->value<< ", ";
        current = current->next;
    }
    std::cout << current->value << " ]";
    
}

template<typename T>
void DoublyLinkedList<T>::push_back(const T& value) {
    Node* added;
    added->value = value;
    added->prev = end;
    end->next = added;
    end = added;
}

template<typename T>
bool DoublyLinkedList<T>::remove_first(const T& value) {
    
    Node* current = begin;
    if ((get_size() == 1) && (current->value == value)){
        current->prev = nullptr;
        current->next = nullptr;
        delete current;
        return 1;
    }else if((get_size() == 2)){
        if (begin->value == value){
            end->prev = nullptr;
            delete begin;
            begin = end;
            return 1;
        }else if(end->value == value){
            begin->next = nullptr;
            delete end;
            end = begin;
            return 1;
        }
    }else if((get_size() == 3)){
        Node* middle = begin->next;
        if (begin->value == value){
            middle->prev = nullptr;
            delete begin;
            begin = middle;
            return 1;
        }else if(end->value == value){
            middle->next = nullptr;
            delete end;
            end = middle;
            return 1;
        }else if(middle->value == value){
            begin->next = end;
            end->prev = begin;
            delete middle;
            return 1;
        }
        
    }else{
        while (current != end){
            Node* NEXT = current->next;
            if (current->value == value){
                if (current == begin){
                    (begin->next)->prev = nullptr;
                    delete begin;
                    begin=begin->next;
                    current = NEXT;
                    return 1;
                }else if(current == end){
                    (end->prev)->next = nullptr;
                    delete end;
                    end = end->prev;
                    current = NEXT;
                    return 1;
                }else{
                    (current->prev)->next = current->next;
                    (current->next)->prev = current->prev;
                    delete current;
                    current = NEXT;
                    return 1;
                }
            }
        }
    }
    return 0;
}
