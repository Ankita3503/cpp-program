#include<iostream>
using namespace std;
class Solution 
{
public:
    int hammingWeight(uint32_t n) 
    {
    
        int count=0;
        while(n)
        {
            n&=(n-1);
            count++;
        }
        return count;
    }
};
int main()
{
  Solution ob;
  cout<<"Number of bits(1) = " <<ob.hammingWeight(00000000000000000000000000001011);
  return 0;
}
