/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x=0;
	while(1)
	{
		printf("Enter an integer you want to check: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&x);

		if(x&1)
		{
			printf("%d is odd\n",x);
		}
		else
		{
			printf("%d is even\n",x);
		}
	}




	return EXIT_SUCCESS;
}
