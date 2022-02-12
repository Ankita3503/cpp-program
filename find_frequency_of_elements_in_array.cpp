//  find the frequency of  repeated elements in an array

#include<iostream>
using namespace std;
int main()
{
    int size,i,j;
    cout<<"enter the size of array  ";
    cin>>size;
    int a[size];
    int dup[size];
    cout<<"enter the elements of array \n";
    for( i=0;i<size;i++)
    {
        cin>>a[i];
        dup[i]=-1;
    }
    for( i=0;i<size;i++)
    {
        int count=1;

    for(j=i+1;j<size;j++)
    {   
        if(a[i]==a[j])
        {
            count++;
            dup[j]=0;
        }
    }
   
    if(dup[i]!=0) 
    {
        dup[i]=count;
    }
    }
    cout<<"\n";
//cout<<"unique elements are : \t";
for(int i=0;i<size;i++)
{
   // if(dup[i]!=0)
    //{
        cout<<a[i]<<"comes "<<" "<<dup[i]<<endl;
   // }
}
/*cout<<"Repeated elements are : \t";
for(int i=0;i<size;i++)
{
    if(dup[i])
    {
        cout<<a[i]<<" ";
    }
}*/
return 0;
}