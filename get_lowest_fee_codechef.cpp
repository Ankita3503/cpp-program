#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a<=b && a<=c)
	    {
	        cout<<b+c<<"\n";
	    }
	    else if(b<=a && b<=c)
	    {
	        cout<<a+c<<"\n";
	    }
	    else
	    {
	        cout<<a+b<<"\n";
	    }
	 
	}
	return 0;
}
