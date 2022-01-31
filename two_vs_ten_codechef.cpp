#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int num;
	    cin>>num;
	    if(num%10==0)
	    {
	        cout<<"0\n";
	    }
	    else
	    {
	        num=num*2;
	        if(num%10==0)
	        {
	            cout<<"1\n";
	        }
	        else
	        {
	            cout<<"-1\n";
	        }
	    }
	}
	return 0;
}
