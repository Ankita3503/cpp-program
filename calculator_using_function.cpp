#include<iostream>
using namespace std;
int sum();
 int sub();
 int multi();// declaration
 int divi();
int main()
{
	int ch,ans=0;
	cout<<"1. ADDITION\n";
	cout<<"2. SUBTRACTION\n";
	cout<<"3. MULTIPLICATION\n";
	cout<<"4. DIVISION\n";
	cout<<"enter your choice \n";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			ans=sum();
			cout<<"result is"<<ans;
			break;
			case 2:
				ans=sub();
				cout<<"result is "<<ans;
				break;
				case 3:
					ans=multi();
					cout<<"result is "<<ans;
					break;
					case 4:
						ans=divi();
						cout<<"result is"<<ans;
						break;
	}
	
}
int a,b;
int sum()
{
	cout<<"enter two number for addition";
	cin>>a>>b;
	return (a+b);
}
int sub()
{
	cout<<"enter two number for subtraction";
	cin>>a>>b;
	return (a-b);
}
int multi()
{
	cout<<"enter two number for multiplication";
	cin>>a>>b;
	return (a*b);
}
int divi()
{
	cout<<"enter two number for division ";
	cin>>a>>b;
	return (a/b);
}
