//============================================================================
// Name        : Lab_02.cpp
// Author      : Maaz ALi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>


using namespace std;

char *calculateGrades(int *arr,int size);
int* sortArray(int *arr, int size);
//Q1 main
//int main()
//{
//	cout<<"\nEnter the size of ARRAY:";
//	int s;
//	cin>>s;
//	bool flag=false;
//	int *arr = new int [s];
//
//	for(int i=0; i<s; i++)
//	{
//		cout <<"\nEnter the marks:";
//		cin>>arr[i];
//		if(arr[i]<0 || arr[i]>100)
//		{
//			flag=true;
//
//		}
//		else
//			flag=false;
//
//		while (flag)
//		{
//			cout<<"\nEnter again:";
//			cin>>arr[i];
//			if(arr[i]<0 || arr[i]>100)
//			{
//					flag=true;
//
//			}
//				else
//					flag=false;
//		}
//
//	}
//
//
//	char *grade=calculateGrades(arr, s);
//	for(int i=0;i<s;i++)
//	{
//		cout<<*(grade+i);
//		cout<<endl;
//	}
//	delete arr;
//
//
//	return 0;
//}

//Q2 Main
//int main()
//{
//	int s;
//	cout<<"\nEnter the size:";
//	cin>>s;
//	int *arr= new int [s];
//	for(int i=0; i<s; i++)
//		{
//			cout <<"\nEnter the values:";
//			cin>>arr[i];
//		}
//	sortArray(arr,s);
//	for(int i=0;i<s;i++)
//	{
//		cout<<*(arr+i);
//		cout<<endl;
//	}
//	return 0;
//}
//#include <iostream>
//
//
//using namespace std;
//
//int* sumArray(int **arr);
//Q3 main
//int main()
//{
//	int	arr1[6];
//
//	for(int i=0;i<6;i++)
//	{
//		cin>>arr1[i];
//
//	}
//
//	int	arr2[6];
//
//		for(int i=0;i<6;i++)
//		{
//			cin>>arr2[i];
//
//		}
//
//	int	arr3[6];
//
//			for(int i=0;i<6;i++)
//			{
//				cin>>arr3[i];
//
//			}
//
//	int	arr4[6];
//
//				for(int i=0;i<6;i++)
//				{
//					cin>>arr4[i];
//
//				}
//
//	int	arr5[6];
//
//		for(int i=0;i<6;i++)
//			{
//				cin>>arr5[i];
//
//			}
//
//
//
//return 0;
//}
//Q4 main
//int* removeDuplicates(int *arr, int size);
//int main()
//{
//	int s;
//	cout<<"\nEnter the size:";
//	cin>>s;
//
//	int *arr=new int [s];
//
//	for(int i=0;i<s;i++)
//	{
//		cout<<"\nEnter the value";
//		cin>>arr[i];
//	}
//
//	removeDuplicates(arr,s);
//	for(int i=0;i<s;i++)
//		{
//			cout<<*(arr+i);
//			cout<<endl;
//		}
//	return 0;
//}
char *calculateGrades(int *arr,int size)
{
	cout<<"\n NAME=Maaz ALi";
	cout<<"\n Roll=22i-1042";
	char *par=new char[size];

	for(int i=0; i<size; i++)
	{
		if (arr[i]<=100 && arr[i]>=91)
			par[i]='A';
		if (arr[i]<=90 && arr[i]>=76)
					par[i]='B';
		if (arr[i]<=75 && arr[i]>=60)
					par[i]='C';
		if (arr[i]<=59 && arr[i]>=51)
					par[i]='D';
		if (arr[i]<=50)
					par[i]='F';


	}
	return par;
}
int* sortArray(int *arr, int size)
{
		for(int i=0;i<size;i++)
		{
			for(int j=i+1;j<size;j++)
			{
				if(arr[i]>=arr[j])
				{
					int temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}

			}

		}
		return arr;
}
int* removeDuplicates(int *arr, int size)
{
	for(int i=0;i<size;i++)
	{
			for(int j=i+1;j<size;j++)
					{
							if(arr[i]==arr[j])
							{

								//arr[i]=arr[j];
								arr[j]='\0';

							}

					}

		}
	int count=0;
	for(int i=0;i<size;i++)
					{
						if(arr[i]!=0)
							count++;

					}
	int *arr1=new int [count];
	for(int i=0;i<size;i++)
			{
							if(arr[i]!=0)
							{
								static int x=0;
								arr1[x]=arr[i];
								x++;
							}

			}
	return arr1;
}
