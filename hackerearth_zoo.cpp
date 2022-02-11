

#include <iostream>
#include<cstring>
using namespace std;

int main() {
	string a;
	int len;
	int count_Z=0,count=0;
	
		cin>>a;
	 len=a.size();
	for(int j=0;j<20;j++)
	{
		if(a[j]=='z')
		{
		   count_Z++;	
		}
	}	
	count=len-count_Z;
		if(2*count_Z == count)
		{
			cout<<"Yes";
		}
		else
		{
			cout<<"No";
		}
		return 0;
	}

