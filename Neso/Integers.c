#include<stdio.h>

    int main()
    {
        printf("Hello_World\n");
/*
        int i = 0;

            while(i < 5)
            {
                printf("%d\n", i);
                i++;
            }
*/
        int j = 0;
        int k = 0;
            while(j < 50)
            {
                k = j % 13;

                if(k == 0)
                    printf("\n");
                else
                    printf("%d\n", (j % 13));

                j++;
            }
    }