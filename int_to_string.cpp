#include<iostream>
using namespace std;
/*int main()
{
	int x=6;
	char y=x+48;
	cout<<y;
}  */
int main()
{
	int x=63;
	string g  =  "";
	while(x!=0)
	{
		int r=x%10;
	    char ch = r+48;
	    g  =  ch  +  g;
		x=x/10;
	}
	cout<<g;
}

