#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,count=0;
	    double ans=0;
	    cin>>x>>y;
	   int sum=x+y;
	   if(sum>=6)
	   {
	      count=0.0;
	   }
	   else
	   {
         count=6-sum;
	   }
	    ans=count/6.0;
	   cout<<fixed<<setprecision(6)<<ans<<"\n";
	}
	
	return 0;
}
