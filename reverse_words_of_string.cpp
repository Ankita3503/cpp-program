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
	
	int length  =  strlen(s) ;
	int k=length-1;
  	for(int i=length-1;i>=0;i--)
      {
         	
      		char t=s[i];
  	    	if(t==' ')
  	      	{	   
  	    		for(int j=i+1 ;j<=k;j++)
  	    		{
  	    			cout<<s[j];
			  	}
			 	k=i-1;
				 cout<<" ";	 
	      	}
	      	if(i == 0)
	      	{
	      		for(int j=i;j<=k;j++)
  	    		{
  	    			cout<<s[j];
			  	}
			}
       }    
}
