
/* wap to check whether a  number is divisible by  5 and 11 or not using switch statement  */


#include<iostream>
using namespace std;
class check
{
    public:
    int  a;
    int get()
    {
        cout<<"enter any number to check whether it is divisible by 5 and 11 or not \n";
        cin>>a;
        return a;
    }
};
int main()
{
    check ob;
   int  x=ob.get();
   switch(x%5==0 && x%11==0)
   {
       case 1:
       cout<<"number is divisible by 5 and 11 both";
       break;
       default:
       cout<<" not divisible by both";
       break;
       return 0;
   }
}