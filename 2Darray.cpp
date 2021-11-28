#include<iostream>
using namespace std;
int main()
{
    int i,j ,a[3][3];
    cout<<"enter the elements of 2d array";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"matix representation of 2d array\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
return 0;
}