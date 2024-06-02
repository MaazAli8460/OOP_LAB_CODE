/*
 * Shape.h
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include<iostream>
using namespace std;
class Shape {
protected:
	string type;
private:

public:
	Shape(string t=""){
		type=t;
	}
	virtual void area()=0;
//	virtual ~Shape();

};

#endif /* SHAPE_H_ */
