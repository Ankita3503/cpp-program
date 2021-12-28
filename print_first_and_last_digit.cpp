#include<iostream>
using namespace std;
class number
{
    public:
    int num,last ,sum=0;
    void indata()
    {
        cout<<"Enter any number ";
        cin>>num;
    }
    int  calculate1()
    {
        last=num%10;
        return last;
    }      
     int  calculate2()
     {
         while(num>10)  
         {
             num=num/10;
         } 
    return num;
     }
};
int main()
{
    number ob;
    ob.indata();
    int y=ob.calculate1();
    cout<<"Last digit of a number ="<<y<<"\n";
    int a=ob.calculate2();
    cout<<"First digit of a number ="<<a;
    return 0;
}