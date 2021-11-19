#include<iostream>
using namespace std;
int main()
{
    int d,fine=0;
    cout<<"enter the no. of days\n";
    cin>>d;
    if(d<=5)
    {
        fine=d*1;
    }
    if(d>5&&d<=10)
    {
        fine=5+(d*2);
    }
    if(d>10&&d<=15)
    {
        fine=5+10+(d*5);
    }if(d>15)
    {
        fine=5+10+25+(d*10);
    }
    cout<<"fine"<<"="<<fine;
    return 0;
}