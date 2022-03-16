#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string a;
   string b;
   getline(cin,a);
   getline(cin,b);
   int j,i;
   i=a.begin()-a.end();  // it will count null character also
   
   for( j=0;b[j]!='\0';i++,j++)
   {
   	a[i] = b[j];
   }	
    a[i]!='\0';
  	cout<<a;
   return 0;
}

