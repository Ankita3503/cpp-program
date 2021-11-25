#include<iostream>
using namespace std;
int main()
{
    int num,r,sum=0,t,i;
    cout<<"Enter  the number to check strong number ";
    cin>>num;
    t=num;
    while(num>0)
    {
      r=num%10; 
      int fact=1;
     for(i=r;i>0;i--)
        {
       fact=fact*i;
        }
        sum=sum+fact;
         num=num/10;
    }
    if(t==sum)
    {
    cout<<"strong number";
    }
    else
    {
        cout<<"Not a strong number";
    }
    return 0;
}
