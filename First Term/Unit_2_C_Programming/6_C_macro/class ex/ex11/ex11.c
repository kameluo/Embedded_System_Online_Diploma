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

#define val 3
#define keroles(...) printf(__VA_ARGS__)
#define learn_in_depth(a,...) printf(__VA_ARGS__,a)

#define debug

#ifdef debug
int debug_enable=1;
#else
int debug_enable=0;
#endif

#define DPRINTF(debug_enable,...) if(debug_enable){\
	if(debug_enable>1) printf("@ Func: %s, File: %s, Line: %d", __func__,__FILE__,__LINE__);\
	printf(">> \t");\
	printf(__VA_ARGS__);}

void main(){
printf("value=%d \n",val);
keroles("value=%d \n",val);
learn_in_depth(val,"value=%d \n");

DPRINTF(1,"hello \n");
DPRINTF(3,"init the CAN Controller  \n");
}
