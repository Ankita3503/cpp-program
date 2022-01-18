#include<iostream>
using namespace std;
int sum(int n)
{
    if(n<0)
    {
      return 0;
    }
    else
    {
      return (n+(sum(n-1)));  
    }
}
int main()
{
    int n;
    cout<<"enter the last number \n";
    cin>>n;
    int ans=sum(n);
    cout<<"sum of natural number ="<<ans;
    return 0;
}