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

/* Pointer to function */

void (* GP_Func) ();

void print_online_diploma(){
	printf("LEARN IN DEPTH \n");
}

void main(){
	print_online_diploma();
	GP_Func= print_online_diploma;
	GP_Func();
}
