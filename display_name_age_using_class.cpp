/* dispaly name and age using class and declare outside the class*/
#include<iostream>
using namespace std;
class info
{
    char name[50];
   int age;
   public:
  // char name[50];
   //int age;
   void get();
   void display();
};
void  info::get()
{
    cout<<"enter your name \n";
    cin>>name;
    cout<<"enter your age \n";
    cin>>age;
}
void  info :: display()
{
    cout<<"name-"<<name<<"\n";
    cout<<"age-"<<age;
}
int main()
{
    info ob;
    ob.get();
    ob.display();
    return 0;
}