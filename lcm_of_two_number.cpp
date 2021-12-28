#include<iostream>
using namespace std;
class lcm_of_two_number
{
  public:
  int a ,b ,l;
  void indata()
  {
      cout<<"enter any two number ";
      cin>>a>>b;
      for(l=(a>b?a:b) ; l<=a*b ; l=l+(a>b?a:b))
      {
          if((l%a==0) && (l%b==0))
          {
              break;
          }
      }
       cout<<"LCM of two number= "<<l;
  }
};
int main()
{
    lcm_of_two_number o;
    o.indata();
    return 0;
}