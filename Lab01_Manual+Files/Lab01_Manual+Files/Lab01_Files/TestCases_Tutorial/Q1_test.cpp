#include "Q1.cpp"
#include <gtest/gtest.h>

TEST(sumArray, Sum1) { 
    int arr[]={7,2,8,4,5,9};
    ASSERT_EQ(35, sumArray(arr,6));
}

TEST(sumArray, sum2) {
    int arr[]={-1,-2,-7,3,-11,4,0};
    ASSERT_EQ(-14, sumArray(arr,7));
}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
