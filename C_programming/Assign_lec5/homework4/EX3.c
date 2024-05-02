/*
 ============================================================================
 Name        : EX3.c
 Author      : Khaled
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char str[],int length,int count);
int main(void) {
	char str[100];
	int length;
	printf("enter a sentence :");
	fflush(stdin); fflush(stdout);
	gets(str);
	length = strlen(str);
	reverse(str,length,0);
	puts(str);
	return EXIT_SUCCESS;
}

void reverse(char str[],int length,int count)
{
	if(count<length/2)
	{
	char temp=str[length-count-1];
	str[length-count-1]=str[count];
	str[count]=temp;
	reverse( str,length,count+1);
	}
	else
	{
		return ;
	}

}
