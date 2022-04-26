#include<iostream>
using namespace std;
int main()
{
    int n,value;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the value ";
    cin>>value;
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(a[i]+a[j]==value)
           {
               cout<<a[i]<<","<<a[j]<<"\n";
               
           }
       }
    }
    return 0;
}