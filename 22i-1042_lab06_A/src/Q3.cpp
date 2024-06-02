//#include <iostream>
//#include<cmath>
//#include<math.h>
//using namespace std;

struct StudentCard{
	char campusCode;
	int batch;
	int id;

};
StudentCard * getCard(StudentCard *std_crd, int s);
int* getID(StudentCard *std_crd, int s);
//int main()
//{
//	int s;
//	cout<<"\nEnter the number of students:";
//	cin>>s;
//	int *res;
//	StudentCard *p=new StudentCard[s];
//	res=getID(p,s);
//	p=getCard(p,s);
//	return 0;
//}
int* getID(StudentCard *std_crd, int s)
{
	int res=new int[s];

	for(int i=0;i<s;i++)
	{
		int temp;
		temp=std_crd->id;
		if(temp==22)
		{
			res[i]=temp;
		}

	}
	return res;
}
StudentCard * getCard(StudentCard *std_crd, int s)
{
	int temp;
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(std_crd[i].id>std_crd[j].id)
			{
				temp=std_crd[i].id;
				std_crd[i].id=std_crd[j].id;
				std_crd[j].id=temp;
			}
		}
	}
	return std_crd;
}
