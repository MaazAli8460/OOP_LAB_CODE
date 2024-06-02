/*
 * Line.h
 *
 *  Created on: Apr 18, 2023
 *      Author: maaz
 */

#ifndef LINE_H_
#define LINE_H_
#include"Point.h"
#include<cmath>
class Line {
private:
	Point Point_1;
	Point Point_2;
public:
	Line();
	Line(int x1, int y1, int x2, int y2);
	~Line();
	Line(const Line &other);
	const Point& getPoint1();

	const Point& getPoint2();

	float findSlope();
	float findLength();
	Point& findMidPoint();
};

#endif /* LINE_H_ */
