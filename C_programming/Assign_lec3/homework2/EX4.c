/*
 ============================================================================
 Name        : EX4.c
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
		float x=0.0;
		printf("Enter an number : ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &x);

		if(x==0)
		{
			printf("you enter zero\n");
		}
		else if (x>0)
		{
			printf("%f is positive\n",x);
		}
		else
		{
			printf("%f is negative\n",x);

		}
	}
	return EXIT_SUCCESS;
}
