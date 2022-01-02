#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int T,i;
cin>>T;
while(T--)
{
     double q,p,price;
     cin>>q>>p; 
       if(q>1000)
        {
          price=(p*q)-(p*q*0.1);
        }
        else
         {
          price=q*p;
          }

         cout<<fixed<<setprecision(6)<<price<<"\n";
}
	return 0;
}