/*
 ============================================================================
 Name        : EX6.c
 Author      : Khaled Tarek
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100],ch=0,counter=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);
	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	for(int i=0;str[i];i++)
	{
		if(str[i] == ch)
			counter++;
	}
	printf("Frequency of %c = %d",ch,counter);
	return EXIT_SUCCESS;
}
