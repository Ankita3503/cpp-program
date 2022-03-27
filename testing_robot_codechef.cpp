#include<iostream>
using namespace std;
int main()
{
	int t;
    cin>>t;
	while(t--)
	{
	    int n,x; // n=no. of commands, x= initial position
	   cin>>n>>x;
	    char s[n];
	   for(int i=0;i<n;i++)
	   {
	       cin>>s[i];
	   }
	    int count1=x;
	    int count2=x;
	    int temp=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i] == 'R')
	        {
	            x++;
	        }
	        else if(s[i] == 'L')
	        {
	            x--;
	        }
	        
	        if(x<count1)
	        {
	            temp++;
	            count1 = x;
	        }
	        else if(x>count2)
	        {
	            temp++;
	            count2 = x;
	        }
	    }
	   cout<<temp+1<<"\n";
	    
	}
	return 0;
}

