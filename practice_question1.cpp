/* question 
/* create a class named 'student' with a string variable 'roll_no'. assign the value of roll_no as 2 and that of name
/* john by creating an object of the class student*/

#include<iostream>
using namespace std;
class student
{
    public:
     int x;
     string n;
     void show(int x, string n )
     {
        cout<<"Name -"<<n;
        cout<<"Roll  no -"<<x;
     } 
};
int main()
{
    student ob;
    ob.show(2,"john");
   return 0;
}