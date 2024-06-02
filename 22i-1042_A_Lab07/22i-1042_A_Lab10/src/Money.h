/*
 * Money.h
 *
 *  Created on: Apr 4, 2023
 *      Author: maaz
 */

#ifndef MONEY_H_
#define MONEY_H_
#include<iostream>
using namespace std;
class Money {


public:
	int dollar;
	int cent;
	Money();

	Money(int m1,int c1);
	Money operator+(const Money &obj);
	Money operator-(const Money &obj);
	const Money operator=(const Money &obj);
	Money& operator++ ();//overload pre increment operator.
	Money operator++ (int x);//Overload post increment operator.
	Money& operator-- ();//Overload pre decrement operator.
	Money operator-- (int x);//Overload post decrement operator.
	bool operator==(const Money &right);//Overload equals operator that checks whether the right object is equal to the current object or not.
	bool operator!= (const Money& right);//Overload not equal operator that checks whether the right object is equal to the currentobject or not.
	bool operator > (const Money& right);//Overload greater than operator that checks whether the left object is greater than thecurrent object or not.

	~Money();
};
ostream& operator<< (ostream &os,Money& right);//Overload << operator to display dollars and cents in any money object.
istream& operator>> (istream & in,Money& right);
#endif /* MONEY_H_ */
