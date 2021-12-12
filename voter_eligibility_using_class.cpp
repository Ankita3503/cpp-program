#include<iostream>
using namespace std;
class vote
{
    int age;
    public:
    void check()
    {
        cout<<"Enter your age to check voting eligibility ";
        cin>>age;

    }
    void cal()
    {
        if(age>=18)
        {
            cout<<"CONGRATULATION you are eligible for voting";
        }
        else
        {
            cout<<"you are not eligible for voting";
        }
    }
};
int main()
{
    vote ob;
    ob.check();
    ob.cal();
    return 0;
}