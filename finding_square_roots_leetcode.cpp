#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int num,s=0;
	    cin>>num;
	    while(s*s<=num)
	    {
	        s++;
	    }
	    cout<<s-1;
	    cout<<"\n";
	}
	return 0;
}