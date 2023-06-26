/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"

void main(void){
	int testInteger;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&testInteger);
	printf("Number: %d ",testInteger);
	return;
}
