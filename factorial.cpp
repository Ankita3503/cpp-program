#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int num,factorial=1,t;
cout<<"Enter any number";
cin>>num;
t=num;
while(num>1)
    {
    factorial=factorial*num;
    num--;
    }	

cout<<"Factorial  of "<<t<<"="<<factorial;
return 0;
}
