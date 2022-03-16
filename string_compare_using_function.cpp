 
    
/*#include<iostream>
#include<string.h>
using namespace std;

 bool compare_string(char s1[] ,char s2[])
  {
      int x=strcmp(s1,s2);
      if(x==0)
      {
      	return true;
	  }
	return false;
  }
int main()
{
    char s1[100];
    char s2[100];
    cout<<"Enter the string 1 :- \n";
    gets(s1);
    cout<<"Enter the string 2 :- \n";
    gets(s2);
    int ans=compare_string(s1,s2);
    if(ans==1)
    {
    	cout<<"string is same ";
	}
	else
	{
		cout<<"string is not same ";
	}
 return 0;
}  */

#include<iostream>
#include<string.h>
using namespace std;

 bool compare_string(char s1[] ,char s2[])
  {
      
      	int length1 = strlen(s1);
      	int length2 = strlen(s2);
      	int f = 0;
      	if(length1 == length2)
      	{
      		for(int i  = 0  ; s1[i] != '\0' ; i++)
      		{
      			if(s1[i] != s2[i])
      			{
      				f=2;
      				break;
				}
			}
			cout<<"f  =  "<<f<<endl;
			if(f == 0)
			{
				return true;
			}
		}
	  
	  return false;
  }
int main()
{
    char s1[100];
    char s2[100];
    cout<<"Enter the string 1 :- \n";
    gets(s1);
    cout<<"Enter the string 2 :- \n";
    gets(s2);
    int ans=compare_string(s1,s2);
    if(ans==1)
    {
    	cout<<"string is same ";
	}
	else
	{
		cout<<"string is not same ";
	}
 return 0;
} 
