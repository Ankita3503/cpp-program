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
	 concate operator!()
	  {
	  	concate obj;
	  	for(int i=0;i<a.length();i++)
	  	  {
	  	  	int k=0;
	  		if(a[i]=='!')
	  		  {
	  			for(int j=i-1;i>=k;j--)
	  			  {
	  				if(a[j]>='a' && a[j]<='z')
	  				 {
	  				   obj.a[i]=a[i]+32;	
					  }
					  if(a[j]>='A' && a[j]<='Z')
	  				  {
	  				   obj.a[i]=a[i]-32;	
					  }
				  }
				  k=i+1;
			  }
		  }
	  	return obj ;
	  }	  	
};
int main()
{
	concate g1,g3;
//	cout<<"hii\n";
	g1.fun("hellO!anki!ta");
//	g2.fun("anki!ta");
	    g3  =  g1.operator!();
     	g3.show();
	 return 0;
}
