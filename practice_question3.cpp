/* quetion
/*write a program to print the area and perimeter of a triangle having sides of 3,4,5 units
by creating a class named "triangle" with the function to print area and perimeter*/


#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
    public:
    int p,a,s;
    int  cal1( int x,int y,int z)
    {
p=x+y+z;
    return p;
    }
    int  cal2( int x,int y,int z)
    {

s=(x+y+z)/2;
a=sqrt(s*(s-x)*(s-y)*(s-z));
    
    return a;
    }
};
int main()
{
    triangle ob;
   int  ans1=ob.cal1(3,4,5);
    cout<<"perimeter of triangle ="<<ans1<<"\n";
     int ans2=ob.cal2(3,4,5);
      cout<<"area of triangle ="<<ans2;
    return 0;
}