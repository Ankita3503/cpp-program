#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    int b[n],m=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
          sum=sum+a[j];   
        }
        b[m++]=sum;
         sum=0;
    }
    cout<<"sufix sum: ";
     for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}