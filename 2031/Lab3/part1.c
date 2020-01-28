#include<stdio.h>
#define MAX_SIZE 100
    
   

    int main()
    {
        char string1[MAX_SIZE];
        int index, i;

        while((i = getchar()) != '\n')
        {
            string1[index++] = i;
        }
        

        // find the length of the array
        int in; 
        for(in = 0; string1[in] != '\0'; in++);
        printf("%d", in);

        
       

        printf("%s\n", string1);

        //printf("%s", string1);
        
        //printf("Arr length:\t%d", length);
        
       
        
        /* printf("String length:\t%d", in);
        
        int j;
        for(j = in; j > -1; j--)
        {
            printf("%c", string1[j]);
        } */

        

    }

    
 
