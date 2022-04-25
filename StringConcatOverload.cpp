// operator overloading  - to add objects 
// operator ki chamta se bhadkar             /*passing objects as an arguments*****
///   t3=t+t2;  ==  t3=t1.operator+(t2);
#include<iostream>
#include<string>
using namespace std;
class concate
{
  public:
  string a;
  void fun(string x)
         {
           a=x;
	  }
	 void show()
	  {
	  	cout<<a<<"\n";
	  }
	 concate operator+(concate ob)
	  {
	  	concate obj;
	  	 obj.a = a + ob.a;
	  	return obj ;
	  }	  	
};
int main()
{
	concate g1,g2,g3;
	cout<<"hii\n";
	g1.fun("hello");
	g2.fun("ankita");
	 g3  =  g1.operator+(g2);
	 g3.show();
	 return 0;
}
