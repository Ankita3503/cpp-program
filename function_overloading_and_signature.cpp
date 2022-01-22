#include<iostream>
using namespace std;
void fun(int a,int b)
{
    cout<<a+b<<"\n";
}
float fun (int a, int b)  // In function 'int fun(float, float)':
//function_overloading_and_signature.cpp:10:1: warning: no return statement in function returning non-void [-Wreturn-type]
{    
    cout<< a+b;
}
int main()
{
   int a,b;
   cin>>a>>b;
   
   fun(a,b);
  
   return 0;
}

/*
function_overloading_and_signature.cpp:7:7: error: ambiguating new declaration of 'float fun(int, int)'
    7 | float fun (int a, int b)  // In function 'int fun(float, float)':
      |       ^~~
function_overloading_and_signature.cpp:3:6: note: old declaration 'void fun(int, int)'
    3 | void fun(int a,int b)
      |      ^~~
function_overloading_and_signature.cpp: In function 'float fun(int, int)':
function_overloading_and_signature.cpp:11:1: warning: no return statement in function returning non-void [-Wreturn-type]
   11 | }
      | ^        */