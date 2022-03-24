#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x=min(a,min(b,c));
	     if(x==a)
	     {
	        cout<<"Draw\n"; 
	     }
	     if(x==b)
	     {
	         cout<<"Bob\n";
	     }
	     if(x==c)
	     {
	         cout<<"Alice\n";
	     }
	}
	return 0;
}
