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
 	cout<<"1. normal calculator\n";
 	cout<<" 2. scientific calculator\n";
 	cout<<"enter your choice \n";
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
						default:
							cout<<"try again!!";
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

int choice ;
 void scientific()
 {
 	cout<< "1.power\n";
 	cout<<"2. square root\n";
 	cout<<"3. maximum \n";
 	cout<<"4. minimum \n";
 	cout<<"enter your choice \n";
 	cin>>choice ;
 	switch(choice)
 	{
 		case 1:
 			 ans=power();
 			 cout<<"result is \n"<<ans;
 			 break;
 		case 2:
 			 ans=root();
 			 cout<<"result is \n"<<ans;
 			 break;
 		case 3:
 			 ans=maximum();
 			 cout<<"result is \n"<<ans;
 			 break;
 		case 4:
 			 ans=minimum();
 			 cout<<"result is \n"<<ans;
 			 break;
 		default:
		    cout<<"try again\n";
			break;	 
	 }
 }
 int x,y;
 int power()
 {
 	cout<<"enter any two number to calculate power";
 	cin>>x>>y;
    return (pow(x,y));
 }
 int root()
 {
 	cout<<"enter any  number to calculate square root ";
 	cin>>x;
    return (sqrt(x));
 }
 int maximum()
 {
 	cout<<"enter any two number to find maximum";
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
 	cout<<"enter any two number to find minimum";
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

