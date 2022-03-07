#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int dsa1,toc1,dm1,dsa2,toc2,dm2;
	    cin>>dsa1>>toc1>>dm1;
	       cin>>dsa2>>toc2>>dm2;
	       if(dsa1+toc1+dm1  > dsa2+toc2+dm2)
	       {
	           cout<<"DRAGON\n";
	           
	       }
	      else if(dsa1+toc1+dm1  < dsa2+toc2+dm2)
	       {
	           cout<<"SLOTH\n";
	           
	       }
	       else if(dsa1+toc1+dm1 == dsa2+toc2+dm2)
	       {
	           if(dsa1>dsa2)
	           {
	               cout<<"DRAGON\n";
	           }
	           else if(dsa1<dsa2)
	           {
	               cout<<"SLOTH\n";
	           }
	           else if(dsa1==dsa2)
	           {
	               if(toc1>toc2)
	               {
	                   cout<<"DRAGON\n";
	               }
	               else if(toc1<toc2)
	               {
	                   cout<<"SLOTH\n";
	               }
	               else
	               {
	                   cout<<"TIE\n";
	               }
	           }
	       }
	}
	return 0;
}
