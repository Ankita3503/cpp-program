/* quetion
/*write a program to print the area and perimeter of a triangle having sides of 3,4,5 units
by creating a class named "triangle" with the constructor having the three sides as its parameters*/


#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
    public:
    int p,a,s;
    triangle( int x,int y,int z)
    {
p=x+y+z;
   cout<<"perimeter of triangle="<<p<<"\n";
   s=(x+y+z)/2;
a=sqrt(s*(s-x)*(s-y)*(s-z));
  cout<<"area of triangle="<<a;
    }
  
};
int main()
{
    triangle ob(3,4,5);

    return 0;
}