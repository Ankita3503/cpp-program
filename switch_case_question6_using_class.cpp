/*  wap to check whether a character is an in uppercase or lowercase alphabet, using switch statement  */

#include<iostream>
using namespace std;
class week
{
   int  c;
   public:
   int take()
   {
       cout<<"enter any number";
       cin>>c;
       return c ;
   }
};
int main()
{
    week ob;
int t=ob.take();
switch(t)
     {
   case 1:
   cout<<"sunday";
   break;
   case 2:
   cout<<" monday ";
   break;
   case 3:
   cout<<" tuesday ";
   break;
   case 4:
   cout<<" wednesday";
   break;
   case 5:
   cout<<" thursday";
   break;
   case 6:
   cout<<" friday";
   break;
   case 7:
   cout<<" saturday";
   break;
   default:
   cout<<"enter again";
   break;
    }
   return 0;
}
