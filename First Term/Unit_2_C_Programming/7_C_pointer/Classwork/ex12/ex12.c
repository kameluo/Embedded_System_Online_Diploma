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
/*
 *	*px = &x ----> means issue read/write the VALUE of what inside X variable
 *	printf(*px) ----> means issue read the VALUE stored in the pointer px
 *	printf(*px = 5) ----> means issue write a VALUE "5" at in the pointer px
 *	& ---> means address
 * */

/* Pointer with UNKOWN type(void*) */

void main(){
	int x=5;
	double y=10.3;
	void* p;

	p=&x;
	*(int*)p=8;
	printf("x=%d\r\n",x);

	p=&y;
	*(double*)p=3.3;
	printf("y=%lf\r\n",y);
}
