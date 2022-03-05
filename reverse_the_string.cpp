#include<iostream>
#include<string.h>
using namespace std;
void reverse_words(char *s1)
{
    int len=strlen(s1);
   for(int i=0;i<len/2;i++)
   {
        char t=s1[i];
        s1[i]=s1[len-i-1];
        s1[len-i-1]=s1[i];
   }
}
int main()
{
    char s1[100];
    cout<<"enter the string :- ";
    cin>>s1;
    reverse_words(s1);
    cout<<s1;
    return  0;
}