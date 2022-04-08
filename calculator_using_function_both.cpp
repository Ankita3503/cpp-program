#include<iostream>
#include<math.h>
using namespace std;
int sum();
 int sub();
 int multi();// declaration
 int divi();
 int power();
 int minimum();
 int maximum();
 int root();
 void normal();
 void scientific();
 int main()
 {
 	int ch;
 	cout<<"1. Normal Calculator\n";
 	cout<<" 2. Scientific Calculator\n";
 	cout<<"Enter your choice \n";
 	cin>>ch;
 	switch(ch)
 	{
 		case 1:
 		    normal();
 		    break;
 		case 2:
 		   scientific();
 		   break;
 		default:
 		    cout<<"TRY AGAIN";
		    break;	
 		
	 }
 }
 
 
 
 
 int ans=0;
 void normal()
{
	int ch;
	cout<<"1. ADDITION\n";
	cout<<"2. SUBTRACTION\n";
	cout<<"3. MULTIPLICATION\n";
	cout<<"4. DIVISION\n";
	cout<<"Enter your choice  to perform any calculation \n";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			ans=sum();
			cout<<"Result is"<<ans;
			break;
			case 2:
				ans=sub();
				cout<<"Result is "<<ans;
				break;
				case 3:
					ans=multi();
					cout<<"Result is "<<ans;
					break;
					case 4:
						ans=divi();
						cout<<"Result is"<<ans;
						break;
						default:
							cout<<"Try Again!!";
							break;
	}
	
}
int a,b;
int sum()
{
	cout<<"Enter two number for addition ";
	cin>>a>>b;
	return (a+b);
}
int sub()
{
	cout<<"Enter two number for subtraction";
	cin>>a>>b;
	return (a-b);
}
int multi()
{
	cout<<"Enter two number for multiplication";
	cin>>a>>b;
	return (a*b);
}
int divi()
{
	cout<<"Enter two number for division ";
	cin>>a>>b;
	return (a/b);
}

int choice ;
 void scientific()
 {
 	cout<< "1.Power\n";
 	cout<<"2. Square Root\n";
 	cout<<"3. Maximum \n";
 	cout<<"4. Minimum \n";
 	cout<<"Enter your choice \n";
 	cin>>choice ;
 	switch(choice)
 	{
 		case 1:
 			 ans=power();
 			 cout<<"Result is \n"<<ans;
 			 break;
 		case 2:
 			 ans=root();
 			 cout<<"Result is \n"<<ans;
 			 break;
 		case 3:
 			 ans=maximum();
 			 cout<<"Result is \n"<<ans;
 			 break;
 		case 4:
 			 ans=minimum();
 			 cout<<"Result is \n"<<ans;
 			 break;
 		default:
		    cout<<"Try again\n";
			break;	 
	 }
 }
 int x,y;
 int power()
 {
 	cout<<"Enter any two number to calculate power ";
 	cin>>x>>y;
    return (pow(x,y));
 }
 int root()
 {
 	cout<<"Enter any  number to calculate square root ";
 	cin>>x;
    return (sqrt(x));
 }
 int maximum()
 {
 	cout<<"Enter any two number to find maximum";
 	cin>>x>>y;
   if( x>y)
   {
   	return x;
   }
   else
   {
   	return y;
   }
 }
  int minimum()
 {
 	cout<<"Enter any two number to find minimum";
 	cin>>x>>y;
   if( x>y)
   {
   	return y;
   }
   else
   {
   	return x;
   }
}

