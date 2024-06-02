/*
 * Employee.h
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include<iostream>
#include"Person.h"
using namespace std;

class Employee:public Person{
protected:
	int emp_no;
	float gross;
	float rent;
	float medical;
	float net_pay;
public:
	Employee();
	Employee(int no,float g,float rt,float md,float net,string na,string ad);
//	{
//		emp_no=no;
//		gross=g;
//		rent=rt;
//		medical=md;
//		net_pay=net;
//	}
	virtual void calcSalary();
	virtual void display();
	virtual ~Employee();
};

#endif /* EMPLOYEE_H_ */
