#include "Q1.cpp"
#include <gtest/gtest.h>

//ques 1
TEST(calculateGrades, grade) { 
    int arr[] = {95, 63, 76, 40, 85};
    char a[]={'A','C','B','F','B'};
    char *arr1=calculateGrades(arr,5);

    for(int i=0; i<5; i++){
        ASSERT_EQ(a[i], arr1[i]);
    }
  
    int arr2[] = {35, 72, 59, 88, 100, 43};
    char a1[]={'F','C','D','B','A','F'};
    char *arr3=calculateGrades(arr2,6);

    for(int i=0; i<6; i++){
        ASSERT_EQ(a1[i], arr3[i]);
    }

}
//ques 2
TEST(sortArray, sort) { 
     int sort_arr[] = {6, 3, 1, 2, 7, 5, 9, 4};
    char sort_a[]={1,3,5,7,9,2,4,6};
    int *sort_arr1=sortArray(sort_arr,8);

    for(int i=0; i<8; i++){
        ASSERT_EQ(sort_a[i], sort_arr1[i]);
    }
    
     int arr[] = {7, 42, 27, 2, 12, 55, 9, 50, 8, 15};
    char a[]={7,9,15,27,55,2,8,12,42,50};
    int *arr1=sortArray(arr,10);

    for(int i=0; i<10; i++){
        ASSERT_EQ(a[i], arr1[i]);
    }

}
//ques 3
TEST(sumArray, sum) { 
	int arr[5][6];
	int *ptr[5];
	for (int i = 0; i < 5; i++) {
	      ptr[i] = arr[i];
	      for(int j=0; j<6; j++) {
	      	   ptr[i][j]=i+j;
	      } 
	 }	  
    int a[5]={15,21,27,33,39};
    int *arr1=sumArray(ptr);

    for(int i=0; i<5; i++){
        ASSERT_EQ(a[i], arr1[i]);
    }

}
//ques 4
TEST(removeDuplicates, remove) { 
    int arr[] = {2,4,4,5,6,7,7,7};
    int a[]={2,4,5,6,7};
    int *arr1=removeDuplicates(arr,8);

    for(int i=0; i<5; i++){
        ASSERT_EQ(a[i], arr1[i]);
    }

    int arr2[] = {1,2,2,3,4,4,4,5,5};
    int a1[]={1,2,3,4,5};
    int *arr3=removeDuplicates(arr2,9);

    for(int i=0; i<5; i++){
        ASSERT_EQ(a1[i], arr3[i]);
    }
}

//ques 5
TEST(rotateArray, rotate) { 
    int arr[] = {1,2,3,4,5,6};
    int a[]={2,3,1,5,6,4};
    int *arr1=rotateArray(arr,6,2,2);

    for(int i=0; i<5; i++){
        ASSERT_EQ(a[i], arr1[i]);
    }

    int arr2[] = {1,4,3,11,7,9,5,10,12,6,2,8};
    int a1[]={4,3,11,1,9,5,10,7,6,2,8,12};
    int *arr3=rotateArray(arr2,12,3,3);

    for(int i=0; i<12; i++){
        ASSERT_EQ(a1[i], arr3[i]);
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
