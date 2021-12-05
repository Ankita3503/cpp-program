/**********************************************************
 Statement - accept an array of 10 elements and swap 3rd element with 4th element using pointers.
 
 **********************************************************/

#include <iostream>
using namespace std;

 main()
{
    
    float x[10];
    int i,n;
    
    
    void swap34(float *ptr1, float  *ptr2 ); /* Function Declaration */
    
    printf("How many Elements...\n");
    
    scanf("%d", &n);
    
    printf("Enter Elements one by one\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%f",x+i);
    }
    
    swap34(x+2, x+3);      /* Function call:Interchanging 3rd element by 4th */
    
    printf("\nResultant Array...\n");
    for(i=0;i<n;i++)
    {
        printf("X[%d] = %f\n",i,x[i]);
    }
    
    return  0;
}     /* End of main() */

/* Function to swap the 3rd element with the 4th element in the array */

void swap34(float *ptr1, float *ptr2 )      /* Function Definition */
{
    float temp;
    
    temp   = *ptr1;
    *ptr1  = *ptr2;
    *ptr2  = temp;
}    