/*
 * main.c
 *
 *  Created on: Jul 8, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"

int factorialFunction(int num);

int main(){
	int num;
	printf("Enter a positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	printf("Factorial of %d = %d",num, factorialFunction(num));
	return 0;
}

int factorialFunction(int num){
	if(num!=1){
	return num*factorialFunction(num-1);
	}
}
