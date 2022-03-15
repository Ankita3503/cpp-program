#include<iostream>
using namespace std;
class Solution {
public:
    int arraySign(vector<int>& nums)
    {
       double product = 1;
        for(int i=0;i<nums.size();i++)
        {
            product = product * nums[i];
        }
        
        if(product>0)
            return 1;
        else if(product<0)
            return -1;
        else
            return 0;
    }
};
int main()
{
  Solution ob;
   int nums = [-1,-2,-3,-4,3,2,1];
  cout<<"sign of the product of array "<<ob.arraySign(nums);
  return 0;
}
