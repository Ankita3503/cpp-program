#include<iostream>
using namespace std;
int main()
{
  int x;
  cin>>x;
 cout<<ispalindrome(x);
  return 0;
}
bool isPalindrome(int x)
{
    if(x<0)
        return false;
    int n=x;
    long long sum=0;
    while(x!=0)
    {
        int r=x%10;
        sum=(sum*10)+r;
        x=x/10;
    }
    if(n==sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
