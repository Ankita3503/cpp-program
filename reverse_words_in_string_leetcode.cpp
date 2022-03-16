#include<iostream>
using namespace std;
class Solution
{
public:
    string reverseWords(string s) 
    {
        int i = 0;  
        for(int j=0;j<s.size();j++)
        {
            if(s[j] == ' ') // when we get space then reverse that word
            {
                reverse(s.begin()+i,s.begin()+j);
                i= j+1;  // afterb reversing the word increase i till next word 
            }
        }
        reverse(s.begin()+i,s.end());  //this revese for last  word because in last word there is no space 
        return s;
    }
};
int main()
{
  Solution ob;
 string s = "Let's take LeetCode contest";
 cout<< ob.reverseWords(s);
  return 0;
}
