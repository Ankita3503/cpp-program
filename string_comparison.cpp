#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[100];
    char s2[100];
    cout<<"Enter the string 1 :- \n";
    gets(s1);
    cout<<"Enter the string 2 :- \n";
    gets(s2);
    int x=strcmp(s1,s2);
    if(x==0)
    {
    	cout<<"string is same ";
	}
	else
	{
		cout<<"string is not same ";
	}
 return 0;
}
