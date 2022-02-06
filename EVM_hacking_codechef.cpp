#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,p,q,r;
	    cin>>a>>b>>c>>p>>q>>r;
	    int x=(p+q+r)/2;
	    if((p+b+c)>x||(a+q+c)>x||(a+b+r)>x)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	}
	return 0;
}
