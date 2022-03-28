#include<iostream>
using namespace std;
//this is the main function
int main()
{
    int i,j ,a[3][3],b[3][3],c[3][3];
    cout<<"enter the elements of  3*3 matrix \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"matix A=  \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
     cout<<"enter the elements of 3*3 matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"matix B= \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"matrix addition \n";
 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<"\t";
        }
     cout<<"\n";
    }
return 0;
}
