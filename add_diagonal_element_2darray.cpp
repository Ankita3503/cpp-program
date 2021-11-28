#include<iostream>
using namespace std;
int main()
{
    int i,j ,row,column;
    cout<<"enter the no of row and column";
    cin>>row>>column;
    cout<<"enter the elements of 2d array";
    int a[row][column];
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cin>>a[i][j];
        }
    }
    if(row==column)
    {
    cout<<"matix representation of 2d array\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
        cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    }
    int sum=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
        if(i+j==row-1)//if(i==j)
        {
            sum=sum+a[i][j];
        }
        }
    }
    cout<<"sum of diagonal element="<<sum;
    
  return 0;
}