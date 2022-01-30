/* print the following pattern :- 
a
AB
ABC
ABCD
ABCDE
*/
#include<iostream>
using namespace std;
int main()
{
  int i,j;
  for(i=97;i<=101;i++)
  {
      for(j=97;j<=101;j++)
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

