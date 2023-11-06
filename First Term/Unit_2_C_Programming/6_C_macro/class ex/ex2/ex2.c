/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
#include <math.h>
#include "conio.h"

#define PR(value, maxValue) (100.0 * value/(double)maxValue)

void main(){
	printf("Enter subject degree followed by the maximum degree:\n\n");

	printf("Arabic:");
	printf("Arabic degree is %lf \n", PR(40,50));

	printf("Math:");
	printf("Math degree is %lf \n", PR(30,50));

	printf("Physics:");
	printf("Physics degree is %lf \n", PR(20,50));

	printf("English:");
	printf("English degree is %lf \n", PR(50,50));
}
