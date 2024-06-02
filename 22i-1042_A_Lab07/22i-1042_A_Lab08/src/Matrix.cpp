/*
 * Matrix.cpp
 *
 *  Created on: Mar 21, 2023
 *      Author: maaz
 */

#include "Matrix.h"
#include<iostream>

using namespace std;


Matrix::Matrix() {
	rows=0;
	columns=0;
	arr=nullptr;

};
Matrix::Matrix(int r, int c, int** p) {
	rows=r;
	columns=c;
	arr=new int* [r];
	for(int i=0;i<r;i++)
	{
		arr[i]=new int [c];
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			arr[i][j]=p[i][j];
		}
	}

};

Matrix::~Matrix()
{
	for(int i=0;i<rows;i++)
		{
			delete [] arr[columns];
		}
	delete [] arr;
	arr=nullptr;
};

void Matrix::multiplyMatrix(int x)
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			arr[i][j]*=x;
		}
	}
}

void Matrix::addMatrix(int x)
{
	for(int i=0;i<rows;i++)
		{
			for(int j=0;j<columns;j++)
			{
				arr[i][j]+=x;
			}
		}
}

void Matrix::display()
{
	cout<<endl;
	for(int i=0;i<rows;i++)
			{
				for(int j=0;j<columns;j++)
				{
					cout<<" "<<arr[i][j];
				}
				cout<<"\n";
			}
}

Matrix::Matrix(Matrix &o) {
	rows=o.getRows();
	columns=o.getColumns();
	arr=new int* [rows];
	for(int i=0;i<rows;i++)
		{
			arr[i]=new int [columns];
		}
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<columns;j++)
			{
				arr[i][j]=o.arr[i][j];
			}
		}


}
int** Matrix::getArr()
	{
		return arr;
	}

	void Matrix::setArr(int **arr1) {
		arr=new int* [rows];
			for(int i=0;i<rows;i++)
			{
				arr[i]=new int [columns];
			}
		for(int i=0;i<rows;i++)
					{
						for(int j=0;j<columns;j++)
						{
							arr[i][j]=arr1[i][j];
						}

					}
	}

	int Matrix::getColumns()  {
		return columns;
	}

	void Matrix::setColumns(int columns1) {
		columns = columns1;
	}

	int Matrix::getRows()  {
		return rows;
	}

	void Matrix::setRows(int rows1) {
	rows = rows1;
	}

