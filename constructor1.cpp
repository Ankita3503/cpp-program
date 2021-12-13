/* constructor is the function whose name is same as class
 It doesn't have any return type
 they are called automatically when the object is declared/called  
  1. default constructor- it does not have any argument
  2. parameterised constructor - it  have any argument*/
  /* constructor is used to construct /initialise the instance variable*/
  /* this pointer is used to differentiate between who is local and who is instance variable*/
  
  #include<iostream>
  using namespace std;
  class ab
  {
  	public:
  		int x;//instance variable (class ke variable )
  		ab()//default constructor
  	//	ab(int x) parameterised constructor
  		  {
  			cout<<"ankita";
		  }
		  ab(int x)
		  {
		  this->x=x; //(*this).x; // jiske saath "this" laga hua hai woh class ke variable hai 
		  
		  }
		  void show()
		  {
		  	cout<<x;
		  }
  };
  int main()
  {
  	//int a=9;local variable of main
  	ab o;
  	ab t(10);
  	t.show();
  	return 0;
  }
 
 

