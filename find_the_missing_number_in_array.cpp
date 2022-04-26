#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    cout<<"enter the size of array \n";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        x=x+a[i];
    }
    
    int sum=((n+1)*(n+2))/2;
    cout<< sum-x <<"\n";
    return 0;
}
