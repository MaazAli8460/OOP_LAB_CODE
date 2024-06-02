#include <iostream>


using namespace std;

int* removeDuplicates(int *arr, int size);
int main()
{
	int s;
	cout<<"\nEnter the size:";
	cin>>s;

	int *arr=new int [s];

	for(int i=0;i<s;i++)
	{
		cout<<"\nEnter the value";
		cin>>arr[i];
	}

	removeDuplicates(arr,s);
	for(int i=0;i<s;i++)
		{
			cout<<*(arr+i);
			cout<<endl;
		}
	return 0;
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
