/* wap to add two numbers without using the addition operator  */

#include<iostream>
using namespace std;
class add
{
  public:
  int a,b;
  int input()
  {
      cout<<"enter any two number ";
      cin>>a>>b;
  
    while(b!=0)
    {
        int carry_number= a&b;
        a=a^b;
        b=carry_number << 1;
    }
    return a;
  }
};
int main()
{
    add ob;
  int  ans= ob.input();
  cout<<"sum="<<ans;
    return 0;
}