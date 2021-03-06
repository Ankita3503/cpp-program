#include<iostream>
using namespace std;
class Solution 
{
public:
    int search(vector<int>& nums, int target)
    {
        int low=0;
        int high=nums.size() -1;
        int mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return -1;
    }
};
int main()
{
  Solution ob;
 int nums = [-1,0,3,5,9,12];
  int target = 2;
 cout<< ob.search(nums,target);
  return 0;
}
