/*
 ============================================================================
 Name        : EX3.c
 Author      : Khaled Tarek
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100][100],row,column;
	printf("Enter rows and column of matrix:");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&row,&column);
	printf("Enter elements of matrix:\n");
	for(int i=1;i<=row;i++)
		{
			for(int j=1;j<=column;j++)
			{
				printf("Enter elements a%d%d:",i,j);
				fflush(stdin);  fflush(stdout);
				scanf("%d",&a[i-1][j-1]);
			}
		}
	printf("Entered Matrix:\n");
	for(int i=1;i<=row;i++)
		{
			for(int j=1;j<=column;j++)
			{
				printf("%d  ",a[i-1][j-1]);
			}
			printf("\n");
		}
	printf("Transpose of Matrix:\n");
		for(int i=1;i<=column;i++)
			{
				for(int j=1;j<=row;j++)
				{
					printf("%d  ",a[j-1][i-1]);
				}
				printf("\n");
			}
	return EXIT_SUCCESS;
}
