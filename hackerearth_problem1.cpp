/* You are provided an array A of size N that contains non-negative integers. Your task is to determine whether the number that is formed by
selecting the last digit of all the N numbers is divisible by 10 .*/
/*   explanation
Last digit of 85 is .
Last digit of 25 is .
Last digit of 65 is .
Last digit of  21 is .
Last digit of 84 is .
Therefore the number formed is 55214 which is not divisible by 10 .   */

// code
#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int a[N];
	int num;
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<N;j++)
	{
		 num=a[j];
		 num=num%10;
	}
	if(num%10==0)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}
 return 0;
}
