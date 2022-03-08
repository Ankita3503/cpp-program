#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int size;
	    cin>>size;
	    char s[size];
	   
	      cin>>s;
	    
	    for(int k=0;k<strlen(s);k+=2)
	    {
	        if(s[k+1]!='\0')
	        {
	        char t;
	        t=s[k];
	        s[k]=s[k+1];
	        s[k+1]=t;
	        }
	    }
	    for(int i=0;i<strlen(s);i++)
	    {
	           s[i]=122-(s[i]-97);
	    }
	    cout<<s<<"\n";
	   
	}
return 0;
}
