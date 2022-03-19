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
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int min=a[0],sum=0;
	    for(int i=0;i<n;i++)
	    {
	        if(min>a[i])
	        {
	            min=a[i];
	        }
	        sum=sum+a[i];
	    }
	    cout<<sum-min<<"\n";
	}
	return 0;
}
