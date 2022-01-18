#include<iostream>
#include<array>
using namespace std;
int main()
{
    int a[]={2,2,2,2,3,5,6,3,2};
    int f[]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
   for(int  i=0;i<(end(a)-begin(a));i++)
   {
        int count =1;
       for(int j=i+1;j<(end(a)-begin(a));j++)
       {
           if(a[i]==a[j])
           {
               count++;
                f[j]=0;
           }
           
       } 
   
      if(f[i]!=0)
      {
       f[i]=count;
      }
    }
  for(int  i=0;i<(end(a)-begin(a));i++)
  {
      if(f[i]!=0)
      cout<<a[i]<<"comes "<<" "<<f[i]<<"times\n";
  }
   return 0;
}