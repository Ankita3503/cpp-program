/* print the following pattern :- 
A
BA
CBA
DCBA
EDCBA
*/
#include<iostream>
using namespace std;
int main()
{
  int i,j;
  for(i=65;i<=69;i++)
  {
      for(j=69;j>=65;j--)
      {
          if(j<=i)
          {
              cout<<char(j);
          }
      }
          cout<<"\n";
  }
    return 0;
}

