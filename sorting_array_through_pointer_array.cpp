#include<iostream>
using namespace std;
void fun(int *p ,int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
       for(j=i+1;j<size;j++)
       {
            if(*(p+i)>*(p+j))
            {
             int t=*(p+i);
             *(p+i)=*(p+j);
             *(p+j)=t;
            }
       }
    }
}
int main()
{
    int arr[5],i;
    cout<<"enter the 5 elements of array";
    for( i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    fun(arr,5) ; 
    for(i=0;i<5;i++)
    {
    cout<<arr[i]<<" ";
    }
    return 0;
}