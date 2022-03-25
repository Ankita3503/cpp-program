#include<iostream>
#include<string.h>
using namespace std;
  string reverse_string(string str)
  {
  	string n="";
  	int length=str.length();
  	for(int i=0;i<length/2;i++)
  	  {
  		char t;
  		t=str[i];
  		str[i]=str[length-i-1];
  		str[length-i-1]=t;
	  }
	  n=str;
	  return n;
  }
int main()
{
	//string str="hello";
	string str;
	cout<<"enter the string: ";
	 getline(cin,str);
	string ans=reverse_string(str);
	cout<<ans;
	return 0;
}
