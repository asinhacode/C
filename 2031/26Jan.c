#include<stdio.h>

int main()
{
   // printf("The numbers are : %d\t%d\t%d\n", 0, 10, 100);

    // convert decimal to hexadecimal
    printf("Dec ------ Hexa\n");
    for(int i = 0; i < 50; i++)
    {
    printf(" %d ------ %x\n", i, i);

    }

    // char[] types
    char name[] = "Anupam";
    printf("Name %s\n", name);
}