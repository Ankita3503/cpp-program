#include<iostream>
//#include<bits>
#include<string.h>
using namespace std;
void fun(char s[],int size)
{
	//sort(a,a+size);
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
		   if(s[i]>s[j])
		   {
		   	char t;
		   	t=s[i];
		   	s[i]=s[j];
		   	s[j]=t;
		   }
		}
	}
	
}
int main()
{
 char s[100];
 //string s;
 //int index=0;
 gets(s);
 int size=strlen(s);
 fun(s,size);
 for(int i=0;i<size;i++)
 {
 cout<<size/2<<s[i];
}
 return 0;
}
