#include<iostream>
using namespace std;
class base
{
 public:
 virtual void print()
 {
     cout<<"Print base class \n";
 }
 void show()
 {
     cout<<"Displaying base class\n";
 }
};
class derived:public base
{
  public:
   void print()
   {
       cout<<"Print derived class \n";
   }
   void show()
   {
       cout<<"Displaying derived class\n";
   }
};
int main()
{
    base *ptr;
    derived ob;
    ptr=&ob;
    ptr->print();// virtual function ,binded at run time
    ptr->show(); // non virtual function ,binded at compile time
    return 0;
}

