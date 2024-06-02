/*
 * Faculty.h
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */

#ifndef FACULTY_H_
#define FACULTY_H_
#include<iostream>
#include"Employee.h"
using namespace std;
class Faculty :public Employee{
protected :
	char designation[10];
	char depart[10];
public:
	Faculty(int no,float g,float rt,float md,float net,string na,string ad,string des,string dept);
	virtual void calcSalary();
	virtual void display();
	//~Employee();
	virtual ~Faculty();
};

#endif /* FACULTY_H_ */
