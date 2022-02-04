#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b&&a>c) 
	{
	   if(b>c)
	   {
	       cout<<b<<endl;
	   }
	   
	   else
	   {
	      cout<<c<<"\n";
	   }
	   
	}
	else if(b>a&&b>c)
	{
	    if(a>c)
	    {
	        cout<<a<<endl;
	    }
	    
	    else
	    {
	    cout<<c<<endl;
	    }
	}
	else if(c>a&&c>b)
	{    
	    if(a>b)
	    {
	       cout<<a<<endl;
	    }
	    
	    else
	    {
	    cout<<b<<endl;
	    }
	}
	}
	return 0;
}
