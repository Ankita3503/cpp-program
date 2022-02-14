#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array \t";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //insertion sort
    for(int i=1;i<n;i++)
    {
        int x=a[i];
        int j=i-1;
        while(a[j]>x && j>=0)
        {
           a[j+1]=a[j];
           j--;
        }
        a[j+1]=x;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}