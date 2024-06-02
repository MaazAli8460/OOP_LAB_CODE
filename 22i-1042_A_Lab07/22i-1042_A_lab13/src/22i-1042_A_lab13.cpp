//============================================================================
// Name        : 22i-1042_A_lab13.cpp
// Author      : Maaz Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Shape.h"
#include"Rectangle.h"
//#include"Rectangle.cpp"
#include"Triangle.h"
//#include"Triangle.cpp"
#include"Circle.h"
#include"Person.h"
#include"Employee.h"
#include"Faculty.h"

//#include"Circle.cpp"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Rectangle r1(3,4,"rectangle");
	Triangle t1(2,4,"triangle");
	Circle c1(2,"circle");
	Shape *s[3];
	s[0]=&r1;
	s[1]=&t1;
	s[2]=&c1;

	for(int i=0;i<3;i++)
	{
		s[i]->area();
	}
	cout<<"\n-----------------Q2--------------";
	//int no,float g,float rt,float md,float net,string na,string ad
	Employee *e1=new Faculty(2,3022.3,45,5,0,"maaz","xyz","OOP","computing");
	e1->calcSalary();
	e1->display();


	return 0;
}
