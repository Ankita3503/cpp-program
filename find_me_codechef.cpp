#include <iostream>
using namespace std;

int main() {
   int n,item,i,count=0;

   
   cin>>n>>item;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
       if(item==a[i])
       {
          count=1;
          break;
       }
   }
   if(count==1)
   {
       cout<<"1";
   }
   else
   {
       cout<<"-1";
   }
 return 0;
}
