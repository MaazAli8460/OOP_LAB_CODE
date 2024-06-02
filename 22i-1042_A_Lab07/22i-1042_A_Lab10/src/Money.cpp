/*
 * Money.cpp
 *
 *  Created on: Apr 4, 2023
 *      Author: maaz
 */

#include "Money.h"
#include<iostream>
using namespace std;

Money::Money() {
	dollar=0;
	cent=0;
};

Money::~Money() {
	// TODO Auto-generated destructor stub
}
Money::Money(int m1,int c1)
{
	dollar=m1;
	cent=c1;
};
Money  Money ::operator+(const Money &obj)
{
	Money sum;
	sum.dollar=dollar+obj.dollar;
	sum.cent=cent+obj.cent;
	if(sum.cent>=100)
	{
		sum.cent= sum.cent-100;
		sum.dollar+=1;
	}
	return sum;
}
	Money Money ::operator-(const Money &obj)
	{
		Money sum;
		sum.dollar=dollar-obj.dollar;
		sum.cent=cent-obj.cent;
		if(sum.cent<0)
		{
			sum.cent= sum.cent+100;
			sum.dollar-=1;
		}
		if(sum.dollar<0)
		{
			sum.dollar*=-1;
		}
		return sum;
	}
	const Money Money ::operator=(const Money &obj)
	{
		cent=obj.cent;
		dollar=obj.dollar;

		return *this;
	}
	Money& Money ::operator++ ()//overload pre increment operator.
	{
		Money test(0,1);
		*this=*this+test;
		return *this;
	}
	Money Money ::operator++ (int x)//Overload post increment operator.
	{
		Money test(0,1);
		Money temp;
		temp=*this;
		*this=*this+test;

		return temp;
	}
	Money& Money ::operator-- ()//Overload pre decrement operator.
	{
		Money test(0,1);
		*this=*this-test;
		return *this;
	}
	Money Money ::operator-- (int x)//Overload post decrement operator.
	{
		Money test(0,1);
		Money temp;
		temp=*this;
		*this=*this-test;
		return temp;
	}
	bool Money ::operator==(const Money &right)//Overload equals operator that checks whether the right object is equal to the current object or not.
	{
		if(cent==right.cent && dollar==right.dollar)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool Money ::operator!= (const Money& right)//Overload not equal operator that checks whether the right object is equal to the currentobject or not.
	{
		if(cent!=right.cent || dollar!=right.dollar)
			{
				return true;
			}
		else
			{
				return false;
			}
	}
	bool Money ::operator > (const Money& right)//Overload greater than operator that checks whether the left object is greater than thecurrent object or not.
	{
			if(dollar>right.dollar)
				{
					return true;
				}
			else
				{
					return false;
				}
	}
	ostream& operator<< (ostream &os,Money& right)//Overload << operator to display dollars and cents in any money object.
	{
		return os<<"\n(dollar:"<<right.dollar<<", cent:"<<right.cent<<")";
	}


	istream& operator>> (istream & in,Money& right)
	{
		in>>right.dollar;
		in>>right.cent;
	}







