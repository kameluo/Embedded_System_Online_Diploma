/*
 * main.c
 *
 *  Created on: Jun 30, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"

void main(void){
	/* Array-Class lab2 */
	float x[5]={5, 16, 22, 3.5, 15};
	float y;
	int i;

	for(i=0;i<5;i++){
		y=5*x[i]*x[i]+3*x[i]+2;
		printf("y(%f) = %f\r\n",x[i],y);
	}
	return;
}
