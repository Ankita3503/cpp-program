#include<iostream>
using namespace std;
int main()
{
    int i,j;
for(i=0;i<6;i++)
{
    for(j=0;j<6;j++)
    {
        if(j<6-i)
        {
        cout<<"*";
        }
    }
    cout<<"\n";
}
    return 0;
}