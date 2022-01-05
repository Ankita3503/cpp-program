#include <iostream>
using namespace std;

int main() {
	int num,count=0;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
	    if(num%i==0)
	    {
	        count++;
	        
	    }
	}
	cout<<count<<"\n";
	for(int i=1;i<=num;i++)
	{
	    if(num%i==0)
	    {
	        cout<<i<<" ";
	    }
	}
	return 0;
}
