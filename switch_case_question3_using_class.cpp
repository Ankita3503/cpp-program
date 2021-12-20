/* wap to check whether a year is a leap year or not using switch statement  */

#include<iostream>
using namespace std;
class leap_year
{
   int year;
   public:
   //int get_data(int year)
   int take()
   {
       cout<<"enter the year";
       cin>>year;
       return year;
   }
};
int main()
{
    leap_year ob;
int t=ob.take();
switch(t%4==0 && t%100!=0 || t%400==0)
     {
   case 1:
   cout<<"leap year";
   break;
   case 0:
   cout<<"not a leap year";
   break;
     }
   return 0;
}
