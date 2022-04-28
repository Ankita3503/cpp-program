// brute force approach approach 
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size \n";
    cin>>size;
    int a[size];
    cout<<" array ka elemens \n" ;
    for(int i=0;i<size;i++)
    cin>>a[i];

    cout<<"subarray are :- \n";
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