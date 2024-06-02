#include <iostream>
using namespace std;
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
//int main()
//{
//	cout<<"\nBy parametric .";
//	Fraction F1(1,2),F2(3,4),F3;
//	F3=F1.AddFractions(F2);
//	F3.displayFraction();
//	F3=F1.MultiplyFractions(F2);
//	F3.displayFraction();
//	F3=F1.DivideFractions(F2);
//	F3.displayFraction();
//	cout<<"\nBy default.";
//	Fraction f1,f2;
//	f1.setNum(-2);
//	f1.setDenom(5);
//	f2.setNum(7);
//	f2.setDenom(8);
//	F3=f1.AddFractions(f2);
//	F3.displayFraction();
//	F3=f1.MultiplyFractions(f2);
//	F3.displayFraction();
//	F3=f1.DivideFractions(f2);
//	F3.displayFraction();
//
//
//return 0;
//}
