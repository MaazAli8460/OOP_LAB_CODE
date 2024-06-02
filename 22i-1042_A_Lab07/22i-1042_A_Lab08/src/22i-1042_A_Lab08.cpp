//============================================================================
// Name        : 22i-1042_A_Lab08.cpp
// Author      : Maaz Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Circle.h"
#include"Matrix.h"
using namespace std;

int main() {
	cout<<"_________________________Q1__________________";
	Circle *obj=new Circle(6);
	//obj->setRadius();
	double area=obj->getArea();
	cout<<"\nArea:"<<area;
	double peri=obj->getPerimeter();
	cout<<"\nPerimeter:"<<peri;

	Circle *obj1=new Circle();
	obj1->setRadius(10);
	double area1=obj1->getArea();
	cout<<"\nArea:"<<area1;
	double peri1=obj1->getPerimeter();
	cout<<"\nPerimeter:"<<peri1;

	Circle *obj2=new Circle(12.5);
	//obj->setRadius();
	double area2=obj2->getArea();
	cout<<"\nArea:"<<area2;
	double peri2=obj2->getPerimeter();
	cout<<"\nPerimeter:"<<peri2;

	cout<<"\nCount of circle:"<<obj2->getCountOfCircles();

	delete obj;
	obj=NULL;
	delete obj1;
	obj1=NULL;
	delete obj2;
	obj2=NULL;

	cout<<"\nCount of circle:"<<obj2->getCountOfCircles();
	cout<<"_________________________Q2__________________";


	int **Arr;
	int r=3;
	int c=3;

	Arr=new int* [r];
		for(int i=0;i<r;i++)
			{
				Arr[i]=new int [c];
			}
	int Arr1[3][3]={ {1,5,7}, {4,8,3}, {6,4,1}};
	for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					Arr[i][j]=Arr1[i][j];
				}
			}

	Matrix m1(r,c,Arr);

	Matrix m2(m1);

	m2.multiplyMatrix(4);
	m2.display();
	m2.addMatrix(3);
	m2.display();
	cout<<"_________________________Q3__________________";







	return 0;
}
