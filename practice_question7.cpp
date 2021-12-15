/* wap to print the area of  a rectangle by creating a class named "area" taking the values of its length and breadth 
as parameter of its constructor and having a function named "returnarea" which returns the area of rectangle .
length and breadth of the rectangle are entered through user */


#include<iostream>
using namespace std;
class area
{
    public:
    int area1,l,b;
    area()
    {
       cout<<"enter the length of rectangle";
       cin>>l;
       cout<<"enter the breadth of rectangle";
       cin>>b;
    } 
    int returnarea()
    {
      area1=l*b;
      return area1;
    } 
};
int main()
{
    area y;
    int res= y.returnarea();
    cout<<"area of rectangle ="<<res;
    return 0;
}