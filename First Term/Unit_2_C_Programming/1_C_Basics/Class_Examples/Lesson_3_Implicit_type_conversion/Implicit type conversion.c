/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "stdlib.h"
void main(void){
	/* An example of implicit conversion*/
	int x= 10;
	char y= 'a';

	/* y implicity convered to int. ASCII*/
	/* value of 'a' is 97*/
	x= x+y;

	/* x is implictly converted to float*/
	float z= x+1.0;
	printf("x= %d, z= %f",x,z);
	return;

}
