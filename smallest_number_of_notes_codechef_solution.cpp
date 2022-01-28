#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	   long int notes;
       long  int count;
       int count_notes=0;
       cin>>notes;
	   if(notes/100!=0)
	   {     
	       count=notes/100;
	       count_notes=count_notes+count;
	       notes=notes-(count*100);
	   }
	   if(notes/50!=0)
	   {
	       count=notes/50;
	       count_notes=count_notes+count;
	       notes=notes-(count*50);
	   }
	   if(notes/10!=0)
	   {
	       count=notes/10;
	       count_notes=count_notes+count;
	       notes=notes-(count*10);
	   }
	   if(notes/5!=0)
	   {
	       count=notes/5;
	       count_notes=count_notes+count;
	       notes=notes-(count*5);
	   }
	    if(notes/2!=0)
	   {
	       count=notes/2;
	       count_notes=count_notes+count;
	       notes=notes-(count*2);
	   }
	   if(notes)
	   {
	   count_notes++;
	   }
	   
	   cout<<count_notes<<"\n";
	   
	}
	return 0;
}
