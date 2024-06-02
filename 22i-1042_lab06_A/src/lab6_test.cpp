#include "Q1.cpp"
#include <gtest/gtest.h>

//question 1
TEST(Coordinates, case1) {
        Coordinates c1={3,4};
   	Coordinates c2={7,7};
  	ASSERT_EQ(5, c1.calculateDistance(c2));
}
TEST(Coordinates, case2) {
        Coordinates c1={3,4};
   	Coordinates c2={4,3};
  	ASSERT_FLOAT_EQ(1.4142135, c1.calculateDistance(c2));
}
//question 3
TEST(CustomTime, secsToTime) {
      CustomTime t1,t2;
      t1=secsToTime(7200);
      ASSERT_EQ(2, t1.hours);
      ASSERT_EQ(0, t1.mins);
      ASSERT_EQ(0, t1.secs);
      
      t1=secsToTime(9630);
      ASSERT_EQ(2, t1.hours);
      ASSERT_EQ(40, t1.mins);
      ASSERT_EQ(30, t1.secs);
}
TEST(CustomTime, AddTimes) {
     CustomTime t1;
     t1=AddTimes(9630,7332);
     ASSERT_EQ(4, t1.hours);
     ASSERT_EQ(42, t1.mins);
     ASSERT_EQ(42, t1.secs);
     
     t1=AddTimes(81895,46245);
     ASSERT_EQ(35, t1.hours);
     ASSERT_EQ(35, t1.mins);
     ASSERT_EQ(40, t1.secs);
     
     
}

//question 3
TEST(StudentCard, getID) {
        StudentCard s1;
   	StudentCard *std_crd=new StudentCard[5];
   	char cmps_code[5]={'I','K','F','L','I'};
   	int batch[5]={2022,2019,2021,2022,2022};
   	int id[5]={1234,5242,0324,9824,1846};
   	int arr1[]={1234,9824,1846};
   	for(int i=0; i<5; i++){
   		std_crd[i].campusCode=cmps_code[i];
   		std_crd[i].batch=batch[i];
   		std_crd[i].id=id[i];
   	}
   	int *arr=getID(std_crd,5);
   	for (int i = 0; i < 3; i++) {
                ASSERT_EQ(arr[i], arr1[i]);
        }
        
}
TEST(StudentCard, getCard) {
        StudentCard s1;
   	StudentCard *std_crd=new StudentCard[5];
   	char cmps_code[5]={'I','K','F','L','I'};
   	int batch[5]={2022,2019,2021,2022,2022};
   	int id[5]={1234,5242,0324,9824,1846};
   	for(int i=0; i<5; i++){
   		std_crd[i].campusCode=cmps_code[i];
   		std_crd[i].batch=batch[i];
   		std_crd[i].id=id[i];
   	}
   	char cmps_code1[5]={'K','F','I','L','I'};
   	int batch1[5]={2019,2021,2022,2022,2022};
   	int id1[5]={5242,0324,1234,9824,1846};
   	StudentCard *std_crd1=getCard(std_crd,5);
   	for (int i = 0; i < 5; i++) {
               ASSERT_EQ(std_crd1[i].campusCode, cmps_code1[i]);
   	       ASSERT_EQ(std_crd1[i].batch, batch1[i]);
   	       ASSERT_EQ(std_crd1[i].id, id1[i]);
        }
        
}

//question 4/

TEST(SemesterRegistration, GetCreditHoursCount) {
     SemesterRegistration sem_reg;
     sem_reg.semesterCode="Spring 2023";
     string courseCode[]={"CL1004","EL2003","CL1001","CL2002","EL2020"};
     string courseTitle[]={"OOP","COAL","PF","CNET","DLD"};
     int CreditHour[]={1,3,3,4,1};
     char Section[]={'A','B','C','D','E'};
     for(int i=0; i<5; i++){
     	sem_reg.course_reg[i].courseCode=courseCode[i];
        sem_reg.course_reg[i].courseTitle=courseTitle[i];
        sem_reg.course_reg[i].CreditHour=CreditHour[i];
        sem_reg.course_reg[i].Section=Section[i];	
     }
     string *str=sem_reg.GetcourseCodes();
     for (int i = 0; i < 5; i++) {
                ASSERT_EQ(courseCode[i], str[i]);
     }
}

TEST(SemesterRegistration, FindCourseInSemesterRegistration) {
     SemesterRegistration sem_reg;
     sem_reg.semesterCode="Spring 2023";
     string courseCode[]={"CL1004","EL2003","CL1001","CL2002","EL2020"};
     string courseTitle[]={"OOP","COAL","PF","CNET","DLD"};
     int CreditHour[]={1,3,3,4,1};
     char Section[]={'A','B','C','D','E'};
     for(int i=0; i<5; i++){
     	sem_reg.course_reg[i].courseCode=courseCode[i];
        sem_reg.course_reg[i].courseTitle=courseTitle[i];
        sem_reg.course_reg[i].CreditHour=CreditHour[i];
        sem_reg.course_reg[i].Section=Section[i];	
     }
     ASSERT_EQ(1, sem_reg.FindCourseInSemesterRegistration("OOP"));
     ASSERT_EQ(0, sem_reg.FindCourseInSemesterRegistration("ALGO"));
}
int main(int argc, char ** argv) {
        testing::InitGoogleTest( & argc, argv);
        return RUN_ALL_TESTS();
}
