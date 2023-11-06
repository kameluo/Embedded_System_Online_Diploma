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

void main(){
	int x=6;
	int* px;
	px=&x;
	printf("%x %x\r\n",&x,px);
	printf("%d %d\r\n",x,*px);
}
