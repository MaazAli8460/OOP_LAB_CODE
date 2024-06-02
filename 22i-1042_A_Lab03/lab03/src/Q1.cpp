//============================================================================
// Name        : lab03.cpp
// Author      : maaz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
using namespace std;
// int Swapper(int& ,int * ,int );
//
//int main() {
//
//	int x,y,z;
//	x=3;
//	y=4;
//	cout<<"\nnum1="<<x;
//	cout<<"\nnum2="<<y;
//	z=Swapper(x ,&y ,0 );
//	cout<<"\nProduct="<<z;
//	cout<<"\nnum1="<<x;
//	cout<<"\nnum2="<<y;
//
//	return 0;
//}
int Swapper(int& num1 ,int * num2 ,int prod)
{	cout<<"\nMaaz Ali";
cout<<"\n22i-1042";
	prod=num1;
	num1=*num2;
	*num2=prod;
	prod= num1* (*num2);
	return prod;
}
//Q2 cpp---------------------------------
//
//#include <iostream>
//
//using namespace std;
//int **create2DArray(int ** , int , int);
//int calDiagonal(int ** , int , int );
//int main()
//{
//    int row,col;
//    int ** arr;
//    cout<<"\nEnter the rows:";
//    cin>>row;
//    cout<<"\nEnter the column:";
//    cin>>col;
//    arr=create2DArray(arr,row,col);
//    cout<<endl;
//    for (int  i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//         cout <<   arr[i][j]<<"  ";
//        }
//        cout<<endl;
//    }
//
//    int s;
//    s=calDiagonal(arr,row,col);
//
//    cout<<"\n sum="<<s;
//
//
//
//
//
//
//
//
//    return 0;
//}

int **create2DArray(int **arr , int r, int c)
{
	cout<<"\nMaaz Ali";
	cout<<"\n22i-1042";
    arr= new int* [r];

    for (int i = 0; i < r; i++)
    {
        arr[i]=new int [c];
        /* code */
    }


    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
        	cout<<"\nEnter the values:";
            cin>>arr[i][j];
        }

    }
    for (int  i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }
    return arr;
}
int calDiagonal(int **arr , int r , int c )
{	cout<<"\nMaaz Ali";
cout<<"\n22i-1042";
	int sum=0;
	c--;
	for (int  i = 0; i < r; i++)
	        {

	                sum= sum+ arr[i][c];
	                c--;

	        }
	return sum;
}
//Q3 cpp----------------------------------
//# include <iostream>
//
//using namespace std;
//int *rotateArray (int *arr, int sizeofArray, int n, int m);
//int main()
//{
//	int s,n,m;
//	int *arr;
//	cout<<"\nEnter the size:";
//	cin>>s;
//	cout<<"\nEnter the number of rotation:";
//	cin>>n;
//	cout<<"\nEnter the number of division:";
//	cin>>m;
//	int arr1[s];
//	for(int j=0;j<s;j++)
//			{
//			cout<<"\nEnter the values:";
//			cin>>arr1[j];
//
//			}
//	arr=arr1;
//	rotateArray (arr,s,n,m);
//	for(int j=0;j<s;j++)
//				{
//				//cout<<"\nEnter the values:";
//				cout<<arr1[j]<<" ";
//
//				}
//	return 0;
//
//}


int *rotateArray (int *arr, int sizeofArray, int n, int m)
{
	cout<<"\nMaaz Ali";
	cout<<"\n22i-1042";
	while(sizeofArray!=0)
	{
		sizeofArray--;
		static int x=0;
		int temp=arr[m];
		for(int i=x;i>n;i++)
		{
			if(i+1<=m)
			{
			arr[i+1]=arr[i];
			}
			

		}
		arr[x]=temp;
		x+=m;
		m=m+m;

	}
	return arr;
}
