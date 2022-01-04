#include<iostream>
using namespace std;
class peak_element
{
   public:
   void peakElement()
   {
       int size,i,index=0;
       cout<<"enter the size of array \n";
       cin>>size;
       int a[size];
       cout<<"Enter the elements of array\n";
       for( i=0;i<size;i++)
       {
           cin>>a[i];
       }
       cout<<"Elements of array are\n ";
       for( i=0;i<size;i++)
       {
           cout<<a[i]<<" ";
       }   
       cout<<"\n";
       int peak=a[0];
       for(i=1;i<size;i++)
       {
         if(a[i]>peak)
         {
           peak=a[i];
            index=i;
         }
       }
        cout<<"peak element is "<<peak<<" present at location "<<index+1;
   }
};
int main()
{
    peak_element ob;
    ob.peakElement();
    return 0;
}
