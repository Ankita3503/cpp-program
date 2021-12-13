/*  these are the following situations where "this" pointer is used 
 1. when local vaiable's name is same as member's name(instance variable)
  */
  #include<iostream>
  using namespace std;
  class test
  {
  	int x;
  	public:
  		void set(int x)
  		{
  			//this->x=x; /*
  			x=x;
		  }
		  void print()
		  {
		  	cout<<"x="<<x;
		  }
  };
  int main()
  {
  	test ob;
  	ob.set(10);
  	ob.print();
  }
 
