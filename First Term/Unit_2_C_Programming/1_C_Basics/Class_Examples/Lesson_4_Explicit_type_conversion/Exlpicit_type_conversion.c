/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "stdlib.h"
void main(void){
	/* An example of explicit conversion*/
	double x =1.2;

	/* Explicity conversion from double to int*/
	int sum =(int)x+1;

	printf("sum= %d",sum);
	return;
}
