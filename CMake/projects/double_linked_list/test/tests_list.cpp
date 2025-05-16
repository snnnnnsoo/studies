#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "doubly_linked_list.hpp"

using namespace biv;

TEST(DoublyLinkedListTests, PushBackAndBasicOperations) {
    DoublyLinkedList<int> list;
    EXPECT_EQ(list.get_size(), 0);
    
    list.push_back(7);
    list.push_back(14);
    list.push_back(21);
    ASSERT_EQ(list.get_size(),3);
    ASSERT_TRUE(list.has_item(7));
    ASSERT_TRUE(list.has_item(14));
    ASSERT_TRUE(list.has_item(21));
    ASSERT_FALSE(list.has_item(28));
}

TEST(DoublyLinkedListTests, RemoveExistingAndNonExisting) {
    DoublyLinkedList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    
    bool removed = list.remove_first(20);
    ASSERT_TRUE(removed);
    ASSERT_EQ(list.get_size(), 2);
    ASSERT_FALSE(list.has_item(20));
    
    removed = list.remove_first(100);
    ASSERT_FALSE(removed);
    ASSERT_EQ(list.get_size(), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
