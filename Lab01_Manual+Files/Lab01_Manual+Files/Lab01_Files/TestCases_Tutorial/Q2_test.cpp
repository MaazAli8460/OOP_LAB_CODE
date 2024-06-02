#include "Q2.cpp"
#include <gtest/gtest.h>

TEST(whole, t1) { 
    int arr[] = {1, -2, 6, 3, -9, 4, 10};
    int a[]={10,4,-9,3,6,-2,1};
    int *arr1=reverseArray(arr,7);

    for(int i=0; i<5; i++){
        ASSERT_EQ(a[i], arr1[i]);
    }

}




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
