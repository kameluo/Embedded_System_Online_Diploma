/*
 * main.c
 *
 *  Created on: Jun 30, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"

void main(void){
	/* Array-HomeWork Ex3 */
	int rows, colums, i,k;
	int inputNumber[10][10];
	printf("Enter rows and columns of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rows);
	scanf("%d",&colums);

	printf("Enter elements of matrix: \r\n");
	for(i=0;i<rows;i++){
		for(k=0;k<colums;k++){
			printf("Enter elements a%i%i: ",i,k);
			fflush(stdin);fflush(stdout);
			scanf("%i",&inputNumber[i][k]);
		}
	}
	/* Entered matrix */
	printf("Entered Matrix:\r\n");
	for(i=0;i<rows;i++){
		for(k=0;k<colums;k++){
			printf("%i ",inputNumber[i][k]);
		}
		printf("\r\n");
	}
	/* Traspose of matrix */
	int TrasposeMatrix[10][10];
	printf(" Traspose of matrix:\r\n");
	for(i=0;i<rows;i++){
		for(k=0;k<colums;k++){
			TrasposeMatrix[k][i]=inputNumber[i][k];
		}
	}

	for(k=0;k<colums;k++){
		for(i=0;i<rows;i++){
			printf("%i ",inputNumber[i][k]);
		}
		printf("\r\n");
	}

	return;
}
