#include<iostream>
using namespace std;
class a
{
    int y;
    public:
    
  /*  void fun(int x)
    {
        int  fact=1,i;
      for(i=x;i>0;i--)
        {                 // jab function call karte hai aur agar parameter pass karte hai
                           //toh main function ka argument aur function ka argument different hoga
         fact=fact*i;
        }
        cout<<"factorial="<<fact;
    }*/
 void fun()
    {
         int  fact=1,i;
        cout<<"enter any number";
        cin>>y;
      
      for(i=y;i>0;i--)
        {
         fact=fact*i;
        }
        cout<<"factorial="<<fact;
    }

};
int main()
{
    a o;
    int a=5;
  
   // o.fun(a);
   o.fun();
    return 0;
}