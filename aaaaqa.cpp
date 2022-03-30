#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"enter the size of array 2d \n";
	cin>>size;
	int arr[size][size];
	cout<<"enter the elements of array \n";
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
		   if(i==0 || i==size-1 || j==0 ||j==size-1)
		   { 
		   	 cout<<arr[i][j]<<" ";
		   }
		}
		cout<<"\n";
	}
	 return 0;
}

