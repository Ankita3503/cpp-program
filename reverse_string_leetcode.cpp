#include<iostream>
using namespace std;
void reverseString(char* s, int sSize)
{
 for(int i=0;i<sSize /2 ;i++)      // run the loop for half the iteration
        {
            char temp=s[i];               
            s[i]=s[sSize-1-i];
            s[sSize-1-i]=temp;
        }
}
int main()
{
 char  s[] = {"h","e","l","l","o"};
  int sSize=s.size();
 cout<< reverse(s,sSize);
  return 0;
}
