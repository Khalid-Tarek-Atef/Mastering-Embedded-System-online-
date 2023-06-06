/*
 ============================================================================
 Name        : EX8.c
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
		float n1,n2,res;
		printf("please enter operation +,-,*,/ ");
		fflush(stdin);  fflush(stdout);
		scanf("%c",&c);
		printf("enter two operands : ");
		fflush(stdin);  fflush(stdout);
		scanf("%f%f",&n1,&n2);

		switch(c)
		{
		case '+' :
			res=n1+n2;
			break;
		case '-' :
			res=n1-n2;
			break;
		case '*' :
			res=n1*n2;
			break;
		case '/' :
			res=n1/n2;
			break;
		default :
			printf("please enter valid operation !\n");
			continue;
		}
		printf("%f %c %f = %f\n",n1,c,n2,res);

	}



	return EXIT_SUCCESS;
}
