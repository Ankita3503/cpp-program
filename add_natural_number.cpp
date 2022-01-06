#include<iostream>
using namespace std;
int main()
{
  int num,sum=0;
  cout<<"Enter the last number ";
  cin>>num;
  int i=1;
  while(i<=num)
  {
    sum=sum+i;
    i++;
  }
  cout<<"sum of natural number ="<<sum;
  return 0;
}
