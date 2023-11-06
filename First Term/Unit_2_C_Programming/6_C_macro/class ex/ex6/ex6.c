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

#define height 100

void main(){
	printf("First defined value for height: %d\n", height);
	#undef height  /*undefining variable*/
	#define height 600  /*redefining the same for new value*/
 	printf("value of height after undef & redefine: %d", height);
}
