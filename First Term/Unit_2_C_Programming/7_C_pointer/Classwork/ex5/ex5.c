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
	int* px=0x0;
	char* py=0x0;
	long long* pz=0x0;
	printf("px = 0x%X, pz = 0x%X and py = 0x%X \n",px,pz,py);
	px++;
	py ++ ;
	pz++;
	printf("px = 0x%X, pz = 0x%X and py = 0x%X \n",px,pz,py);
}
