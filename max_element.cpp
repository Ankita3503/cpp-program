/* array */
/* find maximum element in a array*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,size,max;
    cout<<"enter the size=";
    cin>>size;
     int a[size];
    cout<<"enter the elements\n";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<size;i++)
    {
    if(max<a[i])
    {
        max=a[i];
    }
    }
    cout<<"max element is \n"<<max;
    return 0;
}
