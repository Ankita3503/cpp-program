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
	 cout<<"\n Enter the length  of  rectangle=";
	 cin>>l;
	 cout<<"\n Enter the breadth  of  rectangle=";
	 cin>>b;
	 area=l*b;
	 cout<<"\n Area of  rectangle"<<area;	
	 }
	 if (a==2)
	 {
	 cout<<	"\n Area of triangle";
	 cout<<"\n Enter the height of  triangle";
	 cin>>h;
	 cout<<"\n Enter the  base of  triangle";
	 cin>>base;
	 area=h*base;
	 cout<<"\n Area of  triangle"<<area;	
	 }
	  else if(a==3)
	 {
	 cout<<"\n Area of circle";
	 cout<<"\n Enter the radius of circle=";
	 cin>>r;
	 area=$*r*r;
	 cout<<"\n area of  circle="<<area;	
	 }
	 else if(a<4)
	 {
	 cout<<"Please try again";	
	 }	
getch();
}
	
		

