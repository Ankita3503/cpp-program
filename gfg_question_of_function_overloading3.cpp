#include<iostream>
using namespace std;
class test
{
   public:
   void fun(int *i)   /* error gfg_question_of_function_overloading3.cpp:10:9: error: 'void test::fun(int*)' cannot be overloaded with 'void test::fun(int*)'
   10 |    void fun(int i[])
      |         ^~~
gfg_question_of_function_overloading3.cpp:6:9: note: previous declaration 'void test::fun(int*)'
    6 |    void fun(int *i)
      |         ^~~     */
   {
       cout<<i;
   }
   void fun(int i[])
   {
       cout<<i+10;
   }
};
int main()
{
    test t;
    int a=9;
    t.fun( &a);
    return 0;
}