#include <stdio.h>

#define NUM_ITER 10

int task( int y ); /* prototype */

int main(void)
{
    int x;
    
    printf("Squares of a number.\n");

    for(x = 1; x <= NUM_ITER; x++)
    {
        printf("%d ", task( x )); /* function call */
    }

    printf("\n");
    return 0;

    
}

int task( int y ) /* copy of argument */
    {
        return y * y;
    }