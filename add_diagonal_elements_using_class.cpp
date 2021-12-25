#include<iostream>
using namespace std;
class matrix
{
    int size,sum=0,i,j;
    public:
   // int a[size][size];
    void insize()
    {

        cout<<"enter the size  of square matrix";
        cin>>size;

    }
 
 
    int  take_matrix()
    {
        int a[size][size];
        cout<<"enter the elements of matrix \n";
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                cin>>a[i][j];
            }
        }

        
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }

        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                if(i==j)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        return sum;
    }
   
};
int main()
{
    matrix  ob;
    ob.insize();
   int y= ob.take_matrix();
   cout<<"sum of diagonal elements of a given matrix ="<<y;
return 0;
}