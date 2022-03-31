#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	cin>>x>>y>>z;
	int a=x*y;
	int b=x*z;
	cout<<b-a<<"\n";
	}
	
	return 0;
}
