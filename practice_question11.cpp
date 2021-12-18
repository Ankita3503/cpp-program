/* wap that would print the information (name,year of joining ,salary,address) of three employees by creating a class 
named employee . the output should be as follows :
name  year of joining  address
robert   1994           64C- wallsStreet
sam       2000              68D-wallsStreet
john        1999             26B-wallsStreet  */

#include<iostream>
using namespace std;
class employee
{
   public:
   string name1,add;
    int year1;
    void a()
    {
         cout<<"Name"<<"\t"<<"Year of joining"<<"\t"<<"Address"<<"\n";
    }
   void  show(string name1,int year1,string add)
   {
        cout<<name1<<"\t"<<year1<<"\t"<<add<<"\n";

   }
};
int main()
{
    employee obj;
      obj.a();
      obj.show("Robert",1994,"64C-wallsStreet");
 obj.show("Sam",2000,"68D-wallsStreet");
  obj.show("john",1999,"26B-wallsStreet");
  return 0;
    
    
}
