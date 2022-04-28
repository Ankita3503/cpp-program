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
    int max_sum=0;
    cout<<" maximum subarray sum are :- \n";
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
              {
                sum=sum+a[k];
            }
          max_sum=max(max_sum,sum);
        }
        
    }
    cout<<max_sum;
    return 0;
}