/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n=0,sum=0;
	printf("Enter an integer : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("sum = %d",sum);
	return EXIT_SUCCESS;
}
