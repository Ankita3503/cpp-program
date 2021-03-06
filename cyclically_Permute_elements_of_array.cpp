/*******************************************************
 Statement - Cyclically permute the elements of an array
 
 *******************************************************/
/* Cyclically permute the elements of an array A. i.e. the content of A1 become that of A2.
 And A2 contains that of A3 & so on as An contains A1 */

#include <iostream>
using namespace std;

int  main ()
{
    int i,n,number[30];
  
    
    printf("Enter the value of the n = ");
    scanf ("%d", &n);
    printf ("Enter the numbers\n");
    for (i=0; i<n; ++i)
    {
        scanf ("%d", &number[i]);
    }
    number[n] = number[0];
    
    for (i=0; i<n; ++i)
    {
        number[i] = number[i+1];
    }
    printf ("Cyclically permted numbers are given below \n");
    for (i=0; i<n; ++i)
    {
        printf ("%d\n", number[i]);
    }
    
  return 0;
}
/*-------------------------------------
 Output
 Enter the value of the n = 5
 Enter the numbers
 10
 30
 20
 45
 18
 Cyclically permted numbers are given below
 30
 20
 45
 18
 10
 ---------------------------------------------------*/