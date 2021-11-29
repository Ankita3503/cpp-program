
/*find the max and min  elements in each row and column of array*/

#include<iostream>
using namespace std;
int main()
{
    int row,column,i,j;
    
    cout<<"enter the size of row and column";
    cin>>row>>column;
     char a[row][column];
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
 
 for(i=0;i<row;i++)
     {
         for(j=0;j<column;j++)
         {
             if(i==0||i==row-1||j==0||j==column-1)
            {
                cout<<a[i][j]; 
            }
            else
            {
                cout<<" ";
            }
         }
        cout<<"\n";
    }

    return 0;
}

 