/*wap to print the volume of a box by creating a class named "volume " with an initialization list to initialize its length 
breadth and height.*/
#include<iostream>
using namespace std;
class volume
{
  public:
  int res;
  int  box( int l,int b,int h)
    {
       res=l*b*h;
       return res;
    }
};

int main()
{
    volume y;
    int a=y.box(2,7,9);
    cout<<"volume of box="<<a;
    return 0;
}