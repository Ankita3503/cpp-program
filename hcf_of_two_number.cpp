#include<iostream>
using namespace std;
class hcf_of_two_number
{
  public:
  int a ,b ,h;
  void indata()
  {
      cout<<"enter any two number ";
      cin>>a>>b;
      for(h=a<b?a:b;h>=1;h--)
      {
          if((a%h==0) && (b%h==0))
          {
              break;
          }
      }
       cout<<"HCF of two number= "<<h;
  }
};
int main()
{
    hcf_of_two_number o;
    o.indata();
    return 0;
}