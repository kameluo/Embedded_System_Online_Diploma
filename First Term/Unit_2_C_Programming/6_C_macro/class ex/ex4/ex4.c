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

#define CAT(a,...) PRIMITIVE_CAT(a,__VA_ARGS__)
#define PRIMITIVE_CAT(a,...) a##__VA_ARGS__

#define DEC(x) PRIMITIVE_CAT(DEC_,x)
#define DEC_0 0
#define DEC_1 0
#define DEC_2 1
#define DEC_3 2
#define DEC_4 3
#define DEC_5 4
#define DEC_6 5
#define DEC_7 6
#define DEC_8 7
#define DEC_9 8

#define DPrintF(...) printf(__VA_ARGS__)


void main(){
	DPrintF("DEC(7)=%d",DEC(7));
}
