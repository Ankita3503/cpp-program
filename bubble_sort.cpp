#include<iostream>
using namespace std;
int main()
{
    int i,a[15],t,x,y;
    cout<<"Enter any ten number";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(x=0;x<10;x++)
    {
        for(y=x+1;y<10;y++)
        {
            if(a[y]>a[x])
            {
                t=a[x];
                a[x]=a[y];
                a[y]=t;

            }
        }
    }

for(y=0;y<10;y++)
    {
        cout<<a[y];
    }
 return 0;
}
