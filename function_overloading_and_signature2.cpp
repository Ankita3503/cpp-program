#include<iostream>
using namespace std;

float fun (int a, float b) 
{    
    cout<< a+b;
}
void fun(int a,int b)  // jo function pehle likenge woh pehle call hoga aur usi ka kaam hoga sirf next function
                       // ka use bhi nahi hoga
{
    cout<<a+b<<"\n";
}
int main()
{
float a,b;
   cin>>a>>b;
   
   fun(a,b);
  
   return 0;
}
