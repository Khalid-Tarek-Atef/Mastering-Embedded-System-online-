/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n1=0,n2=0;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d",&n1,&n2);
	printf("Sum: %d",n1+n2);



	return EXIT_SUCCESS;
}
