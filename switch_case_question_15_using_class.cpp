/*  wap to convert even number into its upper nearest odd number using switch statement  */

#include<iostream>
using namespace std;
class even_odd
{
   public:
   int num;
   int number()
   {
       cout<<"enter any number ";
       cin>>num;
       return num;
   }
};
int main()
{
    even_odd ob;
   int res=ob.number();
   switch(res%2==0)
   {
       case 1:
       cout<<" number is even so its ";
       res=res+1;
       cout<<"  nearest upper number is"<<res;
       break;
       case 0:
       cout<<" the number is odd so its";
       res=res-1;
       cout<<" the nearest lower  number is"<<res;
       break;
       default:
       cout<<" try again";
       break;
   }
   return 0;
}