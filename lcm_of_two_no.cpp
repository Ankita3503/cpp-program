/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y,i,g,lcm;
    cout<<"enter any two \n";
    cin>>x>>y;
    for(i=1;i<=x&&i<=y;i++)
    {
       if(x%i==0&&y%i==0)
       {
           g=i;
       }
    }
       lcm=(x*y)/g;
       cout<<"lcm of two number is\n"<<lcm;
       return 0;
    }*/


    #include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y,i,g,lcm;
    cout<<"enter any two \n";
    cin>>x>>y;
    i=x>y?x:y;
    for(i=1;i<=x*y;i++)
    {
       if(i%x==0&&i%y==0)
       {
          break;
       }
    }
       
       cout<<"lcm of two number is\n"<<i;
       return 0;
    }