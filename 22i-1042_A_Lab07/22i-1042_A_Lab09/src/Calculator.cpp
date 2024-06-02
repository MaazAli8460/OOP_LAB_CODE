/*
 * Calculator.cpp
 *
 *  Created on: Mar 28, 2023
 *      Author: maaz
 */

#include "Calculator.h"
#include<iostream>
using namespace std;
Calculator::Calculator() {
	operand1=0;
	operand2=0;
	operand3=0;

};
Calculator::Calculator(int n)
{
	operand1=n;
	operand2=n;
	operand3=n;
};
Calculator::	Calculator(int n1,int n2)
{
	operand1=n1;
	operand2=n2;
	operand3=0;
};
Calculator::	Calculator(int n1,int n2,int n3)
{
		operand1=n1;
		operand2=n2;
		operand3=n3;
};

int Calculator::getOperand1() const {
	return operand1;
}

void Calculator::setOperand1(int operand1) {
	this->operand1 = operand1;
}

int Calculator::getOperand2() const {
	return operand2;
}

void Calculator::setOperand2(int operand2) {
	this->operand2 = operand2;
}

int Calculator::getOperand3() const {
	return operand3;
}

void Calculator::setOperand3(int operand3) {
	this->operand3 = operand3;
}
int Calculator::Add_two ()
{
	return operand1+operand2;
}
int Calculator::Add_three()
{
	return operand1+operand2+operand3;
}
Calculator::~Calculator() {
	cout<<"\ndestructor called.";
	// TODO Auto-generated destructor stub
}



