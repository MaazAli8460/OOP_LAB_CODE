/*
 * Calculator.h
 *
 *  Created on: Mar 28, 2023
 *      Author: maaz
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_

class Calculator {
private:
	int operand1;
	int operand2;
	int operand3;
public:
	Calculator();
	Calculator(int n);
	Calculator(int n1,int n2);
	Calculator(int n1,int n2,int n3);
	int Add_two ();
	int Add_three();
	~Calculator();
	int getOperand1() const;
	void setOperand1(int operand1);
	int getOperand2() const;
	void setOperand2(int operand2);
	int getOperand3() const;
	void setOperand3(int operand3);
};

#endif /* CALCULATOR_H_ */
