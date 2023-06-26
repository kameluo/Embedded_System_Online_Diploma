/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-1-Ex4*/
	float a, b;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f", &a, &b);
	fflush(stdin);
	fflush(stdout);
	printf("\r\nProduct: %f",a*b);

	return;
}
