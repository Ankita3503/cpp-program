/*  wap to check whether a character is an in uppercase or lowercase alphabet, using switch statement  */

#include<iostream>
using namespace std;
class alphabet
{
   char c;
   public:
   char take()
   {
       cout<<"enter any alphabet";
       cin>>c;
       return c ;
   }
};
int main()
{
    alphabet ob;
int t=ob.take();
switch( t>='a' && t<='z' )
     {
   case 1:
   cout<<" lowercase  alphabet ";
   break;
   case 0:
   cout<<"  uppercase  alphabet ";
   break;
   default:
   cout<<"invalid  enter again";
   break;
    }
   return 0;
}
