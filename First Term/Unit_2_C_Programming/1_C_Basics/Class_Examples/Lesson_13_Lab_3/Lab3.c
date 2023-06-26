/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	int a, b;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &a, &b);
	printf("The minimum is %d\r\n", (a<b)?a:b);
	return;
}
