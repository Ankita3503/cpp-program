/*******************************************************
 Statement - Add numbers using call by reference
 *******************************************************/

#include <iostream>
using namespace std;
long add(long *, long *);
int  main()
{
    long first, second, sum;
    printf("Input two integers to add\n");
    scanf("%ld %ld", &first, &second);
    sum = add(&first, &second);
    printf("(%ld) + (%ld) = (%ld)\n", first, second, sum);
  return 0;
}

long add(long *x, long *y) 
{
    long sum;
    sum = *x + *y;
    return sum;
}
