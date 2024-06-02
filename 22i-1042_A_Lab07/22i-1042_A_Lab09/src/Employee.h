/*
 * Employee.h
 *
 *  Created on: Mar 28, 2023
 *      Author: maaz
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include"string.h"
#include<iostream>
using namespace std;
class Employee {
private:

	string name;
	static int no_employee;
	int empID;
	string empType;
	int hours_worked;
public:
	Employee();
	Employee(string na,string type,int hw) ;
	~Employee();

	int getEmpId() const ;

	void setEmpId();
	const string& getEmpType() const ;

	void setEmpType(const string &empType) ;

	int getHoursWorked() const ;

	void setHoursWorked(int hoursWorked) ;
	const string& getName() const ;


	void setName(const string &name) ;

	static int getNoEmployee();
	void calculate_the_income();
	void display();


};

#endif /* EMPLOYEE_H_ */
