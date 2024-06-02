/*
 * Polynomial.h
 *
 *  Created on: Apr 4, 2023
 *      Author: maaz
 */

#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_
#include<iostream>
using namespace std;
class Polynomial {
private:
	int x2;
	int x;
	int c;
public:
	Polynomial();
	~Polynomial();
	Polynomial(const Polynomial &other);
	Polynomial(int a,int b,int c1);
	const Polynomial operator=(const Polynomial &obj);
	bool operator==(const Polynomial &right);
	Polynomial operator+(const Polynomial &obj);
	Polynomial operator-(const Polynomial &obj);
	Polynomial operator*(int d);
	int getC() const ;

	void setC(int c) ;

	int getX() const ;
	void setX(int x) ;
	int getX2() const ;

	void setX2(int x2) ;
};
ostream& operator<< (ostream &os,Polynomial& right);//Overload << operator to display dollars and cents in any money object.

istream& operator>> (istream & in,Polynomial& right);
#endif /* POLYNOMIAL_H_ */
