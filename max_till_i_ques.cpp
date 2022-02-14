#include<iostream>
using namespace std;
int main()
{
   int n,mx=-200;
   cout<<"enter the size of array ";
   cin>>n;
   int a[n];
   cout<<"enter the elements of array ";
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   } 
   for(int i=0;i<n;i++)
   {
       mx=max(mx,a[i]);
       cout<<mx<<" ";
   }
  
   return 0;
}