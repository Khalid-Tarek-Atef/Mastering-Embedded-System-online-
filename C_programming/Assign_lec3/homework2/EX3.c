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

	float a=0.0,b=0.0,c=0.0;
	printf("Enter three numbers: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f%f%f",&a,&b,&c);
	if(a>=b && a>=c)
	{
		printf("Largest number = %f\n",a);
	}
	else if(b>=a && b>=c)
	{
		printf("Largest number = %f\n",b);
	}
	else
	{
		printf("Largest number = %f\n",c);
	}




	return EXIT_SUCCESS;
}
