
/*print the even and odd elements of array*/

#include<iostream>
using namespace std;
int main()
{
    int size,i,left[100],right[100],m=0,n=0;/*left[size],right[size]*/
    cout<<"enter the size";
    cin>>size;
     int a[size];
    cout<<"enter the elements";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        if(i%2==0)
        {
            left[m]=a[i];
            m++;
            
        }
        else{
            right[n]=a[i];
            n++;
        }
    }
    cout<<"even elements of array is:\n ";
    for(i=0;i<m;i++)
    {
 cout<<left[i]<<"\n";
    }
    cout<<"odd elements of array is: \n";
    for(i=0;i<n;i++)
    {
 cout<<right[i]<<"\n";
    }
 
 return 0;
}