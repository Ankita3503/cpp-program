#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a[10],sum1=0,sum2=0;
	    for(int i=0;i<10;i++)
	    {
	       cin>>a[i];
	       if(i%2==0)
	        {
	            sum1=sum1+a[i];
	        }
	        else
	        {
	            sum2=sum2+a[i];
	        }
	    }
	    if(sum1>sum2)
	    cout<<"1\n";
	    else if(sum1<sum2)
	    cout<<"2\n";
	    else
	    cout<<"0\n";
	       
	}
	return 0;
}
