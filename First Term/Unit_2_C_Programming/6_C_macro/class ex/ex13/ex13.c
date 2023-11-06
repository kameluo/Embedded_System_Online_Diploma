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
 *	In the constant variable
 *	if we place a constant variable as a
 *	Global variable, the program will crash or stop
 *	working, because Global variables are stored in the
 *	ROM or FLASH memory
 *
 *	But in the case of the local constant(stored
 *	in the RAM memory), officially the constant
 *	variable can NOT be changed because it is a
 *	CONSTANT, But there is a trick to change its
 *	value using "Pointers".
 *
 * */

/*const int x= 3;/*----> Global variable*/
void main(){
	const int x= 3;/*---->Local variable*/
	printf("x= %d \n",x);
	int* px= &x;
	*px= 4;
	printf("x= %d \n",x);
}
