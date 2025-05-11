#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "doubly_linked_list.hpp"


using namespace biv;

TEST(list_test, test_get_size){
    DoublyLinkedList<int> a;
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    
    ASSERT_EQ(a.get_size(), 5);
}

TEST(list_test, test_has_item){
    DoublyLinkedList<int> a;
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    
    ASSERT_TRUE(a.has_item(1));
    ASSERT_TRUE(a.has_item(3));
    ASSERT_TRUE(a.has_item(5));
}


TEST(list_test, test_push_back){
    
    DoublyLinkedList<int> a;
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    
    ASSERT_TRUE(a.has_item(2));
    
}

TEST(list_test, test_remove_first){
    
    DoublyLinkedList<int> a;
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    
    a.remove_first(3);
    
    ASSERT_FALSE(a.has_item(3));
    ASSERT_EQ(a.get_size(), 4);
    
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
