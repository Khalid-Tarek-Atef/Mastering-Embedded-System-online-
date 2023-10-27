/*
 ============================================================================
 Name        : EX1.c
 Author      : Khaled Tarek
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2] ,  b[2][2] ;
	printf("Enter the elements of 1st matrix\n");
	fflush(stdin);  fflush(stdout);
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=2;j++)
		{
			printf("Enter a%d%d:",i,j);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&a[i-1][j-1]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	fflush(stdin);  fflush(stdout);
	for(int i=1;i<=2;i++)
	{
		for(int j=1;j<=2;j++)
		{
			printf("Enter b%d%d:",i,j);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&b[i-1][j-1]);
		}
	}
	printf("Sum of Matrix:\n");
	fflush(stdin);  fflush(stdout);
	printf("%0.1f    %0.1f\n",a[0][0]+b[0][0],a[0][1]+b[0][1]);
	printf("%0.1f    %0.1f\n",a[1][0]+b[1][0],a[1][1]+b[1][1]);
	return EXIT_SUCCESS;
}
