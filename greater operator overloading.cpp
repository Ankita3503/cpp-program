// operator overloading  - to add objects 
// operator ki chamta se bhadkar             /*passing objects as an arguments*****
///   t3=t+t2;  ==  t3=t1.operator+(t2);
#include<iostream>
using namespace std;
class great
{
  public:
  int a;
  void fun(int x)
      {
     a=x;
	  }
	  
	 int operator>(great ob)
	  {
	  	 if(a > ob.a)
	  	return 1;
	  	else
	  	return 0;
	  }	  	
};
int main()
{
	great g1,g2;
	g1.fun(200);
	g2.fun(23);
	 if(g1>g2)
	 cout<<" first number is greater \n";
	 else
	 cout<<"second number is greater \n";
	 return 0;
}
