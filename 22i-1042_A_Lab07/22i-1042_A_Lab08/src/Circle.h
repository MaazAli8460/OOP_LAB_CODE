/*
 * Circle.h
 *
 *  Created on: Mar 21, 2023
 *      Author: maaz
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
private:
	int radius;
	static int CountOfCircles;
public:
	Circle();
	Circle(int r);
	~Circle();
	int getCountOfCircles();
	int getRadius();
	void setRadius(int r);
	double getArea();
	double getPerimeter();
	//countOfCircle in main
};

#endif /* CIRCLE_H_ */
