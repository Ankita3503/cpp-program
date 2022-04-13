#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    int sum=0;
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    int ans=n*x -sum;
	    if(sum > n*x)
	    cout<<0<<"\n";
	    else
	    cout<<ans<<"\n";
	}
	return 0;
}
