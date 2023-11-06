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
	int x=5,y=9,z;
	printf("x location 0x%x contains %d\r\n",&x,x);
	printf("y location 0x%x contains %d\r\n",&y,y);

	z=x+y;
	printf("z location 0x%x contains %d\r\n",&z,z);
}
