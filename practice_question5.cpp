/* question
/* wap to print the area of two rectangles having sides(4,5) and (5,8) respectively by creating 
a class named "rectangle" with a function named "area" which returns the area .
length and breadth are passed as parameters to its constructor*/

#include<iostream>
using namespace std;
class  rectangle
{
    public:
    int x,y,a;
    rectangle(int l,int b)
    {
       x=l;
       y=b;
    }
   int area ()
   {
     a=x*y; 
     return a; 
   }
};
int main()
{
    rectangle ob(4,5);
     int ans=ob.area();
     cout<<"area"<<ans; 
         return 0;
}