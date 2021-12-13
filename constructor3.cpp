 
 /*single memory shared by different object then we use static */
 
 /* static member is shared by all objects of the class*/
 /* we can define class members static using static keyword. It means no matter how many objects of the class are created ,there is
 only one copy of the static member */
 #include<iostream>
  using namespace std;
  class test
  {
  static	int x;
  	public:
  		void set()
  		{
  			//this->x=x; /*
  			x=10;
		  }
		  void print()
		  {
		  	cout<<"x="<<x;
		  }
  };
  int main()
  {
  	test ob1,ob2;
  	ob1.set();
  	//ob2.print();
  	
  	/* garbage value dega*/
  //	ob2=ob1;//copy constructor (ob1 ka saaman ob2 mein daal denge toh ob2 mein ab ob1 ka value sab aa jaayega)
  	ob2.print();
  	return 0;
  }
