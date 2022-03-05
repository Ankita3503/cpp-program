#include <iostream>
using namespace std;

void fun() {
	// your code goes here


	    int n,value;
	    cin>>n;
	    int a[n];
	    value=1;
	     if(n==1)
	    {
	        cout<<"1\n";
	        return ;
	    }
	    for(int i=0;i<n-1;i=i+2)
	    {
	        a[i]=value;
	        a[i+1]=2*value;
	        value=value+2;
	    }
	   
	    if(n%2!=0)
	    {
	        a[n-1]=a[n-2] + 1;
	    }
	    for(int j=0;j<n;++j)
	    {
	        cout<<a[j]<<" ";
	    }
	    
	   cout<<"\n"; 
	
}
int main()
{
    	int t;
	cin>>t;
	while(t--)
	{
	    fun();
	}
	return 0;
}
