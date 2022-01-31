#include<iostream>
using namespace std;
void fun(int *p ,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<*p<<"\n";
        p++;
    }
}
int main()
{
    int arr[5];
    cout<<"enter the 5 elements of array";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    fun(arr,5) ; 
    return 0;
}