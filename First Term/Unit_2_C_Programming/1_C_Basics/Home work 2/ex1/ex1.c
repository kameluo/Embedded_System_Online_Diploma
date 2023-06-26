/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-2-Ex1*/
	int a;
	printf("\nEnter an integer you want to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%i",&a);
	fflush(stdin);
	fflush(stdout);
	if(a%2==0){
		printf("\n%i is even.",a);
	}else{
		printf("\n%i is odd.",a);
	}
	return;
}
