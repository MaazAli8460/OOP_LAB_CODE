/*
 * Circle.cpp
 *
 *  Created on: Mar 21, 2023
 *      Author: maaz
 */

#include "Circle.h"
int Circle::CountOfCircles=0;
Circle::Circle()
{

	CountOfCircles++;
	radius=0;

};
Circle::Circle(int r)
{
	CountOfCircles++;
	radius=r;

};
int Circle::getCountOfCircles(){
	return CountOfCircles;
}

int Circle::getRadius(){
	return radius;
}

void Circle::setRadius(int r) {
	this->radius = r;
}

double Circle::getArea()
{
	return (double)3.14*radius*radius;
}
double Circle:: getPerimeter()
{
	return (double)3.14*2*radius;
}

Circle::~Circle() // TODO Auto-generated destructor stub
{
	CountOfCircles--;
};

