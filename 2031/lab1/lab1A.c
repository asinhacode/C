#include<stdio.h>
# define CM 2.54

int main(void)
{
	float inches;
	
		printf("Enter the measurement in inches>");
		scanf("%f", &inches);

		while(inches != 0)
		{
			printf("%.2f\n", inches * CM);
			printf("Enter the measurement in inches>");
			scanf("%f", &inches);

		}
}
