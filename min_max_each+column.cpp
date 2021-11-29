
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
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
  cout<<"maximun element from each column\n";
    
    for(i=0;i<row;i++)
    {
        min=a[0][i];
      for(j=column-1;j>=0;j--)
     {
        if(min>a[i][j])
        {
            min=a[i][j];
        }
      }
      cout<<min<<"\n";
    }
 return 0;
}
