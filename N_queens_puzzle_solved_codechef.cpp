#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	     float fn=(0.143*N);
	      float ans=pow(fn,N);
	      cout<<fixed<<setprecision(0)<<ans<<endl;
	}
	return 0;
}
