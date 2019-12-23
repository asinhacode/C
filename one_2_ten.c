

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

