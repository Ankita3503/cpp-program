#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a,factorial=1;
cout<<"enter any number";
cin>>a;
while(a>1)
    {
    factorial=	factorial*a;
    a--;
	}	

	cout<<"this is factorial number"<<factorial;
	getch();
}
