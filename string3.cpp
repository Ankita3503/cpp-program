#include<iostream>
#include<string.h>
using namespace std;
void display(char *);
void display(string);
int main()
{
   
     string name1;
      char name2[100];
	        cout<<"enter the  first string \n";
			getline(cin,name1);
			 cout<<"enter the  second string \n";
			cin.get(name2,100);
			display(name1);
			display(name2);
return 0;
}
void display(char s[])
{
	cout<<"first string \n"<<s;
}
void display(string s)
{
	cout<<"second string \n"<<s;
}
