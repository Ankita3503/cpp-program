#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x<=y)
	    {
	    for(int i=0 ;i<y;i++)
	    {
	        x=x+1;
	    }
	    }
	    else
	    {
	        for(int i=0;i<y;i++)
	        {
	            x=x-1;
	        }
	    }
	    if(x%2==0)
	    {
	        cout<<"janmansh\n";
	    }
	    else
	    {
	        cout<<"jay\n";
	    }
	    
	}
	return 0;
}
