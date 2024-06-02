//============================================================================
// Name        : Lab07.cpp
// Author      : Maaz Ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cstring>
#include"string.h"
using namespace std;
class Sale
{
private:
	double itemCost; // Cost of the item
	double taxRate; // Sales tax rate

public:
	Sale()
	{
		itemCost=0;
		taxRate=0;

	};
	Sale( double cost, double rate)
	{

		itemCost=cost;
		taxRate=rate;
	};
	void setItemCost(double cost)
	{
		itemCost=cost;
	}
	void setTaxRate(double rate)
	{
		taxRate=rate;
	}
	double getTax( )
	{
		return itemCost*taxRate;
	}
	double getTotal( )
	{
		return itemCost+getTax();
	}

};
class Fraction
{
private:
	int num;
	int denom;

public:
	Fraction()
	{
		num=0;
		denom=1;
	};
	Fraction(int n, int d)
	{
		num=n;
		denom=d;
	};
	 void setNum(int n)
	 {
		 num=n;
	 }
	 void setDenom(int d)
	 {
		 if(d==0)
		 {
			 cout<<"\nError";
			 return;
		 }
		 denom=d;
	 }
	 int getNum()
	 {
		 return num;
	 }
	 int getDenom()
	 {
		 return denom;
	 }
	 void displayFraction()
	 {
		 cout<<"\n"<<num<<"/"<<denom<<endl;
	 }
	 Fraction AddFractions(Fraction& f1)
	 {
		 Fraction f2;
		 if(denom==f1.getDenom()){
		 f2.setNum(num+f1.getNum());

		 f2.setDenom(denom);
		 }
		 else if(denom!=f1.getDenom())
		 {
			 f2.setNum(num*f1.getDenom() + f1.getNum()*denom);
			 f2.setDenom(denom*f1.getDenom());

		 }

		 return f2;
	 }
	 Fraction MultiplyFractions(Fraction& f1)
	 {
		 Fraction f2;
		 f2.setNum(num*f1.getNum());
		 f2.setDenom(denom*f1.getDenom());
		 return f2;
	 }
	 Fraction DivideFractions(Fraction& f1)
	 {
		 Fraction f2;
		 f2.setNum(num*f1.getDenom());
		 f2.setDenom(f1.getNum()*denom);
		 return f2;

	 }
};

class AccountCategory
{
private:
	int accountId;
	string accountName;

public:
	AccountCategory()
	{
		accountId=0;
	   accountName="";
	};
	AccountCategory(int id, string name){
		accountId=id;
		accountName=name;
	};
	void setAccountId(int id)
	{
		accountId=id;
	}
	void setAccountName(int name)
	{
		accountName=name;
	}
	int getAccountId()
	{
		return accountId;
	}
	string getAccountName()
	{
		return accountName;
	}

};
class BankAccount{
private:
	 string depositorName;
	 string accountNumber;

	 AccountCategory accountCat;
	 long balance;

public:
	 BankAccount(){

		 depositorName="";
		 accountNumber="";


		 balance=0;
	 };
	 BankAccount(string name, string accNum, AccountCategory accCat, long bal){
		 	 	 depositorName=name;
		 		 accountNumber=accNum;


		 		 balance=bal;
	 };
	 bool depositAmount(long amountToDeposit)
	 {
		 bool flag=false;
		 if(amountToDeposit>0)
		 {
			 balance+=amountToDeposit;
			 flag=true;
		 }
		 else{
			 flag=false;
		 }
		 return flag;
	 }
	 bool withdrawAmount(long amountToWithdraw)
	 {
		 bool flag=false;
				 if(amountToWithdraw<=balance)
				 {
					 balance-=amountToWithdraw;
					 flag=true;
				 }
				 else{
					 flag=false;
				 }
				 return flag;
	 }
	 long getAmount()
	 {
		 cout<<"\nTotal Amount="<<balance;
		 return balance;
	 }
};


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

//int main() {
//	cout<<"\n----------Q1---------"<<endl;
//	Sale obj(90,0.5);
//	cout<<"\nTax1="<<obj.getTax();
//	cout<<"\nTotal1="<<obj.getTotal();
//	//now by setter ftns
//	Sale obj1;
//	double cost = 750, rate=0.17;
//	obj1.setItemCost(cost);
//	obj1.setTaxRate(rate);
//	cout<<"\nTax2="<<obj1.getTax();
//	cout<<"\nTotal2="<<obj1.getTotal();
//
//
//cout<<"\n----------Q2---------"<<endl;
//		cout<<"\nBy parametric .";
//		Fraction F1(1,2),F2(3,4),F3;
//		F3=F1.AddFractions(F2);
//		F3.displayFraction();
//		F3=F1.MultiplyFractions(F2);
//		F3.displayFraction();
//		F3=F1.DivideFractions(F2);
//		F3.displayFraction();
//		cout<<"\nBy default.";
//		Fraction f1,f2;
//		f1.setNum(-2);
//		f1.setDenom(5);
//		f2.setNum(7);
//		f2.setDenom(8);
//		F3=f1.AddFractions(f2);
//		F3.displayFraction();
//		F3=f1.MultiplyFractions(f2);
//		F3.displayFraction();
//		F3=f1.DivideFractions(f2);
//		F3.displayFraction();
//
//
//		cout<<"\n----------Q3---------"<<endl;
//			AccountCategory a1;
//			BankAccount b1("Maaz","000000",a1,10000);
//			cout<<endl<<b1.depositAmount(500);
//			b1.getAmount();
//			cout<<endl<<b1.depositAmount(0);
//			b1.getAmount();
//			cout<<endl<<b1.withdrawAmount(20000);
//			b1.getAmount();
//			cout<<endl<<b1.withdrawAmount(5000);
//			b1.getAmount();
//
//
//			cout<<"\n----------Q4---------"<<endl;
//			Container c1(7);
//			c1.insert(0);
//			c1.insert(6);
//			c1.insert(-2);
//			c1.insert(7);
//			c1.insert(5);
//			c1.insert(-8);
//			c1.insert(1);
//			c1.display( );
//			c1.insert(-5);
//			//c1.display( );
//			c1.search(-2);
//			c1.display();
//			c1.search(1);
//			c1.display();
//			c1.remove();
//			c1.remove();
//			c1.display();
//			c1.search(1);
//
//
//
//
//	return 0;
//}
