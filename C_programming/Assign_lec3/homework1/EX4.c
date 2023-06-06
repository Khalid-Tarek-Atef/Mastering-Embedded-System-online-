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

	float n1=0.0,n2=0.0,Product=0.0;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f",&n1,&n2);
	Product=n1*n2;
	printf("Product: %f",Product);


	return EXIT_SUCCESS;
}
