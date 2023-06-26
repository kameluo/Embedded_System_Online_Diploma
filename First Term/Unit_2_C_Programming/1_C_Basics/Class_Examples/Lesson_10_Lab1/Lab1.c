/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	char choice;
	float radius, area, circumference;
	printf("Enter circle radius: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &radius);
	printf("Enter your choice (a to print the area, c to print the circumference): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &choice);
	if(choice== 'a'){
		area= 3.14159 * radius* radius;
		printf("\r\narea is %f\r\n", area);
	}else if(choice== 'c'){
		circumference= 2 * 3.14159* radius;
		printf("\r\ncircumference is %f\r\n", circumference);
	}else
		printf("\r\nWrong choice\r\n");

	return;
}
