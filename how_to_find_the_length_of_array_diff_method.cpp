/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    int a[]={2,2,2,2,3,5,6,3,2};
   cout<<"length of array="<<end(a)-begin(a);
   return 0;
}   */



/*different method */
#include<iostream>
#include<array>
using namespace std;
int main()
{
    int a[]={2,2,2,2,3,5,6,3,2,87,78};
   cout<<"length of array="<<sizeof(a)/sizeof(a[0]);
   return 0;
}