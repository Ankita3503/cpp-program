#include<iostream>
using namespace std;
 inline int sum(int a,int b)
{
   return a+b;
}
int main()
{
	int a,b;
	cin>>a>>b;
    int ans=sum(a,b);
    cout<<ans;
}
/* inline function compilation time reduce kar deta hai 
    inline function small code ke liye hai like simple addition,multiplication .  */
    
