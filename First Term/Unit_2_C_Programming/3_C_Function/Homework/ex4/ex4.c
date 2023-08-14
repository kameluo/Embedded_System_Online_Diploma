/*
 * main.c
 *
 *  Created on: Jul 8, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"

int power(int num, int power);

int main(){
	int num,exp;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	fflush(stdin);fflush(stdout);
	printf("Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&exp);
	fflush(stdin);fflush(stdout);
	printf("%d^%d= %d ", num, exp, power(num, exp));

	return 0;
}
int power(int num, int exp){
	if(exp!=0){
	return (num*power(num, exp-1));
	}
	else{
		return 1;
	}
}
