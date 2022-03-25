// reverse  the first and last character of each word at their own position in a string 
// input - "hello how are you"  , output - "oellh woh era uoy"

#include<iostream>
#include<string.h>
using namespace std;
void reverse_f_or_l_string(char * );
 void reverse_f_or_l_string(char *s1 )
  {
  	int length=strlen(s1);
  	int k=0;
       for(int i=0;s1[i]!='\0';i++)
       {
       	 char ch=s1[i];
       	 if(ch==' ' )
       	    {
       	 	     int j=i-1;
       	 	     char x;
       	 	     x=s1[j];
       	 	     s1[j]=s1[k];
       	 	     s1[k]=x;
				 k=i+1;
			}
			if(i==length-1)
			{
			     char x;
       	 	     x=s1[length-1];
       	 	     s1[length-1]=s1[k];
       	 	     s1[k]=x;	
			}
	}
}
 
int main()
{
    char s1[100];
    char t[100];
    cout<<"Enter the string  :- \n";
    gets(s1);
    reverse_f_or_l_string(s1);
    cout<<s1;
 return 0;
} 
