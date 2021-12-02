#include<iostream>
using namespace std;
 main()
{
    int i,j ,row,column;
    cout<<"enter the no of row and column";
    cin>>row>>column;
    cout<<"enter the elements of 2d array\n";
    int a[row][column];
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"matrix representation \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    cout<<"transpose of a matrix\n";
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
        cout<<a[j][i]<<"\t";
        }
       cout<<'\n';
        }
    return 0;
}
   
