#include<iostream>
using namespace std;
class a
{
     int a,b;
    public:
    int z;
};
int main()
{
    a ob;
   // ob.a=5;// ye private declare kiya hua hai toh error dega
    //ob.b=5;// ye private declare kiya hua hai toh error dega
    ob.z=5;// ye nahi dega
    cout<<ob.z;
    return 0;
}