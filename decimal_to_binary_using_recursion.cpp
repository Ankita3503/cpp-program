#include<iostream>
using namespace std;
int  binary(int n)
{
     if(n==0)
     {
         return 0;
     }
     int r;
   binary(n/2);
    r=n%2;
    cout<<r;
}
int main()
{
    int n;
    cin>>n;
    binary(n);
    return 0;
}