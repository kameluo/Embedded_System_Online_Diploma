/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){

	int i=1, sum= 0;
	while(i<=99){
		sum += i;
		i+=2;
	}
	printf("Summation of odd values between (1 and 99) is : %d", sum);
	return;
}
