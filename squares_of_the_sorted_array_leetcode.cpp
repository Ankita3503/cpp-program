#include<iostream>
using namespace std;
class Solution 
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        for(int i=0;i<nums.size();i++)
    {
        nums[i]=nums[i]*nums[i];
    }
    sort(nums.begin(),nums.end());
    return nums;
    }
};
int main()
{
  Solution ob;
  int nums = [-7,-3,2,3,11];
 cout<< ob.sortedSquares(nums);
  return 0;
}
