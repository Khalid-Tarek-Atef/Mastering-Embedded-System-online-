/*
 ============================================================================
 Name        : EX7.c
 Author      : Khaled Tarek
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char str[100],i=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);
	for(i=0;str[i];i++)
	{
	}
	printf("Length of string: %d",i);
	return EXIT_SUCCESS;
}
