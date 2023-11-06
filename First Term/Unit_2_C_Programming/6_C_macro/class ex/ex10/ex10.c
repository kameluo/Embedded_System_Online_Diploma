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
/*Predefined macros*/

#define a 100

void main(){
#if (a==100)
	printf("This line will be added in this C file since a = 100 \n");
#else
	printf("This line will be added in this C file since a is not equal to 100 \n");
#endif
}
