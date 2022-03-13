#include<iostream>
using namespace std;
int searchInsert(int* nums, int numsSize, int target)
{
for(int i = 0;i<numsSize;i++)  
{
        if(nums[i] == target)
            return i;
        else if(nums[i]>target)
            return i;
 } 
    return numsSize;
} 
int main()
{
 int  nums = [1,3,5,6];
  int target = 5;
  int numsSize=nums.size();
  cout<<searchInsert( nums, numsSize,  target);
  return 0;
}
  
