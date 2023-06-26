/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-2-Ex6*/
	int a, sum=0, counter;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&a);
	fflush(stdin);
	fflush(stdout);

	for(counter=1; counter<=a; counter++){
		sum += counter;
	}
	printf("Sum: %i", sum);
	return;
}
