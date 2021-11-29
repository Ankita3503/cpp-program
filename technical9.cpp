
/*find the max and min  elements in each row and column of array*/

#include<iostream>
using namespace std;
int main()
{
    int row,column,i,j,min;
    cout<<"enter the size of row and column";
    cin>>row>>column;
     int a[row][column];
    cout<<"enter the elements";
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"matrix representation of array\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"converted form \n";
 /*for(j=0;j<column;j++)
 {
 for(i=row-1;i>=0;i--)
     {
         cout<<a[i][j]<<"\t"; 
     }
     
     cout<<"\n";
 }*/
 int c[row][column];

 for(j=0;j<column;j++)
 {
 for(i=row-1;i>=0;i--)
     {
         c[i][j]=a[i][j]; 
     }
     
     cout<<"\n";
 }
 for(j=0;j<column;j++)
 {
 for(i=row-1;i>=0;i--)
     {
        cout<<c[i][j]<<"\t"; 
     }
     
     cout<<"\n";
 }
 


 return 0;
}

 