#include<iostream>
using namespace std;
class max_min
{
    public:
    int size,i,max,min,index1=0,index2=0;
    void minmax()
    {
        cout<<"Enter the size of array\n";
        cin>>size;
        int a[size];
        cout<<"enter the elements of array\n";
        for(i=0;i<size;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<size;i++)
        {
            cout<<a[i]<<" ";
        }
          cout<<"\n";
        
        cout<<"\n";
        min=a[0];
        for(i=1;i<size;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
               index1 =i;
                
            }
        }
         cout<<"minimum element is"<<min<<" present at location "<<index1+1<<"\n";

          max=a[0];
       for(i=1;i<size;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                index2=i;
                  
            }
        }
        cout<<"maximum element is "<<max<<" present at location "<<index2+1;
    }
};
int main()
{
    max_min ob;
    ob.minmax();
    return 0;
}