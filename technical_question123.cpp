#include<iostream>
using namespace std;
void fun(int );
int main()
{
	int n;
	cin>>n;
	fun(n);
	return 0;
}
void fun(int n)
{
	   while(n!=1)
	  {
        if(n%2!=0)
        {
  	     n=3*n+1;
	    }
	    else
		n=n/2;	
		 cout<<n<<"->"; 
	  }  
    }  

