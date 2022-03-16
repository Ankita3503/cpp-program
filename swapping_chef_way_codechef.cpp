#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	   string x=s;
	    sort(s.begin(), s.end() );
	   for(int i=1;i<=n;i++)
	   {
	       if(x[i]!=s[i])
	       {
	     char t;
	     t=x[i];
	     x[i]=x[n-i-1];
	     x[n-i-1]=t;
	       }
       }
	    if(s==x)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	    
	}
	return 0;
}
