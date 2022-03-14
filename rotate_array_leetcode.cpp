#include<iostream>
using namespace std;
class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
    int n=nums.size();
        k=k%n;                       //remove extra iterations
        int temp;
        
        for(int i=0;i<n/2;i++)     //reverse the array
        {
            temp=nums[i];
            nums[i]=nums[n-1-i];
            nums[n-1-i]=temp;
        }
        
        for(int i=0;i<k/2;i++)    //reverse the first k numbers
        {
            temp=nums[i];
            nums[i]=nums[k-1-i];
            nums[k-1-i]=temp;
        }
        
        for(int i=0;i<(n-k)/2;i++)    //reverse the last (n-k) numbers
        {
            temp=nums[k+i];
            nums[k+i]=nums[n-1-i];
            nums[n-1-i]=temp;
        }
      for(int i=0;i<n;i++)
      {
        cout<<nums[i]<<",";
      }
    }
};
int main()
{
  int  nums = [1,2,3,4,5,6,7], k = 3;
    rotate(nums,k);
  return 0;
}
