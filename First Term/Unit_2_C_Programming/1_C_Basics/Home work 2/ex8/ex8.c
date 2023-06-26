/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-2-Ex8*/
	float a, b;
	char operation;
	printf("Enter operator either + or - or * or divide:");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&operation);
	fflush(stdin);
	fflush(stdout);
	printf("Enter two operands: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&a, &b);
	fflush(stdin);
	fflush(stdout);

	switch (operation)
	{
	case '+':
		{
		printf("%.1f + %.1f =%.1f", a, b, a+b);
		break;
		}
	case '-':
		{
		printf("%.1f - %.1f =%.1f", a, b, a-b);
		break;
		}
	case '*':
		{
		printf("%.1f * %.1f =%.1f", a, b, a*b);
		break;
		}
	case '/':
		{
		printf("%.1f / %.1f =%.1f", a, b, a/b);
		break;
		}
	}

	return;
}
