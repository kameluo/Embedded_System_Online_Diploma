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
void main(){
	int x[5]={ 1, 2, 3, 4, 5};
	int* p=x;
	printf("%d\r\n",*p);
	p++;
	printf("%d\r\n",*p);
	p=x+3;
	printf("%d\r\n",*p);
	p--;
	printf("%d\r\n",*p);
	/* x++; wrong, Array address is FIXED */
}
