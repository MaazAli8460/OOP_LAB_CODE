//
//#include <iostream>
//
//using namespace std;
//int **create2DArray(int ** , int , int);
//int calDiagonal(int ** , int , int );
//int main()
//{
//    int row,col;
//    int ** arr;
//    cout<<"\nEnter the rows:";
//    cin>>row;
//    cout<<"\nEnter the column:";
//    cin>>col;
//    arr=create2DArray(arr,row,col);
//    cout<<endl;
//    for (int  i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//         cout <<   arr[i][j]<<"  ";
//        }
//        cout<<endl;
//    }
//
//    int s;
//    s=calDiagonal(arr,row,col);
//
//    cout<<"\n sum="<<s;
//
//
//
//
//
//
//
//
//    return 0;
//}

int **create2DArray(int **arr , int r, int c)
{	cout<<"\nMaaz Ali";
cout<<"\n22i-1042";

    arr= new int* [r];s

    for (int i = 0; i < r; i++)
    {
        arr[i]=new int [c];
        /* code */
    }


    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
        	cout<<"\nEnter the values:";
            cin>>arr[i][j];
        }

    }
    for (int  i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }
    return arr;
}
int calDiagonal(int **arr , int r , int c )
{	cout<<"\nMaaz Ali";
cout<<"\n22i-1042";
	int sum=0;
	c--;
	for (int  i = 0; i < r; i++)
	        {

	                sum= sum+ arr[i][c];
	                c--;

	        }
	return sum;
}
