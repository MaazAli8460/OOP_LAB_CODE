#include <iostream>
#include<cmath>
#include<math.h>
#include<string.h>
using namespace std;

struct CourseRegistration
{
	string courseCode;
	string courseTitle;
	int	CreditHours;
	char	Section;
};
struct SemesterRegistration
{
	string semesterCode;
	CourseRegistration *course_reg =new CourseRegistration[5];

	string* GetCourseCodes ()
	{
		string *p=new string[5];
		for(int i=0;i<5;i++)
		{
			p[i]=course_reg[i].courseCode;
		}
		return p;
	}
	bool FindCourseInSemesterRegistration(string courseTitle)
	{
		bool flag=0;
		for(int i=0;i<5;i++)
		{
			if(course_reg[i].courseTitle==courseTitle)
			{
				return flag=1;
			}
			else
				flag=0;
		}
		return flag;
	}
};
