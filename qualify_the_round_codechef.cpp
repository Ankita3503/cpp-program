#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,a,b;
	    cin>>x>>a>>b;
	    if(x<= (a + 2*b))
	    cout<<"Qualify\n";
	    else
	    cout<<"NotQualify\n";
	}
	return 0;
}
