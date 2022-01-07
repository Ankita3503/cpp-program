/* Print prime number between given number to given number */
#include<iostream>
using namespace std;
int main()
{
    int num,t,count=0,i;
   
    for(num=1;num<=10;num++)
    {
        t=num;
    for(i=2;i<num;i++)
    {
      if(num%i==0)
      {
          count++;
          break;
      }
    }
    num=t;
    }
    if(count==0)
    {
        cout<<t<<"\n";
    }
    return 0;
}  
