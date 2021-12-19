/* delete any element in a array from any position   */

#include<iostream>
using namespace std;
int main()
{
    int  size,i,pos;
    cout<<"enter the size of array";
    cin>>size;
    int a[size];
    cout<<"enter the element of array";
    for( i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the position  where item is to be deleted =";
    cin>>pos;
   
   for(i=pos-1;i<size;i++)
       {
     a[i]=a[i+1];
       }
     
    cout<<"new array :-\n";
    for(i=0;i<size-1;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}