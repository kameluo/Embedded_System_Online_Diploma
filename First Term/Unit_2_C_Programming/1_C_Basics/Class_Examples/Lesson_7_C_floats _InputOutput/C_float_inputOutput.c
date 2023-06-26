/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"

void main(void){
	float f;
	printf("Enter a number: ");
	fflush(stdin);/* to save the problem of getting stuck*/
	fflush(stdout);/* to save the problem of getting stuck*/
	/* %f format string is used in case of floats*/
	scanf("%f",&f);
	printf("Value: %f ",f);
	return;
}
