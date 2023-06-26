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
	scanf("%f",&radius);
	printf("Enter your choice (a to print the area, c to print the circumference): ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &choice);
	switch(choice)
	{
	case 'a':
	case 'A':
		{
			area= 3.14159* radius* radius;
			printf("\r\narea is %f\r\n", area);
		}
	break;
	case 'c':
	case 'C':
		{
			circumference= 2* 3.14159* radius;
			printf("\r\ncircumference is %f\r\n", circumference);
		}
	break;
	default:
		printf("\r\nWrong choice\r\n");
	break;
	}
	return;
}
