/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void prime(int num1, int num2);    // print prime numbers between two numbers interval
int main(void) {
	int n1,n2;
	printf("Enter two numbers (intervals) :");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&n1,&n2);
	printf("prime number between %d and %d are : ",n1,n2);
	prime(n1,n2);
	return EXIT_SUCCESS;
}

void prime(int num1, int num2)
{
	if(num1<num2)                // swap the two number if num1>num2
	{
	}
	else
	{
		int temp=num1;
		num1=num2;
		num2=temp;
	}
	int i=num1,flag=0;
	for(;i<=num2;i++)
	{
		flag=0;
		int j=2;
		for(;j<=i/2;j++)
		{
			if(i%j==0)       //if the number accept Div by any number except one thus it is prime number
				flag=1;
		}
		if(flag==0)
			printf("%d ",i);

	}

}
