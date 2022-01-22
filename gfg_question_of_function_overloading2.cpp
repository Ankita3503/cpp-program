#include<iostream>
using namespace std;
class test
{
   public:
   static void fun(int i)
   {
       cout<<i;
   }
   void fun(int i)
   {
       cout<<i+10;
   }
};
int main()
{
    test t;
    t.fun(8);
    return 0;
}