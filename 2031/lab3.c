/* #include <stdio.h>
int main()
{
   char s[1000], r[1000];
   int begin, end, count = 0;

   printf("Input a string\n");
   gets(s);

   // Calculating string length

   while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';

   printf("%s\n", r);

   return 0;
} */

/* #include<stdio.h>

int main()
{
    double balance[] = {1.0, 10.0, 100.0, 1000.0};
    for(int i = 0; i < 4; i++)
    {
        printf("%f\n", balance[i]);
    }

    balance[3] = -111.1;
    for(int i = 0; i < 4; i++)
    {
        printf("%f\n", balance[i]);
    }
} */
/* int arrlength(int arr[])
{
    int length;
    for(length = 0; arr[length] != '\0'; length++);

    return length;
}
#include <stdio.h>

#define MAX_SIZE 100

int main() {

   char my_strg[ MAX_SIZE ];   /* to store an octal number in the form of an array of char */
   int my_int;
   int i = 0;

    while((my_int = getchar()) != '\n')
    {
        my_strg[i++] = my_int;
    }
   /********** Fill in your code here. **********/
    int index;
    for(index = arrlength(my_strg); i > -1; i--)
    {
        printf("%d", arrlength[index]);
    }
   //printf( "%s\n", my_strg );  /* output the decimal integer */
}

 