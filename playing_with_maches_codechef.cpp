#include <iostream>
using namespace std;

int main() {
   int T;
   cin>>T;
   while(T--)
   {
       int A,B,matches=0;
       cin>>A>>B;
       int sum=A+B;
       while(sum>0)
       {
           int r=sum%10;
           switch(r)           
           {
               case 0:
               matches=matches+6;
               break;
                case 1:
               matches=matches+2;
               break;
                case 2:
               matches=matches+5;
               break;
                case 3:
               matches=matches+5;
               break;
                case 4:
               matches=matches+4;
               break;
                case 5:
               matches=matches+5;
               break;
                case 6:
               matches=matches+6;
               break;
                case 7:
               matches=matches+3;
               break;
                case 8:
               matches=matches+7;
               break;
                case 9:
               matches=matches+6;
               break;
           }
           sum=sum/10;
       }
       cout<<matches<<"\n";
       matches=0;
   }
	return 0;
}
