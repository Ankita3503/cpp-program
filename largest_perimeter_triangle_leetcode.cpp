#include<iostream>
using namespace std;
class Solution
{
public:
    int largestPerimeter(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=2;i--)
        if(nums[i] < nums[i-1] + nums[i-2])
        return nums[i] + nums[i-1] + nums[i-2];
        return 0;
    }   
};
int main()
{
  Solution ob;
  int nums[]={1,2,1};
 cout<< ob.largestPerimeter(nums);
  return 0;
}
