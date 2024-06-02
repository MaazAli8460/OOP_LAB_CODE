/*
 * Point.h
 *
 *  Created on: Apr 18, 2023
 *      Author: maaz
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
private:
	int X_Coordinate;
	int Y_Coordinate;
public:
	Point();
	Point(int , int);
	~Point();
	Point(const Point &other);
	int getX_Coordinate();
	int getY_Coordinate();
	void setXCoordinate(int xCoordinate);
	void setYCoordinate(int yCoordinate);
};

#endif /* POINT_H_ */
