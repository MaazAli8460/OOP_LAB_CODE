/*
 * Line.cpp
 *
 *  Created on: Apr 18, 2023
 *      Author: maaz
 */

#include "Line.h"

Line::Line():Point_1(1,5),Point_2(10,15){};
Line ::Line(int x1, int y1, int x2, int y2):Point_1(x1,y1),Point_2(x2,y2){};
Line::~Line() {
}

const Point& Line::getPoint1() {
	return Point_1;
}


const Point& Line::getPoint2() {
	return Point_2;
}


Line::Line(const Line &other):Point_1(other.Point_1),Point_2(other.Point_2){};
float Line::findSlope()
{
	float slope=0;
	slope= static_cast<float>(Point_2.getY_Coordinate() - Point_1.getY_Coordinate())/static_cast<float>(Point_2.getX_Coordinate() - Point_1.getX_Coordinate());
	return slope;
}
float Line::findLength()
{
	float length;
	length=sqrt(static_cast<float>(pow(Point_2.getY_Coordinate() - Point_1.getY_Coordinate(),2))+static_cast<float>(pow(Point_2.getX_Coordinate() - Point_1.getX_Coordinate(),2)));
	return length;
}

Point& Line:: findMidPoint()
{

	int x,y;
	y=Point_2.getY_Coordinate() + Point_1.getY_Coordinate();
	x=Point_2.getX_Coordinate() + Point_1.getX_Coordinate();

	Point *p1=new Point(x/2,y/2);
	return *p1;
}
