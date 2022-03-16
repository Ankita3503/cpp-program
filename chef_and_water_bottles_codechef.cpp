#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,k,count=0;
	    cin>>n>>x>>k;
	     int bottles=k/x;
	     if(n>=bottles)
	     cout<<bottles<<"\n";
	     else
	     cout<<n<<"\n";
	}
	return 0;
}
