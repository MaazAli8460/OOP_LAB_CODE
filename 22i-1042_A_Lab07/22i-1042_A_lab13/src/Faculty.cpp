/*
 * Faculty.cpp
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */

#include "Faculty.h"

Faculty::Faculty(int no,float g,float rt,float md,float net,string na,string ad,string des,string dept):Employee(no, g,rt, md, net, na, ad)
{
	// TODO Auto-generated constructor stub
	int i=0;
			while(des[i]!='\0')
			{
				designation[i]=des[i];
				i++;
			}
			i=0;
			while(dept[i]!='\0')
			{
				depart[i]=dept[i];
				i++;
			}
}
void Faculty:: calcSalary()
{
	net_pay=gross-((rent/100)*gross-(5/100)*gross);
	cout<<"\nNet pay calc from Faculty::"<<net_pay;
}
void Faculty::display()
{
	cout<<"\nDesignation:"<<designation;
	cout<<"\nDepartment :"<<depart;
	Employee::display();
}
Faculty::~Faculty() {
	// TODO Auto-generated destructor stub
}

