/*
 * Triangle.h
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include<iostream>
#include"Shape.h"
using namespace std;
class Triangle:public Shape {
private:
	float base,height;
public:
	Triangle(float b,float h,string s);
	void area();
	//~Triangle();


};

#endif /* TRIANGLE_H_ */
