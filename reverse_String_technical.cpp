//reverse a string using recursion
   
 /*  
#include<iostream>
#include<string.h>
using namespace std;
string fun(string s)
{
for(int i=0;i<(s.length())/2 ; i++)
    {
	  char t;
	  t=s[i];
	  s[i]=s[s.length()-i-1];
	  s[s.length() -i-1]=t;
	}
	return s;	
}




int main()
{
 string s;
 getline(cin,s);
 cout<<fun(s);
 return 0;
}*/


//reverse a string using recursion
   
   
#include<iostream>
#include<string.h>
using namespace std;
void fun(char s[],int index,int size)
{
	  char t;
	  t=s[index];
	  s[index]=s[strlen(s)-index-1];
	  s[strlen(s)-index-1]=t;
	  if(index==size/2-1)
	  {
	    return ;
	  }
	 fun(s,index+1 ,size);
   
}
int main()
{
 char s[100];
 //string s;
 int index=0;
 gets(s);
 int size=strlen(s);
 fun(s,index,size);
 cout<<s;
 return 0;
}
