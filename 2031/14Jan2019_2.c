#include<stdio.h>

int maximum( int x, int y, int z); /* function prototype */
int minimum( int x, int y, int z);

int main( void )
{
    int n1, n2, n3;

    printf("Enter 3 numbers:\t");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("Maximum is:\t%d\n", maximum( n1, n2, n3));
    printf("Minimum is:\t%d\n", minimum( n1, n2, n3));

    return 0;
}

/* x, y, z are PARAMETERS */
/* returns an integer value */
int maximum(int x, int y, int z)
{
    int tmp = x;

    if(y > tmp)
    {
        tmp = y;
    }

    if( z > tmp)
    {
        tmp = z;
    }

    return tmp;
}

int minimum(int x, int y, int z)
{
    int tmp = x;

    if( y < tmp )
    {
        tmp = y;
    }

    if( z < tmp )
    {
        tmp = z;
    }

    return tmp;
}