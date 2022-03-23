// reverse each word of a string at their own position
#include<iostream>
#include<string.h>
using namespace std;
void reverse(char *);
int main()
{
	char s[]={"hello how are you"};
	
    reverse(s);
}
void reverse(char *s)
{
	int k=0;
	int length  =  strlen(s) -1;
  	for(int i=0;s[i]!='\0';i++)
      {
         	int l=0;
      		char t=s[i];
  	    	if(t==' ' )
  	      	{	   
  	    		for(int j=i-1 ;j>=k;j--)
  	    		{
  	    			cout<<s[j];
			  	}
			 	k=i+1;
				 cout<<" ";	 
	      	}
	      	if(i == length )
	      	{
	      		for(int j=i ;j>=k;j--)
  	    		{
  	    			cout<<s[j];
			  	}
			}
  	
	  }	
}
