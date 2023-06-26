/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-1-Ex6*/
	float a, b, c;
	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);
	fflush(stdin);
	fflush(stdout);
	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &b);
	fflush(stdin);
	fflush(stdout);
	c=b;
	b=a;
	a=c;
	printf("\r\nAfter swapping, value of a = %.2f",a);
	printf("\r\nAfter swapping, value of b = %.1f",b);
	return;
}
