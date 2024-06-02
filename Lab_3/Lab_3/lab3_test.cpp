#include "Q1.cpp"

#include <gtest/gtest.h>


//question 1
TEST(Swapper, case1) {

        int a = 3;
        int *b = new int(5);
        int res;
        res = Swapper( a, b, res);
        ASSERT_EQ(res, 15);
        ASSERT_EQ(a, 5);
        ASSERT_EQ( *b, 3);

}

TEST(Swapper, case2) {

        int a = -5;
        int *b = new int(6);
        int res;
        res = Swapper( a, b, res);
        ASSERT_EQ(res, -30);
        ASSERT_EQ(a, 6);
        ASSERT_EQ( * b, -5);

}

//ques 2
TEST(sumOfDiagonal, case1) {
	int* a1=new int[5]{10,11,12,2,3};
	int* a2=new int[5]{4,6,2,7,8};
	int* a3=new int[5]{9,11,3,6,9};
	int* a4=new int[5]{5,7,3,2,5};
	int* a5=new int[5]{9,7,4,8,7};
	
        int* A[5]={a1,a2,a3,a4,a5};

        ASSERT_EQ(calDiagonal(A, 5, 5), 29);
}

TEST(sumOfDiagonal, case2) {
 
        int* a1 = new int[3] {10,11,12 };
        int* a2 = new int[3] {7,9,6};
        int* a3 = new int[3] {19,2,21};
	int* A[3]={a1,a2,a3};
        ASSERT_EQ(calDiagonal(A, 3, 3), 40);

}

//ques 3
TEST(rotateArray, rotate1) {
        int arr[] = {1,2,3,4,5,6};
        int a[] = {2,3,1,5,6,4};
        int *arr1 = rotateArray(arr, 6, 2, 2);

        for (int i = 0; i < 5; i++) {
                ASSERT_EQ(a[i], arr1[i]);
        }
}

TEST(rotateArray, rotate2) {

        int arr2[] = {1,4,3,11,7,9,5,10,12,6,2,8};
        int a1[] = {4,3,11,1,9,5,10,7,6,2,8,12};
        int *arr3 = rotateArray(arr2, 12, 3, 3);

        for (int i = 0; i < 12; i++) {
                ASSERT_EQ(a1[i], arr3[i]);
        }
}
//question4
TEST(sumof2Darray, case1) {
	int* a1=new int[5] {10,9,8,7,6};
	int* a2=new int[5]{9,8,7,6,5};
	int* a3=new int[5]{8,7,6,5,4};
	int* a4=new int[5]{7,6,5,4,3};
	int* a5=new int[5]{6,5,4,3,2};
        int* A[5]={a1,a2,a3,a4,a5};
        int * sum = sumArray(A, 5, 5);
        ASSERT_EQ(sum[0], 54);
        ASSERT_EQ(sum[1], 36);
        ASSERT_EQ(sum[2], 36);
        ASSERT_EQ(sum[3], 24);

}
TEST(sumof2Darray, case2) {
	
        int* a1 = new int[4]{10,9,7,12};
        int* a2= new int[4]{7,9,6,11};
        int* a3 = new int[4]{19,2,21,3};
	int* A[3]={a1,a2,a3};
        int * sum = sumArray(A, 3, 4);

        ASSERT_EQ(sum[0], 57);
        ASSERT_EQ(sum[1], 26);
        ASSERT_EQ(sum[2], 13);
        ASSERT_EQ(sum[3], 20);
}

int main(int argc, char ** argv) {
        testing::InitGoogleTest( & argc, argv);
        return RUN_ALL_TESTS();
}
