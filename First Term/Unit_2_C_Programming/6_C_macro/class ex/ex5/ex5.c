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

#define DPrintF(...) printf(#__VA_ARGS__)

void main(){
	DPrintF("DEC(7)=%d",DEC(7));
	DPrintF();
}
