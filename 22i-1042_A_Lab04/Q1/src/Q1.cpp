//============================================================================
// Name        : Q1.cpp
// Author      : Maaz Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int calculateSum(int **p, int rows, int col);
int** interchangeCols(int** p,int rows, int cols, int c1, int c2);
int** MatMul (int ** matrix1, int ** matrix2, int rowM1, int colM1, int rowM2, int colM2);
int ***create3D(int pages, int rows, int cols);
//int main()
//{
//	//Q1-------------------------------------------------------------------
//	int r;
//	int c;
//	cout<<"\nEnter the number of rows:";
//	cin>>r;
//	cout<<"\nEnter the number of column:";
//	cin>>c;
//	int **p=new int*[r];
//	for(int i=0; i<r; i++)
//	{
//		p[i]=new int[c];
//	}
//	for(int i=0;i<r;i++)
//	{
//		for (int j=0; j<c;j++)
//			p[i][j]=i*j;
//	}
//	int result;
//    result=	calculateSum(p,r,c);
//    cout<<"\nThe sum="<<result;
//    //Q2-------------------------------------------------------------------
//    cout<<"Enter the first column you want to change: ";
//    int c1,c2;
//    cin>>c1;
//    cout<<"Enter the 2nd column you want to change: ";
//    cin>>c2;
//
//    interchangeCols(p,r,c,c1,c2);
//    //Q3-------------------------------------------------------------------
//    int m1c,m1r,m2c,m2r;
//    int **result1=new int*[m1r];
//	int temp=0;
//	for(int i=0;i<m1r;i++)
//	{
//		result1[i]=new int [m2c];
//	}
//
//    cout<<"Enter the column of first matrix: ";
//    cin>>m1c;
//    cout<<"Enter the row of first matrix: ";
//    cin>>m1r;
//    cout<<"Enter the column of second matrix: ";
//    cin>>m2c;
//    cout<<"Enter the row of second matrix: ";
//    cin>>m2r;
//
//    int **matrix1=new int*[m1r];
//    	for(int i=0; i<m1r; i++)
//    	{
//    		matrix1[i]=new int[m1c];
//    	}
//    int **matrix2=new int*[m2r];
//    	for(int i=0; i<m2r; i++)
//    		{
//    			matrix2[i]=new int[m2c];
//    		}
//
//    result1=MatMul (matrix1,matrix2,m1r,m1c,m2r,m2c);
//    for(int j=0 ; j<m1r; j++ )
//            		{
//            			delete [] result1[j];
//            		}
//            delete [] result1;
//    for(int j=0 ; j<r; j++ )
//    		{
//    			delete [] p[j];
//    		}
//    delete [] p;
//    for(int j=0 ; j<m1r; j++ )
//        		{
//        			delete [] matrix1[j];
//        		}
//        delete [] matrix1;
//        for(int j=0 ; j<m2r; j++ )
//            		{
//            			delete [] matrix2[j];
//            		}
//            delete [] matrix2;
//
//     int pages,rows,cols;
//     cout<<"\nEnter the pages:";
//     cin>>pages;
//     cout<<"\nEnter the rows:";
//          cin>>rows;
//          cout<<"\nEnter the cols:";
//               cin>>cols;
//               int ***arr=new int**[pages];
//               	for(int i=0;i<pages;i++)
//               	{
//               		arr[i]=new int* [rows];
//               		for(int j=0;j<rows;j++)
//               		{
//               			arr[i][j]=new int [cols];
//               		}
//               	}
//      arr=  create3D(pages,rows,cols);
//
//      for(int j=0 ; j<pages ; j++ )
//      			{
//      				for(int k=0;k<rows;k++)
//      				{
//      					delete [] arr[j][k];
//      				}
//      				delete [] arr[j];
//      			}
//      delete [] arr;
//	return 0;
//}
int calculateSum(int **p, int rows, int cols)
{
	cout<<"\nMaaz Ali\n22i-1042\nQ1\n";

	int res=0;

	for(int  i=0; i<rows; i++ )
	{
		for(int j=0 ; j<cols ; j++ )
		{
			if(i==0 || j==0 || i== rows-1|| j==cols-1)
			{
				res+=p[i][j];
			}
		}
	}

	return res;

}
int** interchangeCols(int** p,int rows, int cols, int c1, int c2)
{
	cout<<"\nMaaz Ali\n22i-1042\nQ2\n";
	int i=0;
	for(i=0;i<rows;i++)
		{
				int temp;
				temp= p[i][c1-1];
				p[i][c1-1]=p[i][c2-1];
				p[i][c2-1]=temp;

		}
	return p;
}
int** MatMul (int ** matrix1, int ** matrix2, int rowM1, int colM1, int rowM2, int colM2)
{
	cout<<"\nMaaz Ali\n22i-1042\nQ3\n";

	int **res=new int*[rowM1];
	int temp=0;
	for(int i=0;i<rowM1;i++)
	{
		res[i]=new int [colM2];
	}

	for(int  i=0; i<rowM1; i++ )
		{
			for(int j=0 ; j<colM2 ; j++ )
			{
				for(int k=0;k<colM1;k++)
				{
					res[i][j]+=matrix1[i][k]*matrix2[k][j];
				}
			}

		}
	return res;

}
int ***create3D(int pages, int rows, int cols)
{
	cout<<"\nMaaz Ali\n22i-1042\nQ4\n";
	int ***arr=new int**[pages];
	for(int i=0;i<pages;i++)
	{
		arr[i]=new int* [rows];
		for(int j=0;j<rows;j++)
		{
			arr[i][j]=new int [cols];
		}
	}

	for(int i=0;i<pages;i++)
		{

			for(int j=0;j<rows;j++)
			{
				for(int k=0;k<cols;k++)
				{
					*(*(*(arr+i)+j)+k)=i+j+k;
				}
			}
		}
return arr;
}
