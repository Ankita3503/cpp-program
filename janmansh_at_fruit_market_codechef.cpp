#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,a,b,c;
	    cin>>x>>a>>b>>c;
	   
	    if(a<=b && a<=c)
	    {
	        if(b<=c)
	        {
	            cout<<(a*(x-1)+b)<<"\n";
	         
	        }
	        else
	        {
	            cout<<(a*(x-1)+c)<<"\n";
	            
	        }
	    }
	    else if(b<=a && b<=c)
	    {
	        if(a<=c)
	        {
	            cout<<(b*(x-1)+a)<<"\n";
	           
	        }
	        else
	        {
	            cout<<(b*(x-1)+c)<<"\n";
	          
	        }
	    }
	    else if(c<=a && c<=b)
	    {
	        if(a<=b)
	        {
	            cout<<(c*(x-1)+a)<<"\n";
	           
	        }
	        else
	        {
	            cout<<(c*(x-1)+b)<<"\n";
	          
	        }
	    }
	    
	}
	return 0;
}
