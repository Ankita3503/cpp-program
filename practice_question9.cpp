/* print the sum ,difference and product of two complex numbers by creating a class named complex with separate functions 
whose real and imaginary parts are entered by user*/

#include<iostream>
using namespace std;
class complex{
int r1,r2,i1,i2,a,im;
public:
void take()
{
cout<<"enter the real part of first complex number =";
cin>>r1>>r2;
cout<<"enter the imaginary part of first complex number =";
cin>>i1>>i2;
}
void show()
{
    cout<<" first complex number= "<<r1<<"+"<<i1<<"i"<<endl;
    cout<<" second complex number= "<<r2<<"+"<<i2<<"i"<<endl;
}
void add()
{
   a=r1+r2;
   im=i1+i2;
   cout<<"addition of two complex number= "<<a<<"+"<<im<<"i"<<endl;
}
void sub()
{
   a=r1-r2;
   im=i1-i2;
   cout<<"addition of two complex number= "<<a<<"+"<<im<<"i"<<endl;
}
void mul()
{
   a=r1*r2;
   im=i1*i2;
   cout<<"addition of two complex number= "<<a<<"+"<<im<<"i"<<endl;
}
};
int main()
{
    complex ob;
    ob.take();
    ob.show();
    ob.add();
    ob.sub();
    ob.mul();
    return 0;
}