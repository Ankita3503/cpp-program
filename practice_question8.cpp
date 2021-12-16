/* print the average of three numbers entered by the user by creating a class named "average"having a function to calculate 
and print the average without creating any object of the average class  */

#include<iostream>
using namespace std;
class average 
{
 int a,b,c,av;
 public:
 
 average()
 {
     cout<<"enter any three number to calculate average \n";
     cin>>a>>b>>c;
     av=(a+b+c)/3;
     cout<<"average of three entered number ="<<av;
 }
};
int main()
{
    average yash;
    return 0;
}
