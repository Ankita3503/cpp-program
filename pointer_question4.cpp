/* wap to find out the greatest and smallest among three numbers using pointers */
#include<iostream>
using namespace std;
class pointer4
{
   public:
   void indata(int *a ,int *b,int *c)
   { 
       if(*a>*b && *a>*c)
       {
           cout<<"A is greater"<<*a;
       }
       else if( *b>*a && *b > *c )
       {
          cout<<"B is greater"<<*b;
       }
       else{
           cout<<"C is greater "<<*c;
       }

   }
};
int main()
{
    pointer4 ob;
    int x=19,y=98,z=2;
    ob.indata(&x,&y,&z);
    return 0;
}