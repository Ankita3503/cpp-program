#include<iostream>
using namespace std;
int main()
{
    int m,n; // m->no. of row ,n->no. of column
    cout<<"enter the row and column \n";
    cin>>m>>n;
    int a[m][n];
    cout<<"enter the matrix \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int row[m],x=0;
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+a[i][j];
               // storing the sum of all row in an array
        }
              row[x++]=sum;
       
        // cout<<"row "<<i+1<<" sum = "<<sum<<"\n";
    }
    for(int i=0;i<m;i++)
    {
        cout<<row[i]<<"\n";
    }
   // finding the maximum number in a sum row
    int index;
     int max=row[0];
    for(int i=1;i<m;i++)
    {
        
        if(max < row[i])
        {
            max=row[i];
            index=i;
        }
    }
    cout<<" Row "<<index+1 <<" is having the maximum sum : "<<max;
    return 0;
}