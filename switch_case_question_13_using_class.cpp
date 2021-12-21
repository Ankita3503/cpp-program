/* wap to convert  a positive number into a negative number and negative number into a positive number using switch statement */

#include<iostream>
using namespace std;
class number
{
   public:
   int num;
   int number_daalo()
   {
       cout<<"enter any  positive or negative  number ";
       cin>>num;
       return num;
   }
};
int main()
{
    number ob;
   int y =ob.number_daalo();
  switch(y>0)
  {
      case 1:
      cout<<"The negative  form of the number is "<<"-"<<y;
      break;
      case 0:
      switch(y<0)
      {
          case 1:
           y=y*(-1);
          cout<<" The positive form of the number is "<<"+"<<y;
          break;
          default:
          cout<<" invalid try again";
          break;
          
      }
  }
return 0;
}