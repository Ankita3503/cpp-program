#include <iostream>
using namespace std;

int main() 
{
	int a,b,c;
	cin>>a>>b>>c;
	if((b+c)>a)
	{
	    if((c+a)>b)
	    {
	        if((a+b)>c)
	        {
	            cout<<"YES";
	        }
	        else
	        {
	            cout<<"NO";
	        }
	    }
	    else
	    {
	        cout<<"NO";
	    }
	}    
	else
	{
	   cout<<"NO";
	}
	
return 0;
}
