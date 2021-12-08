    /* 2^1+2^2+2^3+2^4+2^5  print this pattern and and show answer*/
	#include<iostream>
using namespace std;
class a
{
   
    public:
    
    int fun(int x,int y)
    {
    	
        int  i,res=1;
      for(i=1;i<=y;i++)
        {                
           res=res*x;
        }
       return (res);
    }
 
    
  
};
int main()
{
    a o;
    int s,sum=0;
 for(s=1;s<=5;s++)
 {       
   int  d=o.fun(2,s);
   sum=sum+d;
 }
    cout<<sum;
   return 0;
}
