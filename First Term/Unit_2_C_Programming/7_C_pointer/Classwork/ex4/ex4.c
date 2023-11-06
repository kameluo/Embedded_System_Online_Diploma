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
	int x=5;
	int y=7;
	int* p;
	p= &x;
	printf("X %d, value pointed by p = %d\r\n",&x,*p);
	*p= 14;
	printf("X %d, value pointed by p = %d\r\n",&x,*p);
	p= &y;
	printf("X %d, value pointed by p = %d\r\n",&x,*p);
	*p= 20;
	printf("y %d, value pointed by p = %d\r\n",&y,*p);
	p= 0;
	/* *p=15; //wrong and the program will crash */

}
