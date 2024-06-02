#include<iostream>
using namespace std;

int** sum_of_sequence(int* arr,int size);
int helper3(int n1,int n2);
int helper2(int**,int,int,int);
int main()
{
	int *ptr=new int[5];
	int s=5;
	sum_of_sequence(ptr,s);
	return 0;
}
int** sum_of_sequence(int* arr,int size)
{
	int i=0;
	int temp=size;

	if(size!=0)
	{
		temp=helper3(arr[i],arr[i+1]);

	}
	int **ptr=new int* [size];

	for(int i=0;i<size;i++)
	{
		temp--;
		ptr[i]=new int[temp];
		for(int j=0;j<temp;j++)
		{
			ptr[i][j]=helper3(arr[j],arr[j+1]);
		}
	}
return ptr;
}
int helper3(int n1,int n2)
{
	return n1+n2;

}
int helper2(int**a,int s,int b,int x)
{




}
