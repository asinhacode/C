

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
}
