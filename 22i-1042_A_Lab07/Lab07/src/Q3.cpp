#include <iostream>
#include<cstring>
#include"string.h"
using namespace std;


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
//int main()
//{
//	AccountCategory a1;
//	BankAccount b1("Maaz","000000",a1,10000);
//	cout<<endl<<b1.depositAmount(500);
//	b1.getAmount();
//	cout<<endl<<b1.depositAmount(0);
//	b1.getAmount();
//	cout<<endl<<b1.withdrawAmount(20000);
//	b1.getAmount();
//	cout<<endl<<b1.withdrawAmount(5000);
//	b1.getAmount();
//
//
//
//
//
//return 0;
//}
