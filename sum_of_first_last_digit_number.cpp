#include <iostream>
using namespace std;

int main() {
   int T,num,last,first,sum,t;
   cin>>T;
   while(T--)
   {
       cin>>num;
        t=num;
        last=num%10;
        while(t>10)
        {    
            t=t/10;
        }
        sum=last+t;
        cout<<sum;
        cout<<"\n";
        sum=0;
   }
	return 0;
}
