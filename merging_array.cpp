#include<iostream>
using namespace std;
int main()
{
    int size1,i,k;
    cout<<"enter the size of first array";
    cin>>size1;
    int a[size1];
    cout<<"enter the elements of first array";
    for(i=0;i<size1;i++)
    {
        cin>>a[i];
    }

    int size2,j;
    cout<<"enter the size of second  array";
    cin>>size2;
    int b[size2];
    cout<<"enter the elements of second  array";
    for(j=0;j<size2;j++)
    {
        cin>>b[j];
    }
int c[size1+size2];
for(i=0;i<size1;i++)
{
    c[i]=a[i];
}
for(j=0;j<size2;j++)
{
    c[size1+j]=b[j];
}
cout<<"\n";
for(k=0;k<(size1+size2);k++)
{
    cout<<c[k]<<"\t";
}
return 0;
}