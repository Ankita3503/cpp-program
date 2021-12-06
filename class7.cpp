#include<iostream>
using namespace std;
class a
{ int x;
   
    public:
    
    int  fun()
    {
    	cout<<"enter number";
    	cin>>x;
    
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
 int  res =o.fun();
 sum=sum+res;

   res =o.fun();
   sum=sum+res;

   res =o.fun();
   sum=sum+res;

   res =o.fun();
   sum=sum+res;

   res =o.fun();
 sum=sum+res;
 cout<<"sum="<<sum;
    return 0;
}
