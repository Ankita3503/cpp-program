#include <iostream>
using namespace std;

int main() {
int N;
int count=0;
cin>>N;
while(N>0)
{
    count++;
    N=N/10;
}
  if(count==1)
  {
      cout<<"1\n";
  }
  else if(count==2)
  {
      cout<<"2\n";
  }
  else if(count==3)
  {
      cout<<"3\n";
  }
  else
  {
      cout<<"More than 3 digits\n";
  }
	return 0;
}
