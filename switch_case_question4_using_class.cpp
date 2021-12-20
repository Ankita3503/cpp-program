/*  wap to check whether a character is an alphabet or not, using switch statement  */

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
char t=ob.take();
cout<<t<<endl;
int ans = (t>=97 && t<=122) || (t>=65 && t<=90);
switch (ans )
     {
    case 1:
        cout<<" it is an alphabet";
        break;
        
   case 0:
   cout<<" not an alphabet";
   break;
   switch(ans>=0&&ans<=96|| ans>=0&&ans<=89 )
   case 1:
   cout<<"invalid!!  enter again";
   break;
    }
   return 0;
}
