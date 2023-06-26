/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-2-Ex7*/
	int a, mux=1, counter;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&a);
	fflush(stdin);
	fflush(stdout);

	if(a>0){
		for(counter=a; counter>1; counter--){
				mux *= counter;
		}
		printf("Factorial = %i", mux);

	}else if(a<0){
		printf("Error!!! Factorial of negative number does not exist");
	}
	return;
}
