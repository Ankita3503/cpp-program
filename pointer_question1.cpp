/* wap to print the address of a variable whose value is input from user */
#include<iostream>
using namespace std;
class pointer1
{
    public:
    int a;
    void in()
    {
        cout<<"enter any number ";
        cin>>a;

        cout<<" address of a = "<<&a;
    }
};
int main()
{
    pointer1 ob;
    ob.in();
    return 0;
}
