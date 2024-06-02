//============================================================================
// Name        : 22i-1042_A_Lab05.cpp
// Author      : MAAZ ALI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//
void diamond_pattern(int number);
//
void helper(int n);
//
//int main() {
//
//	int num;
//	cout<<"\nEnter the number:";
//	cin>>num;
//
//	diamond_pattern(num);
//
//
//	return 0;
//}

void diamond_pattern(int number)
{
	int n=number/2;
	n++;
	for(int i=1;i<=n;i++)
	{
		helper(i);
	}
	for(int i=n-1;i>=0;i--)
		{
			helper(i);
		}


}

void helper(int n)
{
	if(n==0)
	{
		cout<<endl;
	}
	else
	{
	cout<<"*";
	helper(n-1);
	//cout<<endl;
	}


}
//int* sum_of_digits(int start, int end, int size_of_resultant_array);
//
//bool helper1(int i);
//
//int main()
//{
//	int *ptr;
//	ptr=sum_of_digits(100,999,45);
//	for(int i=0;i<45;i++)
//	{
//	cout<<ptr[i];
//	cout<<" , ";
//	}
//	return 0;
//}

//int* sum_of_digits(int start, int end, int size_of_resultant_array)
//{
//	bool flag;
// 	if(start<=end)
// 	{
// 		//flag=helper1(start);


// 	}


// 	int *p=new int[size_of_resultant_array];
// 	//return p;
// 	int x=0;
// 	for(int i=start;i<=end;i++)
// 	{
// 		flag=helper1(i);
// 		if(flag)
// 		{
// 			p[x]=i;
// 			x++;
// 		}
// 	}

// return p;
// }
// bool helper1(int i)
// {
// 	int n1,n2,n3;
// 	n1=i%100;
// 	//n1=n1%2;
// 	n2=i-n1;
// 	n2=n2%10;
// 	//n2-=10;
// 	n3=i-100;
// 	if((n1+n3)%2==0)
// 	{
// 		return true;
// 	}
// return false;
// }
string reverse_string(string s);
//
//int main()
//{
//string s={"this is a car"};
//s=reverse_string(s);
//return 0;
//}
string reverse_string(string s)
{
	//if(s=='\0')
	{
		//reverse_string(s+1);

	}
	int temp=s[0];
	int temp1=s[1];
	s[0]=temp1;
	s[1]=temp;

	//reverse_string((s+1));


return s;
}
int** sum_of_sequence(int* arr,int size);
int helper3(int n1,int n2);
int helper2(int**,int,int,int);
//int main()
//{
//	int *ptr=new int[5];
//	int s=5;
//	sum_of_sequence(ptr,s);
//	return 0;
//}
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
