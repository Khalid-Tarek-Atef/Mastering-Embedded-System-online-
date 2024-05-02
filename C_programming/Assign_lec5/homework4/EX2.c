/*
 ============================================================================
 Name        : EX2.c
 Author      : Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
 int factorial(int n);
int main(void) {
     int n=0;
	printf("Enter positive integer :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	printf("%d",factorial(n));
	return EXIT_SUCCESS;
}

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{

       return n*factorial(n-1);
	}

}
