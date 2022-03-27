#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int friends;
	    cin>>friends;
	    int day[friends];
	    for(int i=0;i<friends;i++)
	    {
	        cin>>day[i];
	    }
	    sort(day,day+friends);
	    int save=friends;
	    for(int i=0;i<friends;i++)
	    {
	        if(day[i]==day[i+1])
	        {
	            save--;
	        }
	    }
	    cout<<save<<"\n";
	}
	return 0;
}
