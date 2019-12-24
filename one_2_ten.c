

#include <stdio.h>
#include <limits.h> // used to get the max and min

int main(int argc, const char * argv[]) {

    printf("Hello, World!\n");
    
    // variables
    int start = 0;
    printf("%d\n", start);
    
    // start with letter
    int END = 9;
    
    // sizeof : find size of data type
    printf("%d\n", sizeof(short int));
    
    // signed : neg to pos
    // default: acceps neg as well
    int neg = start - END;
    printf("%d\n", neg);
    
    unsigned neG = neg;
    printf("%d\n", neG);
    
    printf("%d\n", INT_MIN); // OBTAINED BY USING <LIMITS.H>

    
    // moving it on the screen
    printf("%s\n", "Hello");
    printf("%10s\n", "Hello");
    
    // char data type
    char c = 50;
    printf("%c\n", c);
    printf("%d\n", c);
    
    // signed vs unsigned
    unsigned i = 1;
    int j = -4;
    printf("%d\n", i + j);
    printf("%u\n", i + j); // convert into 1s complement
    
    
// GLOBAL VARIABLE
int a = -1;

void printGlobal(){
    printf("GLOBAL A: %d\n", a); // CAN BE USED HERE
}



    // scope
    int a = 0;
    {
        // internal scope only available here
        int a = 1;
        printf("INTERNAL A: %d\n", a);
    }
    
    // a available here
    printf("EXTERNAL A: %d\n", a);
    
    printGlobal();


    
#include <stdio.h>
#include <limits.h>
#include <stdbool.h> // incorporating boolean values

int A; // GLOBAL VARIABLE, has default values
bool t = true;

int main(int argc, const char * argv[])
{

    auto int x;
    
    printf("%d\n", x);
    
    printf("%d\n", A);
    
    printf("%d\n", A);
    
    if(t)
    {
        printf("This is the truth!\n"); // prints this
    }

    else
    printf("This is not the truth!\n");

    
}

#include <stdio.h>

extern int a; // obtained from an external file external.c
int main(int argc, const char * argv[])
{

    printf("%d\n", a);

    
}

