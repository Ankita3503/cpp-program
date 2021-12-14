/* question
/* assign and print the roll number ,phone  numbere and address of two students having names "sam"
/*   and "john" respectively by creating two objects of the class "student"*/

#include<iostream>
using namespace std;
class student
{
    public:
    int roll_no;
    long int  ph;
    string name; 
};
int main()
{
    student ob1,ob2;
    ob1.name ="sam";
    ob1.roll_no=1;
    ob1.ph=89177;
    cout<<"Name-"<<ob1.name<<endl ;
    cout<<"roll_no.-"<<ob1.roll_no<<"\n";
    cout<<"phone number-"<<ob1.ph<<"\n";
     ob2.name ="john";
    ob2.roll_no=2;
    ob2.ph=83779;
    cout<<"Name-"<<ob2.name<<endl ;
    cout<<"roll_no.-"<<ob2.roll_no<<"\n";
    cout<<"phone number-"<<ob2.ph;
    return 0;
}