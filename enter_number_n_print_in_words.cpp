#include<iostream>
using namespace std;
class enter_number_n_print_words
{
   public:
  int  num,r,sum=0,r1;
   void number_n_print_words()
   {
       cout<<"enter any number = ";
       cin>>num;
       while(num>0)
       {
           r=num%10;
           sum=(sum*10)+r;
           num=num/10;
       }
       while(sum>0)
       {
           r1=sum%10;
           switch(r1)
           {
               case 1:
               cout<<" one ";
               break;
                case 2:
               cout<<" two";
               break;
                case 3:
               cout<<" three ";
               break;
                case 4:
               cout<<" four ";
               break;
                case 5:
               cout<<" five ";
               break;
                case 6:
               cout<<" six ";
               break;
                case 7:
               cout<<" seven ";
               break;
                case 8:
               cout<<"  eight ";
               break;
               case 9:
               cout<<" nine ";
               break;
               case 0:
               cout<<" zero ";
               break;
               default:
               cout<<"invalid";
               break;
           }
          sum=sum/10;
       }
       
   }
};
int main()
{
    enter_number_n_print_words ob;
    ob.number_n_print_words();
    return 0;
}