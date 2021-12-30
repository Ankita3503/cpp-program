/* wap to print the value of the address of the pointer to a variable whose value is input from user */
#include<iostream>
using namespace std;
class pointer2
{
    public:
    int a;
    int *b=&a;  //(* iska matlab value at address)
    void in()
    {
        cout<<"enter any number ";
        cin>>a;

        cout<<" address of a  variable = "<<&b;
    }
};
int main()
{
    pointer2 ob;
    ob.in();
    return 0;
}
