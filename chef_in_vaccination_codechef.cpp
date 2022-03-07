#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p,x,y;
	    cin>>n>>p>>x>>y;
	     int a[n];
	     for(int i=0;i<n;i++)
	     {
	         cin>>a[i];
	     }
	     int sum=0;
	     for(int i=0;i<p;i++)
	     {
	         if(a[i]==0)
	         {
	             sum=sum+x;
	         }
	         else 
	         {
	             sum=sum+y;
	         }
	     }
	     cout<<sum<<"\n";
	}
	return 0;
}
