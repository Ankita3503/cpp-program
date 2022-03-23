// reverse each word of a string at their own position 
#include<iostream>
#include<string.h>
using namespace std;
void reverse(char *,char *);

int main()
{
	char s[]={"hello how are you"};
	int length  = strlen(s) ;
	char s2[length];
    reverse(s,s2);
    cout<<s2;
}
void reverse(char *s,char *s2)
{   
	int k=0,m=0;
	int length  = strlen(s) ;
  	for(int i=0;s[i]!='\0';i++)
      {
         	int l=0;
      		char t=s[i];
  	    	if(t==' ' )
  	      	{	   
  	    		for(int j=i-1 ;j>=k;j--)
  	    		{
  	    			s2[m++]=s[j];         // we are printing each word
			  	}
			 	k=i+1;
				 cout<<" ";	 
	      	}
	      	if(i == length -1)
	      	{
	      		for(int j=i ;j>=k;j--)
  	    		{
  	    			s2[m++]=s[j];
			  	}
			}
  	
	  }	
}
