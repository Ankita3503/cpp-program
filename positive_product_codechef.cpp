#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   long long pos=0,neg=0,ans=0,x;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	    
	   if(x<0)
	   {
	       ans=ans+neg;
	       neg++;
	   }
	  else if(x>0)
	  {
	      ans=ans+pos;
	      pos++;
	  }
	  }
	  cout<<ans<<"\n";
	}
	return 0;
}
