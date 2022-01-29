#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int size;
	    cin>>size;
	    int a[size],i;
	    for(i=0;i<size;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+size);
	    int sum=a[0]+a[1];
	    cout<<sum<<"\n";
	}
	return 0;
}
