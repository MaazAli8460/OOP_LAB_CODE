/*
 * Rectangle.h
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include<iostream>
#include"Shape.h"
using namespace std;
class Rectangle:public Shape {
private:
	float height, width;
public:
	Rectangle(float h,float w, string s);
	void area();
	//~Rectangle();
};

#endif /* RECTANGLE_H_ */
