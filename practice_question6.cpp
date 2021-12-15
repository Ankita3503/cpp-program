/* question
wap to print the area of a rectangle by creating a class named "area" having two functions.
first function named as "setdim" takes the length and bredth of the rectangle as parameters 
and the second function named as "getarea" returns the area of the rectangle .
length and bredth of the rectangle are entered through user*/

#include<iostream>
using namespace std;
class area
{
    public:
    int l,b,area;
    void setdim()
    {
           cout<<"enter the length of rectangle \n";
           cin>>l;
            cout<<"enter the breadth of rectangle \n";
           cin>>b;
           
    }
    int getarea()
    {
 area=l*b;
 return area;
    }
};
int main()
{
    area y;
    y.setdim();
  int ans= y.getarea();
cout<<"area of rectangle ="<<ans;
return 0;
}

