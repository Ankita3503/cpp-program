// brute force approach approach 
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<stdlib.h>
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
    int current=0;
    int max_till_now=0;
    cout<<" maximum subarray sum are :- \n";
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