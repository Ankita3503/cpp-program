#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,p;
	    cin>>n>>x>>p;
	    int y=n-x;
	    if((3*x + (-1)*y)>=p)
	    {
	        cout<<"PASS\n";
	    }
	    else
	    cout<<"FAIL\n";
	}
	return 0;
}
