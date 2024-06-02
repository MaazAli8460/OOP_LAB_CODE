#include "Q1.cpp"
#include <gtest/gtest.h>

// ques 1
TEST(calculateSum, sum)
{
    int arr[4][4] = {{4, 2, 7, 9}, {6, 1, 0, 3}, {5, 11, 6, 5}, {0, 2, 3, 5}};
    int **ptr = new int *[4];
    for (int i = 0; i < 4; ++i)
    {
        ptr[i] = new int[4];
    }
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            ptr[i][j] = arr[i][j];
        }
    }
    int sum = calculateSum(ptr, 4, 4);
    ASSERT_EQ(51, sum);

    int arr2[4][5] = {{11, 13, 4, 7, 2}, {6, 12, 5, 5, 3}, {2, 4, 6, 3, 9}, {7, 9, 8, 0, 2}};
    int **ptr2 = new int *[4];
    for (int i = 0; i < 4; ++i)
    {
        ptr2[i] = new int[5];
    }
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            ptr2[i][j] = arr2[i][j];
        }
    }
    int sum1 = calculateSum(ptr2, 4, 5);
    ASSERT_EQ(83, sum1);
}
// ques2
//  ques 1
TEST(interchangeCols, changeCols)
{
    int arr[3][3] = {{8, 8, 2},
                     {7, 0, 5},
                     {6, 5, 9}};
    int **ptr = new int *[3];
    for (int i = 0; i < 3; ++i)
    {
        ptr[i] = new int[3];
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            ptr[i][j] = arr[i][j];
        }
    }
    int ans[3][3] = {{2, 8, 8},
                     {5, 0, 7},
                     {9, 5, 6}};
    int **changed_arr = interchangeCols(ptr, 3, 3, 1, 3);
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            ASSERT_EQ(ans[i][j], changed_arr[i][j]);
        }
    }
    int arr2[3][4] = {{8, 8, 2, 3},
                      {7, 7, 4, 6},
                      {2, 4, 9, 8}};
    int **ptr2 = new int *[3];
    for (int i = 0; i < 3; ++i)
    {
        ptr2[i] = new int[4];
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            ptr2[i][j] = arr2[i][j];
        }
    }
    int ans2[3][4] = {{8, 3, 2, 8},
                      {7, 6, 4, 7},
                      {2, 8, 9, 4}};
    int **changed_arr2 = interchangeCols(ptr2, 3, 4, 2, 4);

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            ASSERT_EQ(ans2[i][j], changed_arr2[i][j]);
        }
    }
}

TEST(MatMult, matMul)
{
    int **ptr = new int *[3];
    for (int i = 0; i < 3; ++i)
    {
        ptr[i] = new int[3]{i + 1, i + 2, i + 2};
    }
    int **ptr1 = new int *[3];
    for (int i = 0; i < 3; ++i)
    {
        ptr1[i] = new int[3]{i + 1, i + 2, i + 2};
    }
    int mul[3][3] = {{11, 16, 16}, {17, 25, 25}, {23, 34, 34}};
    int **mulPtr = MatMul(ptr, ptr1, 3, 3, 3, 3);

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            ASSERT_EQ(mul[i][j], mulPtr[i][j]);
        }
    }
    int **ptr2 = new int *[4];
    for (int i = 0; i < 4; ++i)
    {
        ptr2[i] = new int[3];
    }
    int **ptr3 = new int *[3];
    for (int i = 0; i < 3; ++i)
    {
        ptr3[i] = new int[1];
    }
    int mat1[4][3] = {{1, 4, 7}, {3, 4, 4}, {7, 8, 4}, {10, 1, 2}};
    int mat2[3][1] = {2, 6, 9};
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            ptr2[i][j] = mat1[i][j];
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 1; ++j)
        {
            ptr3[i][j] = mat2[i][j];
        }
    }
    int **mulPtr2 = MatMul(ptr2, ptr3, 4, 3, 3, 1);
    int mul2[][1] = {89, 66, 98, 44};
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 1; ++j)
        {
            ASSERT_EQ(mul2[i][j], mulPtr2[i][j]);
        }
    }
}
TEST(create3D, 3D)
{
    int pageCount=4;
    int rowCount = 2;
    int colCount = 3;
    int ***ptr = create3D(pageCount, rowCount, colCount);
    int ans[4][2][3] = {{{0, 1, 2}, {1, 2, 3}},
                        {{1, 2, 3}, {2, 3, 4}},
                        {{2, 3, 4}, {3, 4, 5}},
                        {{3, 4, 5}, {4, 5, 6}}};
    for (int i = 0; i < pageCount; ++i)
    {
        for (int j = 0; j < rowCount; ++j)
        {
            for (int k = 0; k < colCount; ++k)
            {
                ASSERT_EQ(ans[i][j][k], ptr[i][j][k]);
            }
        }
    }
}
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

