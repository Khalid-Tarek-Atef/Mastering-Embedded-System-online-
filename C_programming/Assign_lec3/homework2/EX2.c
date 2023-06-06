/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1)
	{
		char c=0;
		printf("Enter an alphabet: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%c",&c);
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' \
				|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		{
			printf("%c is a vowel\n",c);
		}
		else
		{
			printf("%c is a consonant\n",c);
		}
	}
	return EXIT_SUCCESS;
}
