/*
 ============================================================================
 Name        : EX2.c
 Author      : Khaled Tarek
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[100]={0},avg=0;
	int n=0;
	printf("Enter the numbers of data:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d. Enter number:",i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%f",&a[i]);
		avg+=a[i];
	}
    avg/=n;
    printf(" Average = %0.2f",avg);
	return EXIT_SUCCESS;
}
