/*
 * Circle.h
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
#include<iostream>
#include"Shape.h"
using namespace std;
class Circle:public Shape {
private:
	float radius;
public:
	Circle(float r,string s);
	void area();
	//~Circle();

};

#endif /* CIRCLE_H_ */
