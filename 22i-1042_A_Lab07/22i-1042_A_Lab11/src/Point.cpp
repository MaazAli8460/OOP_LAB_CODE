/*
 * Point.cpp
 *
 *  Created on: Apr 18, 2023
 *      Author: maaz
 */

#include "Point.h"

Point::Point():X_Coordinate(0),Y_Coordinate(0){};
Point::Point(int x, int y):X_Coordinate(x),Y_Coordinate(y){};
Point::~Point() {}

int Point::getX_Coordinate() {
	return X_Coordinate;
}


int Point::getY_Coordinate(){
	return Y_Coordinate;
}



Point::Point(const Point &other) :X_Coordinate(other.X_Coordinate), Y_Coordinate(other.Y_Coordinate){

}
void Point::setXCoordinate(int xCoordinate) {
	X_Coordinate = xCoordinate;
}

void Point::setYCoordinate(int yCoordinate) {
	Y_Coordinate = yCoordinate;
}
