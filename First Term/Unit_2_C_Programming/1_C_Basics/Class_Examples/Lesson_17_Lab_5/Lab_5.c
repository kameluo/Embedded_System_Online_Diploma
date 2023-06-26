/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){

	int i, nStudents;
	float degree, sum;
	printf("Enter the number of the students: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&nStudents);
	for(i= 1,sum= 0; i<=nStudents; i++){
		printf("Enter the student (%d) degree: ",i);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&degree);
		sum += degree;
	}
	printf("Average students degree is : %f\r\n", sum/nStudents);
	return;
}
