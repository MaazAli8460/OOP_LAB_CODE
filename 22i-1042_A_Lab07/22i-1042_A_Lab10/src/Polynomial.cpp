/*
 * Polynomial.cpp
 *
 *  Created on: Apr 4, 2023
 *      Author: maaz
 */

#include "Polynomial.h"
#include<iostream>
using namespace std;
Polynomial::Polynomial()
{
				x2=0;
				x=0;
				c=0;

}

Polynomial::~Polynomial() {
	// TODO Auto-generated destructor stub
}

Polynomial::Polynomial(const Polynomial &other)
{
	x2=other.x2;
	x=other.x;
	c=other.c;


};
Polynomial ::Polynomial(int a,int b,int c1)
		{
			x2=a;
			x=b;
			c=c1;

		}
const Polynomial Polynomial ::operator=(const Polynomial &obj)
{
		x2=obj.x2;
		x=obj.x;
		c=obj.c;
		return *this;
}
bool Polynomial ::operator==(const Polynomial &right)
	{
		if(x2==right.x2 && x==right.x && c==right.c)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
Polynomial Polynomial ::operator+(const Polynomial &obj)
{
	Polynomial temp;
	temp.x2=x2+obj.x2;
	temp.x=x+obj.x;
	temp.c=c+obj.c;
	return temp;
}
Polynomial Polynomial ::operator-(const Polynomial &obj)
{
	Polynomial temp;
		temp.x2=x2-obj.x2;
		temp.x=x-obj.x;
		temp.c=c-obj.c;
		return temp;
}
Polynomial Polynomial ::operator*(int d)
{
	Polynomial temp;
		temp.x2=x2*d;
		temp.x=x*d;
		temp.c=c*d;
		return temp;
}
int Polynomial::getC() const {
		return c;
	}

	void Polynomial::setC(int c) {
		this->c = c;
	}

	int Polynomial::getX() const {
		return x;
	}

	void Polynomial::setX(int x) {
		this->x = x;
	}

	int Polynomial::getX2() const {
		return x2;
	}

	void Polynomial::setX2(int x2) {
		this->x2 = x2;
	}


	ostream& operator<< (ostream &os,Polynomial& right)//Overload << operator to display dollars and cents in any money object.
	{
		return os<<"\n("<<right.getX2()<<"x^2(+)"<<right.getX()<<"x (+) "<<right.getC()<<")";
	}
	istream& operator>> (istream & in,Polynomial& right)
	{
		int x=0;
		in>>x;
		right.setX2(x);
		in>>x;
		right.setX(x);
		in>>x;
		right.setC(x);
	}
















