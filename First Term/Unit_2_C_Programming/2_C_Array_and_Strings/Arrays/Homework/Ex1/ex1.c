/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"

void main(void){
	/* Array-Ex1 */
	float matrix_1[4];
	float matrix_2[4];
	char cells_names_1[4][4]={"a11","a12","a21","a22"};
	char cells_names_2[4][4]={"b11","b12","b21","b22"};

	printf("Enter the elements id the 1st matrix\r\n");
	int i;
	for(i=0;i<4;i++){
		printf("Enter %s:", cells_names_1[i]);
		fflush(stdin);fflush(stdout);
		scanf("%f", &matrix_1[i]);
		fflush(stdin);fflush(stdout);
		}
	printf("Enter the elements id the 2nd matrix\r\n");
	int j;
	for(j=0;j<4;j++){
		printf("Enter %s:", cells_names_2[j]);
		fflush(stdin);fflush(stdout);
		scanf("%f", &matrix_2[j]);
		fflush(stdin);fflush(stdout);
		}

	printf("Sum of Matrix:\r\n");

	printf("%0.2f", matrix_1[0]+matrix_2[0]);
	printf(" %0.2f\n", matrix_1[1]+matrix_2[1]);
	printf("%0.2f", matrix_1[2]+matrix_2[2]);
	printf(" %0.2f", matrix_1[3]+matrix_2[3]);
	/*printf("%0.2f", 2);
	/*printf("%.2f %.2f \r\n",(matrix_1[0]+matrix_2[0]) (matrix_1[1]+matrix_2[1]));
	printf("%.2f %.2f", (matrix_1[2]+matrix_2[2]) (matrix_1[3]+matrix_2[3]));*/
	return;
}
