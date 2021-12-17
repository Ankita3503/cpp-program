#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter any number";
    cin>>num;
     switch(num%5&&num%11)
     {
         case 0:
         cout<<" number is divisible by 5 and 11";
         break;
       default:
         cout<<"number is not divisible by 5 nad 11";
         break;
     }

return 0;
}