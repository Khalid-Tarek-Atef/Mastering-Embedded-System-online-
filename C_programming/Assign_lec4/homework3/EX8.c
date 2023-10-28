/*
 ============================================================================
 Name        : EX8.c
 Author      : Khaled Tarek
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100],len=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);
	len=strlen(str);
	char temp=0;
	for(int i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-i-1];
		str[len-1-i]=temp;
	}
	printf("reverse string is %s",str);
	return EXIT_SUCCESS;
}
