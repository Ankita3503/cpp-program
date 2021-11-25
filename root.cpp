#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
int a,a1,a2,a3,a4,a5,a6,a7,a8,sum,root;
cout<<"ENTER ANY FIVE DIGIT NUMBER:";
cin>>a;
a1=a/10000;
a2=a%10000;
a3=a2/1000;
a4=a2%1000;
a5=a4/100;
a6=a4%100;
a7=a6/10;
a8=a6%10; 	
sum=a1+a3+a5+a7+a8;
root=sqrt (sum);
cout<<"square root of sum of five digit:"<<root;
getch();
}

