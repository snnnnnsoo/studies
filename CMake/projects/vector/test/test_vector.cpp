#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "vector.hpp"


using namespace biv;

TEST(test_vector, test_pushback){
    Vector<int> a;
    a.push_back(2);
    ASSERT_EQ(a.get_size(), 1);
	
}


TEST(test_vector, test_insert){
    Vector<int> a;
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    
    a.insert(2, 6);
    
    ASSERT_TRUE(a.has_item(6));
    ASSERT_EQ(a.get_size(), 6);
}

TEST(test_vector, test_remove_first){
    
    Vector<int> a;
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    
    a.remove_first(2);
    
    if (a.has_item(2)){
        std::cout << "не удаляет число";
    }
    
    if (a.get_size() != 4){
        std::cout << "не меняет размер";
    }
    ASSERT_FALSE(a.has_item(2));
    ASSERT_EQ(a.get_size(), 4);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
