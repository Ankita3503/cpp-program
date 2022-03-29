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
	    float y;
	    y=n%4;
	    if(y==0)
	    cout<<"Good\n";
	    else
	    cout<<"Not Good\n";
	}
	return 0;
}
