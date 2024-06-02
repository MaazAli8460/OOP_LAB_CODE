//# include <iostream>
//
//using namespace std;
//int *rotateArray (int *arr, int sizeofArray, int n, int m);
//int main()
//{
//	int s,n,m;
//	int *arr;
//	cout<<"\nEnter the size:";
//	cin>>s;
//	cout<<"\nEnter the number of rotation:";
//	cin>>n;
//	cout<<"\nEnter the number of division:";
//	cin>>m;
//	int arr1[s];
//	for(int j=0;j<s;j++)
//			{
//			cout<<"\nEnter the values:";
//			cin>>arr1[j];
//
//			}
//	arr=arr1;
//	rotateArray (arr,s,n,m);
//	for(int j=0;j<s;j++)
//				{
//				//cout<<"\nEnter the values:";
//				cout<<arr1[j]<<" ";
//
//				}
//	return 0;
//
//}


int *rotateArray (int *arr, int sizeofArray, int n, int m)
{
	cout<<"\nMaaz Ali";
	cout<<"\n22i-1042";
	while(m!=sizeofArray)
	{
		//sizeofArray--;
		static int x=0;
		int temp=arr[m];
		for(int i=m-1;i>n;i--)
		{
			arr[i+1]=arr[i];
			arr[x]=temp;

		}
		arr[x]=temp;
		x+=m;
		m=m+m;

	}
	return arr;
}
