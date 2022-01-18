#include<iostream>
using namespace std;
int fun(int a,int b)
{
	if(b!=0)
	{
		return (a*fun(a,b-1));
	}
	else
	{
			return 1;
	}
}
int main()
{
	int a=2,b=5;
  int ans=fun(a,b);
  cout<<"power of "<<a<<"^"<<b<<"="<<ans;

}