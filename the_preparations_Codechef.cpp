#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n,k;
	    cin>>m>>n>>k;
	    if(m>n*k)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    cout<<"No\n";
	}
	
	return 0;
}
