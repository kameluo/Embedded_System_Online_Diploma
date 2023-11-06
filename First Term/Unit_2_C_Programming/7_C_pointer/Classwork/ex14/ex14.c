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

/* Using pointer to pointer */

void main(){
	int x=5,y=9;
	int* px=&x;/* pointer */
	int** ppx=&px;/* pointer to pointer */

	printf("x=%d, y= %d\r\n",x, y);

	**ppx= 7;
	printf("x=%d, y= %d\r\n",x, y);

	*ppx=&y;
	*px=11;
	printf("x=%d, y= %d\r\n",x, y);

}
