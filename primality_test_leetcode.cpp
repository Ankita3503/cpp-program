#include <iostream>
using namespace std;

int main() {
int T;
cin>>T;
while(T--)
{
    int num,i;
    cin>>num;
  
    for( i=2;i<num;i++)
    {
        if(num%i==0)
        {
           break;
        }
    }
        if(i==num)
        {
           cout<<"yes"<<"\n";
        }
        else
        {
          cout<<"no\n";
        }
}
	return 0;
}
