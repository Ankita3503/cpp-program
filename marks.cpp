#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int A,B,C,D,E,sum;
float per;
cout<<"ENTER ENGLISH MARKS:";
cin>>A;
cout<<"ENTER MATH MARKS:";
cin>>B;
cout<<"ENTER HINDI MARKS:";
cin>>C;
cout<<"ENTER SCIENCE MARKS:";
cin>>D;
cout<<"ENTER SST MARKS:";
cin>>E;
sum=A+B+C+D+E;
per=(sum*100)/500;
cout<<"TOTAL MARKS OBTAINED:"<<sum<<endl;
cout<<"PERCENTAGE: "<<per <<"%"<<endl;
getch();	
}
