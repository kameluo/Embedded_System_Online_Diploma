/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){

	int i, sum= 0;
	for(i= 1; i<=99; i++){
		sum += i;
	}
	printf("Summation of value between (1 and 99) is: %d", sum);
	return;
}
