#include <stdio.h>
#include <limits.h>

void allSizeNatural();
void allSizeReal();
void limit_natural();
void limit_real();

int main(void)
{
     
   allSizeNatural();
   allSizeReal();

   limit_natural();
   limit_real();
}

void allSizeNatural()
{
    printf("char size: %d\n",sizeof(char));  
    printf("short size: %d\n", sizeof(short));  
    printf("int size : %d\n", sizeof(int));  
    printf("long size : %d\n", sizeof(long)); 

     
}

void allSizeReal()
{
    printf("float %d\n", sizeof(float));
    printf("double %d\n", sizeof(double));
    printf("long double %d\n", sizeof(long double));

}

public void limit_natural()
{
    printf("char size using limits: %d", CHAR_BIT);
    printf("char size using limits: %d", SHRT_BIT);
    printf("char size using limits: %d", CHAR_BIT);
    printf("char size using limits: %d", CHAR_BIT);

}