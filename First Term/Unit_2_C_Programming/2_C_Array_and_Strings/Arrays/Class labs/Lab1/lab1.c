/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"

void main(void){
	/* Array-Class lab1 */
	int i;
	float degrees[10];
	/* Scanning students degrees and storing them in array */
	for(i=0; i<10; i++){
		printf("\n Enter student %d degree: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f", &degrees[i]);
	}
	/* printing all students degrees */
	for(i=0; i<10; i++){
		printf("\n Student %d degree is %f",i+1, degrees[i]);
	}
	return;
}
