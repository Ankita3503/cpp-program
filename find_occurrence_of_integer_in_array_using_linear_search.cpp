#include<iostream>
using namespace std;
class occurrence
{
    int size,i,n,count=0;
     public:
     void find_occurrence()
     {
         cout<<"enter the size of array\n";
         cin>>size;
         int a[size];
         cout<<"enter the elements of array\n";
           for(i=0;i<size;i++)
              {
             cin>>a[i];
              }
              cout<<"enter the integer to find the number of occurrence\n";
              cin>>n;
              for(i=0;i<size;i++)
              {
                  if(a[i]==n)
                  {
                      count++;
                  }
              } 
              cout<< n <<" has occurred "<<count<<" times ";   
     }

};
int main()
{
    occurrence ob;
    ob.find_occurrence();
    return 0;
}