/*   friend function simple program to add two number in one class */

#include<iostream>
using namespace std;
class add
{
    int a,b;
    public:
    void data(int x,int y)
    {
        a=x;
        b=y;
    }
    friend void  result(add);
};
void result(add object)
{
    cout<<"sum of "<<object.a<<" and "<<object.b<<"= "<<object.a+object.b;
}
int main()
{
    add n;
    n.data(3,9);
    result(n);
    return 0;
}