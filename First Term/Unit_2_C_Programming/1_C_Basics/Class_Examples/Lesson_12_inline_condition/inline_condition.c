/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	int a, b, minimum;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &a, &b);
	minimum= (a<b)?a:b;
	printf("The minimum is %d\r\n", minimum);
	return;
}
