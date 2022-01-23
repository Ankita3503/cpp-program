/*   find smallest number using friend function */

#include<iostream>
using namespace std;
class small
{
    int n1,n2;
    friend int smallnumber(small);
    public:
    void get_data()
    {
        cout<<"enter the number ";
        cin>>n1>>n2;
    }
};
int smallnumber(small ob)
{
  if(ob.n1>ob.n2)
  {
      return ob.n2;
  }  
  else
  {
      return ob.n1;
  }
}
int main()
{
  small ob1;
  ob1.get_data();
  cout<<"small number = "<<smallnumber(ob1);
  return 0;
}
