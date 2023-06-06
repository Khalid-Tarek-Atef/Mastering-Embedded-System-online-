/*
 ============================================================================
 Name        : EX5.c
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
		char c=0;
		printf("please  enter character : ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&c);

		if((c>='a' && c<='z') || (c>='A' && c<='Z') )
		{
			printf("%c is an alphabet\n",c);
		}
		else
		{
			printf("%c is not alphabet\n",c);
		}
	}
	return EXIT_SUCCESS;
}
