//============================================================================
// Name        : 22i-1042_lab06_A.cpp
// Author      : MAAZ ALI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;

struct Coordinates
{
	int x;
	int y;

	float calculateDistance(Coordinates &p2)
	{
		float d;
		d=static_cast<float>(pow((pow((p2.x-x),2)+pow((p2.y-y),2)),1.0/2));
		return d;
	}

};

//int main() {
//	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
//	Coordinates p1,p2;
//	p1.x=1;
//	p1.y=2;
//	p2.x=5;
//	p2.y=6;
//
//	float b;
//
//	b=p1.calculateDistance(p2);
//
//	cout<<"\nAns="<<b;
//
//
//
//	return 0;
//}

struct CustomTime {
    int hours;
    int mins;
    int secs;
};
CustomTime secsToTime (int seconds);
CustomTime AddTimes(int seconds1, int seconds2);

//int main()
//{
//	int sec1,sec2;
//	cout<<"\nEnter the first time:";
//
//	cin>>sec1;
//	cout<<"\nEnter the second time:";
//	cin>>sec2;
//
//	//CustomTime p1,p2;
//	AddTimes(sec1, sec2);
//
//
//	return 0;
//}
CustomTime secsToTime (int seconds){
	CustomTime p1;
	int hours,min,temp;
	min=seconds/60;
	temp=seconds%60;
	int sec=temp;
	hours=min/60;
	temp=min%60;
	min=temp;

	p1.hours=hours;
	cout<<endl<<hours;
	p1.mins=min;
	cout<<endl<<min;
	p1.secs=sec;
	cout<<endl<<sec;

	return p1;

}


CustomTime AddTimes(int seconds1, int seconds2)
{
	CustomTime p1,p2,p3;
	p1=secsToTime(seconds1);
	p2=secsToTime(seconds2);
	p3.hours=p1.hours+p2.hours;
	p3.mins=p1.mins+p2.mins;
	p3.secs=p1.secs+p2.secs;

	return p3;



}


struct StudentCard{
	char campusCode;
	int batch;
	int id;

};
StudentCard * getCard(StudentCard *std_crd, int s);
int* getID(StudentCard *std_crd, int s);
//int main()
//{
//	int s;
//	cout<<"\nEnter the number of students:";
//	cin>>s;
//	int *res;
//	StudentCard *p=new StudentCard[s];
//	res=getID(p,s);
//	p=getCard(p,s);
//	return 0;
//}
int* getID(StudentCard *std_crd, int s)
{
	int res=new int[s];

	for(int i=0;i<s;i++)
	{
		int temp;
		temp=std_crd->id;
		if(temp==22)
		{
			res[i]=temp;
		}

	}
	return res;
}
StudentCard * getCard(StudentCard *std_crd, int s)
{
	int temp;
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(std_crd[i].id>std_crd[j].id)
			{
				temp=std_crd[i].id;
				std_crd[i].id=std_crd[j].id;
				std_crd[j].id=temp;
			}
		}
	}
	return std_crd;
}
