/*
 ============================================================================
 Name        : EX5.c
 Author      : Khaled Tarek
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100]={0},n=0, element=0;
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);
	int i=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==element)
			break;
	}
	printf("number found at location = %d",i+1);
	return EXIT_SUCCESS;
}
