/*
 * Rectangle.cpp
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */

#include "Rectangle.h"

Rectangle::Rectangle(float h,float w, string s ):Shape(s) {
	height=h;
	width=w;
	// TODO Auto-generated constructor stub

}
void Rectangle::area()
{
float area=height*width;
cout<<"\nArea of Rectangle="<<area;

}
//Rectangle:: ~Rectangle(){

//}


