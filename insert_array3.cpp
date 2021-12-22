/* insert an element in a array   at any position   of array */

#include<iostream>
using namespace std;
int main()
{
    int  size,item,i,pos;
    cout<<"enter the size of array\n";
    cin>>size;
    int a[size];
    cout<<"Enter the element of array\n";
    for( i=0;i<size-1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be inserted = ";
    cin>>item;
    cout<<"Enter the position where item is to be instered\n ";
    cin>>pos;
   for(i=size;i>=pos;i--)
       {
     a[i]=a[i-1];
       }
       a[pos-1]=item;
    cout<<"New array :-\n";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}
