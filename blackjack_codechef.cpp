#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int c=21-(a+b);
	    if(c>10)
	    {
	        cout<<"-1\n";
	    }
	    else
	    {
	        cout<<c<<"\n";
	    }
	}
	return 0;
}
