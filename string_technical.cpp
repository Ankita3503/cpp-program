#include<iostream>
#include<string.h>
using namespace std;
int fun(char *arr,int x)
{
   int i,count=0;;
   for(i=0; i<x ;i++)
   {
       count++;
   }
   return count;
}
int main()
{
    char n[100];
    cout<<"enter the string :";
    gets(n);
    int x=strlen(n);
    int ans=fun(n ,x);
     cout<<"string length ="<<ans;
  return 0;
}