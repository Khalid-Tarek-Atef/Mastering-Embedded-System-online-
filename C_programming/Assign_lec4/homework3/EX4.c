/*
 ============================================================================
 Name        : EX4.c
 Author      : Khaled Tarek
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100]={0},n=0, element=0, location=0 ;
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&element);
	printf("Enter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);
	if(location>n)           //if the location grater the arr elements we increase the size
	{
		n=location;
	}
	else
	{
		n=n+1;
	}
	for(int i=n;i>=0;i--) //swap the element till reach the location
	{
		a[i-1]=a[i-2];
		if(i==location)
		{
			a[i-1]=element;
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	return EXIT_SUCCESS;
}
