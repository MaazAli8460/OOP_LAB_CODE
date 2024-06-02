/*
 * Employee.cpp
 *
 *  Created on: Mar 28, 2023
 *      Author: maaz
 */

#include "Employee.h"
int Employee:: no_employee=0;
Employee::Employee() {
	// TODO Auto-generated constructor stub
	name=" ";
	no_employee++;
	empID=no_employee;
	empType=" ";
	hours_worked=0;

}
Employee::Employee(string na,string type,int hw) {
	// TODO Auto-generated constructor stub
	name=na;
	no_employee++;
	empID=no_employee;

	empType=type;
	hours_worked=hw;

}

Employee::~Employee() {
	// TODO Auto-generated destructor stub

	cout<<"\nDestructor Called:"<<no_employee;
	no_employee--;
}

int Employee::getEmpId() const {
	return empID;
}

void Employee::setEmpId() {
	empID = no_employee;
}

const string& Employee::getEmpType() const {
	return empType;
}

void Employee::setEmpType(const string &empType) {
	this->empType = empType;
}

int Employee::getHoursWorked() const {
	return hours_worked;
}

void Employee::setHoursWorked(int hoursWorked) {
	hours_worked = hoursWorked;
}

const string& Employee::getName() const {
	return name;
}

void Employee::setName(const string &name) {
	this->name = name;
}

int Employee::getNoEmployee(){
	return no_employee;
}
void Employee::display()
{
	cout<<"\nEMP ID\t"<<empID;
	cout<<"\nEMP Name\t"<<name;
	cout<<"\nEMP Type\t"<<empType;
	cout<<"\nEMP hours\t"<<hours_worked;
	calculate_the_income();

}
void Employee::calculate_the_income()
{
	if(empType=="hourly")
	{
		cout<<"\nMonthly pay of hourly emp   :"<<hours_worked*150;
	}
	else
	{
		cout<<"\nMonthly pay of parmanent emp:"<<240*150;
	}
}
