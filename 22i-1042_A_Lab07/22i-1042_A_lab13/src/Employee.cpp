/*
 * Employee.cpp
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */
//
#include "Employee.h"
//
Employee::Employee() {
	// TODO Auto-generated constructor stub

}
Employee::Employee(int no,float g,float rt,float md,float net,string na,string ad):Person(na,ad)
	{
		emp_no=no;
		gross=g;
		rent=rt;
		medical=md;
		net_pay=net;
	}
void Employee::calcSalary()
{
	net_pay=gross-((rent/100)*gross-(5/100)*gross);
	cout<<"\nNet pay calc from Employee"<<net_pay;
}
void Employee::display()
{
	cout<<"\nCall in Employee\n";
	cout<<"Name       :"<<name<<endl;
	cout<<"Address    :"<<address<<endl;
	cout<<"Employee no:"<<emp_no<<endl;
	cout<<"Gross      :"<<gross<<endl;
	cout<<"rent       :"<<rent<<endl;
	cout<<"Medical    :"<<medical<<endl;
	cout<<"NET PAY    :"<<net_pay<<endl;

}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

