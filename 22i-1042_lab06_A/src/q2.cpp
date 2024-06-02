//#include <iostream>
//#include<cmath>
//#include<math.h>
//using namespace std;

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
