#include<iostream>
using namespace std;
int main()
{
    int num,r,sum=0,t;
    cout<<"Enter  the number to check palindrome number ";
    cin>>num;
    t=num;
    for(;num>0;)
    {
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    if(t==sum)
    {
    cout<<"Palindrome number";
    }
    else
    {
        cout<<"Not a palindrome number";
    }
    return 0;
}
