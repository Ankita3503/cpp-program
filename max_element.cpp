/* array */
/* find maximum element in a array*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,size,max;
    cout<<"Enter the size=";
    cin>>size;
     int a[size];
    cout<<"Enter the elements\n";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    // Max is a  DATA member variable
    max=a[0];
    for(i=0;i<size;i++)
    {
    if(max<a[i])
    {
        max=a[i];
    }
    }
    cout<<"Max element is \n"<<max;
    return 0;
}
