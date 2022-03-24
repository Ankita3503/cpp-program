#include <iostream>
using namespace std;

int main()  
{
	int t;
	cin>>t;
	int a[7];
 	
    for(int i=1;i<=t;i++)
	{
	    int sunny=0,rainy=0;
	    for(int i=0;i<7;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0)
	        rainy++;
	        else
	        sunny++;
	    }
	   
	    if(sunny>=rainy)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
