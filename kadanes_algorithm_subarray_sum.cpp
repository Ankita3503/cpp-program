// brute force approach approach 
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<stdlib.h>
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
    int current=0;
    int max_till_now=0;
    cout<<" Maximum subarray sum is :- \n";
    for(int i=0;i<size;i++)
    {
        current=current+a[i];
        if(current<0)
        {
            current=0;
        }   
        max_till_now = max(current,max_till_now) ;
    }
    cout<<max_till_now;
   
    return 0;
}
