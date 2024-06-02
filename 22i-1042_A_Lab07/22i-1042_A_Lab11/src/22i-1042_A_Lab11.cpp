//============================================================================
// Name        : 22i-1042_A_Lab11.cpp
// Author      : Maaz Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Point.h"
#include"Line.h"
using namespace std;

int main() {
	cout << "------------------------Q1-------------------------" << endl;// prints !!!Hello World!!!
	int x1=1, y1=5, x2=10, y2=15;
	Line l1(x1,y1,x2,y2);
	Point p1(l1.findMidPoint());
	float sl,le;
	sl=l1.findSlope();
	le=l1.findLength();
	cout<<"\nLength="<<le;
	cout<<"\nslope="<<sl;
	cout<<"\nMidpoint("<<p1.getX_Coordinate()<<","<<p1.getY_Coordinate()<<")";

	return 0;
}
