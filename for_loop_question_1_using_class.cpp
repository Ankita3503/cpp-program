/*   wap to find the length of a number   ( count the number of digits) */ 

#include<iostream>
using namespace std;
class find_digit
{
    int num,count=0;
  public:
  void get()
  {
      cout<<"enter any number and count how many digits are present ";
      cin>>num;
  }
   int count_digit()
   {
       while(num>0)
       {
      count++;
      num=num/10;
       }
      return  count;
   }
};
int main()
{
    find_digit ob;
    ob.get();
     int result=ob.count_digit();
     cout<<"number of digit ="<<result;
     return 0;
}
