#include<iostream>
#include<math.h>
using namespace std;
   bool fun2()
   {
		int num,count=0;
		cin>>num;
		long long  x=num*num;
	//	cout<<x<<"\n";
		int t=x;
	 while(x>0)
	{
		count++;
		x=x/10;
	}
	 x=t;
	 int sum;
	// cout<<count<<"\n";
	if(count%2==0)
	{
	
	 int last= x % int(pow(10,count/2)); 
	int first=  x / int(pow(10,count/2)); 
	 sum=last+first;
     //cout<<first<<" "<<last<<"\n";
    // cout<<sum;	
}
else
{
	int last= x % int(pow(10,count/2+1)); 
	int first=  x / int(pow(10,count/2+1)); 
	 sum=last+first;
    // cout<<first<<" "<<last<<"\n";
    // cout<<sum;
}
if(sum==num)
{
//	cout<<"kaprekar number \n";
return true;
}
else
{
	//cout<<"not a kaprekar number\n  ";
	return false;
}
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int ans=fun2();
	cout<<ans<<"\n";
    }	
	return 0;
}
