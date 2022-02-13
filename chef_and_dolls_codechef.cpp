#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int no_of_doll[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>no_of_doll[i];
	      
	    }
	    sort(no_of_doll, no_of_doll + n);
	        for(int j=0;j<n;j++)
	        {
	            if( no_of_doll[j]== no_of_doll[j+1])
	            {
	                j++;
	            }
	            else
	            {
	                cout<<no_of_doll[j]<<"\n";
	            }
	        }
	}
	return 0;
}
