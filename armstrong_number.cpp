   /*armstrong number */

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int num,count=0,t,sum=0,i;
   cout<<"Enter last number to print armstrong number";
   cin>>i;
    num=1;
  while(num<=i)
    {
       t=num;
      while(num>0)
        {
           count++;
           num=num/10;
        }
    cout<<count<<"\n";
    num=t;
    cout<<num<<"\n";
  while(num!=0)
       {
        int  r=num%10;
        sum=sum+pow(r,count);
          num=num/10;
       }
     num=t;
      num++;
   }
       if(t==sum)
        {
    cout<<sum;
        }
  return 0;
}
