/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-1-Ex3*/
	int a, b;
	printf("Enter two integers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &a, &b);
	fflush(stdin);
	fflush(stdout);
	printf("\r\nSum: %d",a+b);

	return;
}
