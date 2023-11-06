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

#define val 3
#define keroles(...) printf(__VA_ARGS__)
#define learn_in_depth(a,...) printf(__VA_ARGS__,a)

void main(){
	printf("value=%d \n",val);
	keroles("value=%d \n",val);
	learn_in_depth(val,"value=%d \n");
}
