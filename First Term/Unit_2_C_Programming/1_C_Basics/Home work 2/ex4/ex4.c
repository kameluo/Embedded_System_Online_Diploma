/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-2-Ex4*/
	float a;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdin);
	fflush(stdout);

		if(a>0){
			printf("%.2f is positive", a);
		}else if(a<0){
			printf("%.2f is negative", a);
		}else if(a==0){
			printf("You entered zero");
		}

	return;
}
