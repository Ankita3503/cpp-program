// brute force approach approach 
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size \n";
    cin>>size;
    int a[size];
    cout<<" Array ka elements hai \n" ;
    for(int i=0;i<size;i++)
    cin>>a[i];

    cout<<"Subarray are :- \n";
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<a[k]<<" ";
            }
           cout<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
