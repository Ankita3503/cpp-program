#include<iostream>
#include<string.h>
using namespace std;
 int count_words(char *s)
 {
     int count=0;
     for(int i=0;i<strlen(s);i++)
     {
         if(s[i]==' ')
         {
             count++;
         }
     }
     return count;
 }

int main()
{
    char s[10000];
    cout<<"enter the string :- ";
    gets(s);
   cout<<"no. of words in a string are :--"<< count_words(s);
}