#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n%10==0)
	    {
	       int b=n/10;
	       cout<<b<<"\n";
	    }
	    else
	    {
	        int b=n/10;
	        cout<<b+1<<"\n";
	    }
	}
	return 0;
}
