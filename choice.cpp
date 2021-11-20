#include<iostream>
#define $ 3.14
#include<conio.h>
using namespace std;
int  main()
{
int a,l,b,area,h,base,r;
cout<<"Enter your choice=";
cin>>a;
if(a==1)
     {
     cout<<"\n area of rectangle";
	 cout<<"\n enter the length  of  rectangle=";
	 cin>>l;
	 cout<<"\n enter the breadth  of  rectangle=";
	 cin>>b;
	 area=l*b;
	 cout<<"\n area of  rectangle"<<area;	
	 }
	 if (a==2)
	 {
	 cout<<	"\n area of triangle";
	 cout<<"\n enter the height of  triangle";
	 cin>>h;
	 cout<<"\n enter the  base of  triangle";
	 cin>>base;
	 area=h*base;
	 cout<<"\n area of  triangle"<<area;	
	 }
	  else if(a==3)
	 {
	 cout<<"\n area of circle";
	 cout<<"\n enter the radius of circle=";
	 cin>>r;
	 area=$*r*r;
	 cout<<"\n area of  circle="<<area;	
	 }
	 else if(a<4)
	 {
	 cout<<"please try again";	
	 }	
getch();
}
	
		

