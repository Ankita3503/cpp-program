#include <iostream>
using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,d;
	    cin>>x>>y>>d;
	    if(x>=y)
	    {
	    if((x-y)<=d)
	    {
	        cout<<"YES\n";
	    }
	    else
	    {
	        cout<<"NO\n";
	    }
	    }
	    else
	    {
	        if((y-x)<=d)
	        {
	            cout<<"YES\n";
	        }
	        else
	        {
	            cout<<"NO\n";
	        }
	    }
	}
	return 0;
}
