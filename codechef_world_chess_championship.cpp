#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x, count_C=0,count_D=0,count_N=0;
	    cin>>x;
	    char  s[14];
	   for(int i=0;i<14;i++)
	   {
	       cin>>s[i];
	   }
	   for(int j=0;j<14;j++)
	   {
	   if(s[j]=='C')
	   {
	       count_C++;
	   }
	   else if(s[j]=='D')
	   {
	       count_D++;
	   }
	   else
	   {
	       count_N++;
	   }
	   }
	int point1=2*count_C + 1*count_D; 
   int 	 point2=2*count_N + 1*count_D;
	 if(point1>point2)
	 {
	     cout<<60*x<<"\n";
	 }
	
	 else if(point1==point2)
	 {
	     cout<<55*x<<"\n";
	 }
	  else
	 {
	     cout<<40*x<<"\n";
	 }
	 
	}
	return 0;
}
