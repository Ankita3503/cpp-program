/*counting the number of digits in a given number */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0,r,count=0,t;
    cout<<"Enter any number  to  count  number of digits";
    cin>>n;

    while(n>0)
    {
       
       count++;
       n=n/10;
    }
    cout<<"No. of digits="<<count;
    return 0;
}
