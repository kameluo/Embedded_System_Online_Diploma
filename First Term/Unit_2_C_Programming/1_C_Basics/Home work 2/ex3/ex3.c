/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-2-Ex3*/
	float a, b,c;
	printf("Enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f",&a, &b, &c);
	fflush(stdin);
	fflush(stdout);

	if(a>b){
		if(a>c){
			printf("Largest number= %f", a);
		}else if(c>a){
			printf("Largest number= %f", c);
		}
	}else if(b>a){
		if(b>c){
			printf("Largest number= %f", b);
		}else if(c>b){
			printf("Largest number= %f", c);
		}
	}
	return;
}
