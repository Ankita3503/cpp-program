/* delete  an element from the beginning of  array   */

#include<iostream>
using namespace std;
int main()
{
    int  size,item,i;
    cout<<"enter the size of array";
    cin>>size;
    int a[size];
    cout<<"enter the element of array";
    for( i=0;i<size;i++)
    {
        cin>>a[i];
    }
   
   for(i=1;i<size;i++)
       {
     a[i-1]=a[i];
       }
       
    cout<<"new array :-\n";
    for(i=0;i<size-1;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}