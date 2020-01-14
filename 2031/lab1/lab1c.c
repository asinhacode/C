/*
 * EECS2031 - Lab 1
 * File name - Lab1c.c
 * Author - Sinha, Anupam
 * email : snhn0041@my.yorku.ca
 * EECS login id : snhn004
 * 
 * 
 * 
 * 
 * 
 **/


#include<stdio.h>
# define CM 2.54

int main(void)
{
	float inches;
	
		
		scanf("%f", &inches);

		while(inches != 0)
		{
			printf("%.2f\n", inches * CM);
		
			scanf("%f", &inches);

		}
}
