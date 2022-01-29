#include <iostream>
using namespace std;

int main() {
	int T,num;
	cin>>T;
	while(T--)
	{
	    cin>>num;
	    int t=num;
	    int sum=0;
	    while(num>0)
	    {
	        int r=num%10;
	        sum=(sum*10)+r;
	        num=num/10;
	    }
	    if(t==sum)
	    {
	        cout<<"wins\n";
	    }
	    else
	    {
	        cout<<"loses\n";
	    }
	}
	return 0;
}
