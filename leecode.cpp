#include<iostream>
using namespace std;
class Solution 
{
public:
    int subtractProductAndSum(int n) 
    {
        int sum=0;
        int product=1;
       while(n>0)
       {
       	int r=n%10;
           product=product * r;
           sum=sum + r;
           n = n/10;
      }
        cout<<product<<" "<<sum;
       
    }
};
main()
{
	Solution ob;
	ob.subtractProductAndSum(4421) ;
	return 0;
}
