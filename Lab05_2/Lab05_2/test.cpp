#include "source.cpp"
#include <gtest/gtest.h>



TEST(SumOFDigits, case1) {
	int* result=sum_of_digits(100,999,45);
	int* correct_answer=new int[45]{110,121,132,143,154,165,176,
	187,198,220,231,242,253,264,275,286,297,330,341,352,363,374,385,396,440,451,462,
	473,484,495,550,561,572,583,594,660,671,682,693,770,781,792,880,891,990};
	for(int i=0;i<45;i++)
	{
	ASSERT_EQ(result[i], correct_answer[i]);
	}

}
TEST(Reverse, case1) {
	string s="cat is running";
        ASSERT_EQ("running is cat", reverse_string(s));

}
TEST(Reverse, case2) {
	string s="This is a car";
        ASSERT_EQ("car a is This", reverse_string(s));

}
TEST(SumofSequence, case1) {
	int* arr=new int[5]{1,2,3,4,5};
        int** a=sum_of_sequence(arr,5);
        ASSERT_EQ(a[0][0], 3);
        ASSERT_EQ(a[0][1], 5);
        ASSERT_EQ(a[0][2], 7);
        ASSERT_EQ(a[0][3], 9);
        
        ASSERT_EQ(a[1][0], 8);
        ASSERT_EQ(a[1][1], 12);
        ASSERT_EQ(a[1][2], 16);
        
        ASSERT_EQ(a[2][0], 20);
        ASSERT_EQ(a[2][1], 28);
        
        ASSERT_EQ(a[3][0], 48);

}

TEST(SumofSequence, case2) {
	int* arr=new int[6]{1,2,1,2,1,2};
        int** a=sum_of_sequence(arr,6);
        ASSERT_EQ(a[0][0], 3);
        ASSERT_EQ(a[0][1], 3);
        ASSERT_EQ(a[0][2], 3);
        ASSERT_EQ(a[0][3], 3);
        ASSERT_EQ(a[0][4], 3);
        
        ASSERT_EQ(a[1][0], 6);
        ASSERT_EQ(a[1][1], 6);
        ASSERT_EQ(a[1][2], 6);
        ASSERT_EQ(a[1][3], 6);
        
        ASSERT_EQ(a[2][0], 12);
        ASSERT_EQ(a[2][1], 12);
        ASSERT_EQ(a[2][2], 12);
        
        ASSERT_EQ(a[3][0], 24);
        ASSERT_EQ(a[3][1], 24);
        
        ASSERT_EQ(a[4][0], 48);

}


TEST(Pattern, case1) {
	diamond_pattern(7);
	diamond_pattern(9);
	diamond_pattern(11);
	diamond_pattern(13);

}

int main(int argc, char ** argv) {
        testing::InitGoogleTest( & argc, argv);
        return RUN_ALL_TESTS();
}
