/*
 * EECS2031 - Lab 1
 * File name - Lab1d.c
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

