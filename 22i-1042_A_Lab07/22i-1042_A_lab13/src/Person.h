/*
 * Person.h
 *
 *  Created on: May 9, 2023
 *      Author: maaz
 */

#ifndef PERSON_H_
#define PERSON_H_
#include<iostream>
using namespace std;
class Person {
protected:
	char name[10];
	char address[10];
public:
	Person(){

	}
	Person(string na, string ad)
	{
		int i=0;
		while(na[i]!='\0')
		{
			name[i]=na[i];
			i++;
		}
		i=0;
		while(ad[i]!='\0')
		{
			address[i]=ad[i];
			i++;
		}
	}
	~Person()
	{

	}
};

#endif /* PERSON_H_ */
