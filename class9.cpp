#include<iostream>
using namespace std;
class a
{ 
   
    public:
    int fun(int x)
    {
    int  fact=1,i;
      for(i=x;i>0;i--)
        {                
           fact= fact*i;
        }
        return (fact);
   }
};
int main()
{
    a o;
  int  sum=0;  
   for( int s=1;s<=5;s++)
   {    
 int  res =o.fun(s);
  float t=s/res;
 sum=sum+t;
}
 
 cout<<"sum="<<sum;
    return 0;
}
