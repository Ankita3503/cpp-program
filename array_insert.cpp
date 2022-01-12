/* insert an element in a array at the end of array */

#include<iostream>
using namespace std;
int main()
{
    int  size,item,i;
    cout<<"Enter the size of array : ";
    cin>>size;
    int a[size];
    cout<<"Enter the elements of array\n";
    for( i=0;i<size-1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be inserted= ";
    cin>>item;
    a[size]=item;
    cout<<"New array : \n";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
