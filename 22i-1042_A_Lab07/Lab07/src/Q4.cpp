#include <iostream>
#include<cstring>
#include"string.h"
using namespace std;


class Container
{
private:

public:
	int * values;
	int capacity;
	int counter;
public:
	Container(){
		values=NULL;
		capacity=0;
		counter=0;

	};
	Container(int c){
			values=new int[c];
			capacity=c;
			counter=0;

		};
	bool isFull( )
	{
		bool flag=false;

		if(counter==capacity)
		{
			flag=true;
		}
		else
		{
			flag=false;
		}
		return flag;
	}
	void insert(int val)
	{
		if(isFull()==false)
		{
			values[counter]=val;
			counter++;
		}
		else
		{
			cout<<"\nError capacity=conatiner";
		}
	}
	bool search( int val)
	{
		bool flag=false;

		for(int i=0;i<capacity;i++)
		{
			if(values[i]==val)
			{
				cout<<"\nFound";
				flag=true;
				break;
			}
			else
			{
				flag=false;
			}
		}
		if(flag==false)
		{
			cout<<"\nNot found";
		}
		return flag;

	}
	void remove()
	{
		--counter;
	}
	void display( )
	{
		cout<<endl;
		for(int i=0;i<counter;i++)
			{
					cout<<values[i]<<" , ";
			}
	}
};

//int main()
//{
//	Container c1(7);
//	c1.insert(0);
//	c1.insert(6);
//	c1.insert(-2);
//	c1.insert(7);
//	c1.insert(5);
//	c1.insert(-8);
//	c1.insert(1);
//	c1.display( );
//	c1.insert(-5);
//	//c1.display( );
//	c1.search(-2);
//	c1.display();
//	c1.search(1);
//	c1.display();
//	c1.remove();
//	c1.remove();
//	c1.display();
//	c1.search(1);
//
//	return 0;
//}
