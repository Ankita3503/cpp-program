#include<iostream>
using namespace std;
class a
{
   
    public:
    
    void fun(int x,int y)
    {
        int  i,res=1;
      for(i=x;i<=y;)
        {                
           res=res*i;
        }
        cout<<"power="<<res;
    }
 
    

};
int main()
{
    a o;
    int a=5,b=7;         //ye a =5 jo hai usse hum sirf main ke ander hi use kar sakte hai             
           //isse hum class ke ander use nhi kar sakte
    o.fun(a,b);
 
    return 0;
}