#include <iostream>
using namespace std;

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
//
//int* sum_of_digits(int start, int end, int size_of_resultant_array)
//{
//	bool flag;
//	if(start<=end)
//	{
//		//flag=helper1(start);
//
//
//	}
//
//
//	int *p=new int[size_of_resultant_array];
//	//return p;
//	int x=0;
//	for(int i=start;i<=end;i++)
//	{
//		flag=helper1(i);
//		if(flag)
//		{
//			p[x]=i;
//			x++;
//		}
//	}
//
//return p;
//}
//bool helper1(int i)
//{
//	int n1,n2,n3;
//	n1=i%100;
//	//n1=n1%2;
//	n2=i-n1;
//	n2=n2%10;
//	//n2-=10;
//	n3=i-100;
//	if((n1+n3)%2==0)
//	{
//		return true;
//	}
//return false;
//}
