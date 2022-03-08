#include<iostream>
#include<string.h>
using namespace std;
 void  copy_string(char *s1 ,char *s2)
  {
       for(int i=0;i<strlen(s1);i++)
       {
           char t ;
            t=s1[i];
            s1[i]=s2[i];
            s2[i]=t;
       }
  }
int main()
{
    char s1[100];
    char s2[100];
    cout<<"Enter the string 1 :- \n";
    gets(s1);
    cout<<"Enter the string 2 :- \n";
    gets(s2);
    copy_string(s1,s2);
    cout<<"after copying the string are:-  \n";
    cout<<"first string are :-  "<<s1<<"\n";
    cout<<"second string are :-  "<<s2;
 return 0;
}