#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int x,m,d;
	    cin>>x>>m>>d;
	    if(x*m < x+d)
	    {
	        cout<<x*m<<"\n";
	    }
	    else
	    cout<<x+d<<"\n";
	}
	return 0;
}
