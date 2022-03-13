#include<iostream>
using namespace std;
class Solution
{
public:
    int firstBadVersion(int n) 
    {  
     int start = 0;
		int end = n;
		int answer = 0;
		while(start <= end)
		{
			int mid = start + (end - start) / 2;

			if(isBadVersion(mid))
			{
				answer = mid;
				end = mid-1;
			}
			else
				start = mid+1;
		}
		return answer;
	} 
};
int main()
{
  Solution ob;
  cout<<ob.firstBadVersion(5); 
  return 0;
}
