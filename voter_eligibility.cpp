#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age for  checking voting eligibility";
    cin>>age;
    if(age>=18)
    {
        cout<<"Congratulation you are eligible for voting!!!!!";
    }
    else
    {
        cout<<"you are not eligible for voting ";
    }
return 0;
}
