/*#include<iostream>
using namespace std;
class  abc
{
  public:
     void fun()
      {
  	    cout<<"Hello\n";
	  }	
};
class xyz :public abc
{ 
  public:
   	 void sun()   // since it is private so it cannot inherit and gives error
   	   {
   		cout<<"hi\n";
	   }
};
int main()
{
	xyz obj;
	obj.fun();
	obj.sun();
	return 0;
}
*/


#include<iostream>
using namespace std;
class  abc
{
  public:
     void fun()
      {
  	    cout<<"Hello\n";
	  }	
};
class xyz :public abc
{ 
  public:
   	 void fun()   // since it is private so it cannot inherit and gives error
   	   {
   		cout<<"hi\n";
	   }
};
int main()
{	 xyz obj;
    obj.fun();
    obj.abc::fun();
	return 0;
}


