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

	int a=0,b=0;
	printf("Enter value of a: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;

	printf("After swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d\n",b);



	return EXIT_SUCCESS;
}
