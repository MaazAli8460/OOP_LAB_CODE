//============================================================================
// Name        : 22i-1042_A_Lab10.cpp
// Author      : Maaz Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Money.h"
#include"Polynomial.h"
using namespace std;

int main() {
	cout<<"\n____________________Q1__________________";
	Money m1(12,95),m2(3,98);
	Money m3;
	m3=m1+m2;
	cout<<m3;
	Money m4;
	m4=m1-m2;
	cout<<m4;

	Money m5(2,10);
	Money m6;
	m6=m5++;
	cout<<"\nM6:";
	cout<<m6;
	cout<<"\nM5:";
	cout<<m5;
	bool flag;
	flag=m1!=m2;
	cout<<endl<<flag;
	flag=m1==m2;
	cout<<endl<<flag;
	flag=m1>m2;
	cout<<endl<<flag;

	cout<<"\n____________________Q2__________________";
	Polynomial p1(2,1,-1),p2(5,-7,3);
	cout<<"\np1:";
	cout<<p1;
	cout<<"\np2:";
		cout<<p2;
	Polynomial p3,p4,p5;
	p3=p1+p2;
	cout<<"\np3:";
			cout<<p3;
	p4=p1-p2;
	cout<<"\np4:";
			cout<<p4;
	p5=p1*2;
	cout<<"\np5:";
			cout<<p5;
	bool flag1;
	flag1=p1==p2;
	cout<<"\nfLAG:"<<flag1;
	cout<<"\nEnd\n";
	return 0;
}
