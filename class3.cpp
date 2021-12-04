#include<iostream>
using namespace std;
class item
{
 int number;  //private by default
 float cost;     //private by default
 public:
 void getdata(int a,int b);     //prototype declaration 
 void putdata(void)    //function defined inside the class
 {
     cout<<" number:-"<<number;
      cout<<" cost:-"<<cost;
 }
};
void item::getdata(int a,int b)
{
  number=a;
  cost=b;  
}
int main()
{
    item x;
    x.getdata(6,8);
    x.putdata();
    return 0;
}