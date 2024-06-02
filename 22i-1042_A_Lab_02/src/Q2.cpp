//#include <iostream>
//
//
//using namespace std;
//
//int* sortArray(int *arr, int size)
//{
//		for(int i=0;i<size;i++)
//		{
//			for(int j=i+1;j<size;j++)
//			{
//				if(arr[i]>=arr[j])
//				{
//					int temp=arr[j];
//					arr[j]=arr[i];
//					arr[i]=temp;
//				}
//
//			}
//
//		}
//		for(int i=0;i<size;i++)
//			{
//				for(int j=i+1;j<size;j++)
//				{
//					if(arr[i]%2==0 )
//					{
//						int temp=arr[j];
//						arr[j]=arr[i];
//						arr[i]=temp;
//					}
//
//				}
//			}
//		for(int i=0;i<size;i++)
//				{
//					if(arr[i]%2!=0 )
//						continue;
//
//					for(int j=i+1;j<size;j++)
//					{
//						if(arr[i]>=arr[j])
//						{
//							int temp=arr[j];
//							arr[j]=arr[i];
//							arr[i]=temp;
//						}
//
//					}
//
//				}
//
//		return arr;
//}
//
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






