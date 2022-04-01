#include<iostream>
using namespace std;
main()
{
	string str  =  "hello how are you";
	string s  =  "";
	string arr[4]; 
	int k = 0;
	for(int i  = 0  ; i  < str.length()  ; i++)
	{
		s =  s  + str[i];
		if(str[i] == ' ' || i == str.length() - 1)
		{
			//cout<<s<<endl;
			arr[k++]  =  s;
			s  =  "";
		}
	}
	
	for(int i  = 0  ; i  < 4  ; i++)
	{
		cout<<arr[i]<<" ";
	}
}
