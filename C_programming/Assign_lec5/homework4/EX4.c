/*
 ============================================================================
 Name        : EX4.c
 Author      : Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int base,int power);

int main(void) {

	int base,power_n;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&power_n);
	printf("%d^%d= %d",base,power_n,power(base,power_n));

	return EXIT_SUCCESS;
}
int power(int base,int power_n)
{
	if(power_n>0)
	{
		return base * power(base,power_n-1);
	}
	else
		return 1;

}
