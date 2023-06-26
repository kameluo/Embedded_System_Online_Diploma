/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "conio.h"
void main(void){

	float x, y;
	char ch;
	do{
		fflush(stdin);
		fflush(stdout);
		printf("\r\n Enter x value: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &x);
		fflush(stdin);
		fflush(stdout);
		y = 5*x*x + 3*x + 2;
		printf("\r\n y(%f) = %f", x, y);
		fflush(stdin);
		fflush(stdout);
		printf("\r\n do you want to evaluate again (y/n):");
		fflush(stdin);
		fflush(stdout);
		scanf("%c", &ch);
		fflush(stdin);
		fflush(stdout);
	}while(ch=='y');/* getche() is not working*/
	return;
}
