#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t ;
	cin>>t;
	while(t--)
	{
	    int n ;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i<n ; i++)
	    {
	        cin>>a[i];
	    }
	    int c = 0;
	    for(int i = 0; i<n ; i++)
	    {
	        if(i==0 ){
	            if(a[0]!=a[1])c++;
	        } 
	        else if(i==n-1 ){ 
	            if(a[i]!=a[i-1])c++;}
	        else if(a[i]!=a[i-1] || a[i]!=a[i+1])c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
