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

/* Universal compare with void pointer */

int Compare(void* value1, void* value2, int type){
	int r;
	switch(type)
	{
	case 1:/* Integer */
		if(*(int*)value1== *(int*)value2) r=0;
		else if (*(int*)value1 > *(int*)value2) r=1;
		else r= -1;
		break;
	case 2:/* Double */
		if(*(double*)value1== *(double*)value2) r=0;
		else if (*(double*)value1> *(double*)value2) r=1;
		else r= -1;
		break;
	}
	return r;
}

void main(){
	int x1=5, x2=6, x3=5;
	double y1=10.3, y2=8.3, y3=11.9;
	printf("Compare x1 and x2 gives %d\r\n",Compare(&x1,&x2,1));
	printf("Compare x1 and x3 gives %d\r\n",Compare(&x1,&x3,1));
	printf("Compare y1 and y2 gives %d\r\n",Compare(&y1,&y2,2));
	printf("Compare y1 and y3 gives %d\r\n",Compare(&y1,&y3,2));
}
