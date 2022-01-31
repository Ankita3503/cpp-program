        /* print the following pattern :- 
        *
      *   *
    *   *   *
  *   *   *   *   
*   *   *   *   *

*/
#include<iostream>
using namespace std;
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
      for(j=1;j<=5;j++)
      {
         if(i<=j)   
          { 
                cout<<" ";
          }
      }   
          for(int k=1;k<=5;k++)
          {
            if( k<=i)
            {
              cout<<"* ";
            }
          } 
           cout<<"\n";
      }
         
  
    return 0;
}

