/*
 * main.c
 *
 *  Created on: Jun 30, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"

void main(void){
	/* Array-Class lab3 */
	float a[3][3];
	int r, c;
	float t[3][3];
	for(r=0; r<3; r++){
		for(c=0;c<3;c++){
			printf("Enter the item(%d, %d): ",r,c);
			fflush(stdout);fflush(stdin);
			scanf("%f", &a[r][c]);
			}
		}
	printf("the matrix is \n");
	for(r=0; r<3; r++){
		for(c=0; c<3; c++){
			printf("%2.2f\t", a[r][c]);
			}
			printf("\r\n");
		}
	/*the transpose matrix */
	printf("The transpose matrix is \n");
	for(r=0; r<3; r++){
		for(c=0; c<3; c++){
			t[r][c]=a[c][r];
			}
		}
	for(r=0; r<3; r++){
		for(c=0; c<3; c++){
				printf("%2.2f\t", t[r][c]);
			}
		printf("\r\n");
	}
	return;
}
