#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n>=2000)
	    cout<<"1\n";
	    else if(n>=1600 && n<2000)
	    cout<<"2\n";
	    else
	    cout<<"3\n";
	}
	return 0;
}
