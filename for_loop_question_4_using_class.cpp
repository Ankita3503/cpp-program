/*  wap to print the lower and upper triangle of a square matrix  */

#include<iostream>
using namespace std;
class matrix1
{
    public:
    int size,i,j;
    //int a[size][size];
    void size1()
    {
        cout<<"enter the size of  the  square matrix ";
        cin>>size;
        int a[size][size];  

        cout<<"enter the elements of matrix";
        for(i=0;i<size;i++)
        {
             for(j=0;j<size;j++)
             {
                 cin>>a[i][j];
             }
        }

        cout<<"matrix\n";
         for(i=0;i<size;i++)
        {
             for(j=0;j<size;j++)
             {
                 cout<<a[i][j];
             }
             cout<<"\n";
        }

         cout<<"printing the upper triangle of a matrix\n";
          for(i=0;i<size;i++)
        {
              for(j=0;j<size;j++)
               {
                   if(j<i)
                   {
                 cout<<"0";
                   }
                   else
                   {
                       cout<<a[i][j];
                   }
               }
              cout<<"\n";
        }
         
         
         cout<<"printing the lower triangle of a matrix\n";
          for(i=0;i<size;i++)
        {
              for(j=0;j<size;j++)
               {
                   if(i<j)
                   {
                 cout<<"0";
                   }
                   else
                   {
                       cout<<a[i][j];
                   }
               }
              cout<<"\n";
        }
    }     
};
int main()
{
   matrix1  object;
  object.size1();
   return 0;
}
    

    