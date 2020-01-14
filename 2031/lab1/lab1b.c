#include<stdio.h>
int main(void)
{
	char c;
	int spaces = 0;
	
		while((c = getchar()) != '\n')
		{
			if(c == ' ')
				spaces++;
		}
		
		printf("%d\n", spaces);
}
