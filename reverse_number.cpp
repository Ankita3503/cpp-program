#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int num,r;
  
   cout<<"Enter any number\n";
   cin>>num;
   cout<<"reverse number=";
  while(num>0)
  {
      r=num%10;
      cout<<r;
      num=num/10;
  }
  return 0;
}