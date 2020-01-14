#include<stdio.h>

int main(void)
{
    int c, newSpace = 0;

    while ((c = getchar()) != 'z') /* get a character from the keyboard*/
    {
        if(c == ' ')
        {
            ++newSpace;
        }
    }

    printf("Spaces between the sentence:\t%d\n", newSpace);
    
}