#include<stdio.h>
# define CM 2.54

float inches2Cm(float);

int main(void)
{
    float inches;


    printf("Enter an INCH values:\t");

    scanf("%f", &inches);

    while(inches != 0)
    {
        printf("In cm:\t%.2f", inches2Cm(inches));
        printf("\n");
        printf("Enter an INCH values:\t");

        scanf("%f", &inches);
    }

    printf("Program terminated!");
}

float inches2Cm(float inches)
{
    return inches * CM;
}