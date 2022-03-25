#include<iostream>
#include<string.h>
using namespace std;
  int count_vowel(string str)
  {
  	string n="";
  	int length=str.length();
  	int count=0;
  	for(int i=0;i<length;i++)
  	  {
  	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
  	{
  		count++;
	  }
	  }
	  
	  return count;
  }
int main()
{
	//string str="hello";
	string str;
	cout<<"enter the string: ";
	 getline(cin,str);
	int ans=count_vowel(str);
	cout<<ans;
	return 0;
}
