#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a ,x=2,i,sum=0;
cout<<"enter any no.";
cin>>a;
for(i=1;i<=a;i++)
{
sum=sum+pow(x,i);	
cout<<pow(x,i)<<"+";
}
cout<<"\tsum="<<sum<<endl;
getch();	
}
