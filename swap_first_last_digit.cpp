#include<iostream>
#include<math.h>
using namespace std;
class number
{    
     public:
    int  num,last ,sum=0;
    int  t,count=0,mid,p,t1;
    void indata()
    {
        cout<<"Enter any number ";
        cin>>num;
        t=num;
        last=num%10;
        cout<<"Last digit of a number ="<<last<<"\n";
         while(num>10)  
         {
             num=num/10;
         } 
          cout<<"First digit of a number ="<<num<<"\n";
           num=t;
           cout<<" original number  = "<<num<<"\n";
           num=num/10;
           cout<<" After removing last digit, number ="<<num<<"\n";
           t1=num;
           while(num>0)
           {
               count++;
               num=num/10;
           }
           cout<<"Number of digits= "<<count<<"\n";
            p=int(pow(10,count-1));
           cout<<"Power  = "<<p<<"\n";
            mid=t1%p;
           cout<<"Middle  number = "<<mid;
     }
     

};
int main()
{
    number ob;
    ob.indata();
    return 0;
}