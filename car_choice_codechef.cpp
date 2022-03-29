#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float x1,x2,y1,y2;
	    cin>>x1>>x2>>y1>>y2;
	    float a,b;
	    a=y1/x1;
	    b=y2/x2;
	    if(a<b)
	    cout<<"-1\n";
	    else if(a==b)
	    cout<<"0\n";
	    else
	    cout<<"1\n";
	    
	}
	return 0;
}
