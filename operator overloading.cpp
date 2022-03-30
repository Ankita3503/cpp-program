// operator overloading  - to add objects 
// operator ki chamta se bhadkar             /*passing objects as an arguments*****
///   t3=t+t2;  ==  t3=t1.operator+(t2);
#include<iostream>
using namespace std;
class time
{
  public:
  int hr,min;
  void fun(int h,int m)
      {
     	hr=h;
     	min=m;
	  }
	  void show()
	  {
	  	cout<<hr<<" "<<min<<"\n";
	  }
	 time operator+(time x)
	  {
	  	time obj;
	  	obj.hr=hr+x.hr;
	  	obj.min=min+x.min;
	  	return (obj);
	  }	  	
};
int main()
{
	time t1 ,t2,t3;
	t1.fun(2,40);
	t2 .fun(3,45);
	t3=t1.operator+(t2);
	 t3.show();
	 return 0;
}
