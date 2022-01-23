#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int T;
    int num;
    int last;
    int  first;
 
    int count=0;
    cin>>T;
    while(T--)
    {
        cin>>num;
        int t=num;
        while(num>0)
        {
            count++;
            num=num/10;
        }
        num=t;
        last=num%10;
        first=num/(pow(10,count-1));
        cout<<last<<first<<"\n";
        count=0;
    }
    return 0;
}