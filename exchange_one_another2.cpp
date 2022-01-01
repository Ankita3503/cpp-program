#include<iostream>
using namespace std;
int main()
{
	int size,i,t;
	cout<<"enter the size";
	cin>>size;
	int a[size];
	cout<<"enter the elements of array ";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<" array are :";
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
   if(size%2==0)
   {
   
		for(i=0;i<size;)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
			cout<<a[i]<<" "<<a[i+1]<<" ";
			i=i+2;
		}
	}
	if(size%2!=0)
   	{
		for(i=0;i<size-1;)
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
			cout<<a[i]<<" "<<a[i+1]<<" ";
			i=i+2;
		}
		cout<<a[size-1];
	}
		return 0;
}
