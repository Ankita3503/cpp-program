#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
  long long maxSubarraySum(int arr[] ,int n){
    int current=0;
    int max_till_now=INT_MIN;
    for(int i=0;i<n;i++)
    {
      current+=arr[i];
      current=max(currrent,arr[i]);
      max_till_now=max(max_till_now ,current);
    }
    return max_till_now;
  }
};

int main()
{
  int t;
  int n;
  cin>>t;
  while(t--)
  {
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    Solution ob;
    cout<< ob.maxSubarraySum(a,n)<<endl;
  }
}

        
