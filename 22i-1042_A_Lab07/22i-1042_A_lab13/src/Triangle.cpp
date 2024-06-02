/*
 * Triangle.cpp
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */

#include "Triangle.h"

Triangle::Triangle(float b,float h,string s):Shape(s) {
	base=b;
	height=h;
	// TODO Auto-generated constructor stub

}
void Triangle::area()
{
	float area=1.0/2.0*(base*height);
	cout<<"\nArea of Triangle="<<area;
}
//Triangle:: ~Triangle()
//{
//
//}


