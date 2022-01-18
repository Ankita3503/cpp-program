#include<iostream>
#include<array>
using namespace std;
int main()
{
    int size,i;
    cout<<"enter the size of array= ";
    cin>>size;
    int a[size];
    int f[size];
    cout<<"enter the elements of array\n ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
        f[i]=-1;
    }
   for(int  i=0;i<size;i++)
   {
        int count=1;
       for(int j=i+1;j<size;j++)
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
  for(int  i=0;i<size;i++)
  {
     // if(f[i]!=0)
      cout<<a[i]<<"comes "<<" "<<f[i]<<"times\n";
  }
   return 0;
}