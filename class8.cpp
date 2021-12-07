#include<iostream>
using namespace std;
class a
{ int x;
   
    public:
    
    int  fun(int x)
    {
        int  fact=1,i;
      for(i=x;i>0;i--)
        {                
           fact=fact*i;
        }
        return (fact);
   }
};
int main()
{
    a o;
   int sum=0;  
   for( int s=1;s<=5;s++)
   {    
 int  res =o.fun(s);
 sum=sum+res;
}
 
 cout<<"sum="<<sum;
    return 0;
}
