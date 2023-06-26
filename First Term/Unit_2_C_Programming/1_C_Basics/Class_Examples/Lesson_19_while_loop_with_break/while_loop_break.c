/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){

	int nStudents= 0;
	float degree, sum =0;
	printf("Enter negative value to exit:\r\n");
	while(1){
		printf("Enter student (%d) degree: ", nStudents + 1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &degree);
		if(degree< 0)break; /*force exit from while loop*/
		sum += degree;
		nStudents++;
	}
	printf("Average students degree is: %f\r\n", sum/nStudents);
	return;
}
