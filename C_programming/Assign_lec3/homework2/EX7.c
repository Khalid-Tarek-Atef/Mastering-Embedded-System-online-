/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1)
	{
		int x=0,fact=1;
		printf("please enter number to get factorial :");
		fflush(stdin);  fflush(stdout);
		scanf("%d",&x);
		if(x<0)
		{
			printf("Error!!! factorial of negative number doesn't exist\n");
			continue;
		}
		int i;
		for(i=1;i<=x;i++)
		{
			fact*=i;
		}

		printf("factorial = %d\n",fact);
	}
	return EXIT_SUCCESS;
}
