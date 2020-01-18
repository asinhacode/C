#include<stdio.h>

int main()
{
    char newLine = '\012';
    printf("%d\n", newLine);

    int start = 15E3; // adds 000
    printf("%d\n", start);

    float start2 = start+ 3E-2;
    printf("%f\n",start2);

    float start3 = 75E-2;
    printf("%.3f\n",start3);
}