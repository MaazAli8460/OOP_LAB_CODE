/*
 * Circle.cpp
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */

#include "Circle.h"

Circle::Circle(float r, string s):Shape(s) {
	radius=r;
	// TODO Auto-generated constructor stub

}
void Circle::area()
{
	float area=3.14*(radius*radius);
	cout<<"\nArea of circle="<<area;
}
//Circle::~Circle()
//{

//}



