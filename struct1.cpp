#include<iostream>
using namespace std;
struct employee
{
   char name[50];
   int age;
   int  salary;
   void take()
    {
    cout<<"enter your name \n";
    cin>>name;
    cout<<"enter your age \n";
    cin>>age;
    cout<<"enter your salary \n";
    cin>>salary; 
    } 
    void display()
    {
    cout<<"enter your name = "<<name<<endl;
   
    cout<<"enter your age = "<<age<<endl;
   
    cout<<"enter your salary "<<salary<<endl;
    
    }
};
int main()
{
    employee o;
    o.take();
    o.display();
    return 0;
}