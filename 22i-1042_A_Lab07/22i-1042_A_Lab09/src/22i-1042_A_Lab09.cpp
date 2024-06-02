//============================================================================
// Name        : 22i-1042_A_Lab09.cpp
// Author      : Maaz Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>
#include"Employee.h"
#include "Calculator.h"
using namespace std;

int* fill2DArray (Calculator* &arr, int size,int *sum);
int* fill3DArray (Calculator* &arr2, int size,int *sum);

int main() {
	srand(time(0));
	cout<<"\n________________________Q1___________________________";
	Employee e1("Maaz ali","permanent",200);
	cout<<"\nEmployee count in 1st object:"<<e1.getNoEmployee();
	Employee e2("Sher khan","hourly",10);
	cout<<"\nEmployee count in 2nd object:"<<e1.getNoEmployee();

	e1.display();
	e2.display();
	cout<<"\n________________________Q2___________________________";

	int *d2;
	int *d3;
	Calculator* arr;
	Calculator* arr2;
	int size=5;
	arr=new Calculator[5];
	int *s1=new int [5];
	int *s2=new int[5];
	d2=fill2DArray (arr,size,s1);

	d3=fill2DArray (arr2,size,s2);
	cout<<"\nFor 2d:\n";
	for(int i=0;i<size;i++)
	{
		cout<<endl;
		cout<<" operand 1:"<<arr[i].getOperand1();
		cout<<"\t operand 2:"<<arr[i].getOperand2();
		cout<<"\tSum=:"<<d2[i];
	}
	return 0;
}
int* fill2DArray (Calculator* &arr, int size,int *sum)
{
	for(int i=0;i<size;i++)
	{
	int val=rand()%10000;
	int val1=val/10;

	arr[i].setOperand1(val);
	arr[i].setOperand2(val1);
	sum[i]=arr[i].Add_two ();
	}
	return sum;
}
int* fill3DArray (Calculator* &arr2, int size,int *sum)
{
	for(int i=0;i<size;i++)
	{
	int val=rand()%10000;
	int val1=val/10;

	int val2=val1/10;
	arr2[i].setOperand1(val);
	arr2[i].setOperand2(val1);
	arr2[i].setOperand2(val2);
	sum[i]=arr2[i].Add_three ();
	}
return sum;
}
