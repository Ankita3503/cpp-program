// capitalize first character of each word
#include<iostream>
#include<string.h>
using namespace std;

 void capitalize_string(char *s1)
  {
      		for(int i  = 0  ; s1[i] != '\0' ; i++)
      		{
      			if(i==0)
      			{
      				if(s1[i]>='a' && s1[i]<='z')
      				{
      				    s1[i]=s1[i]-32;
			             continue;	
					}
				}
				if(s1[i]==' ')
				{
					++i;
				   if(s1[i]>='a' && s1[i]<='z')
      				{
      				    s1[i]=s1[i]-32;
			              continue;	
					}	
				}
				else
				{
					if(s1[i]>='A' && s1[i]<='Z')
					{
						s1[i]=s1[i]+32;
						continue;
					}
				}
				
			}
  }
int main()
{
    char s1[100];
   
    cout<<"Enter the string  :- \n";
    gets(s1);
    capitalize_string(s1);
    cout<<"Capitalize each letter of a word  :-  "<< s1; 
    
 return 0;
} 
