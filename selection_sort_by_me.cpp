#include<iostream>
using namespace std;
int main()
{
    int size,min,t;
    cout<<"enter the size of array\n";
    cin>>size;
    int a[size];
    cout<<"enter the elements of array \n";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    } 
    min=0;
    for(int j=0;j<size-1;j++)
    {
    for(int i=j+1;i<size;i++)
    {
        
         if(a[i]<a[j])
         {
             min=a[j];
             a[j]=a[i];
             a[i]=min;

         }
       
    }
     
    }

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}