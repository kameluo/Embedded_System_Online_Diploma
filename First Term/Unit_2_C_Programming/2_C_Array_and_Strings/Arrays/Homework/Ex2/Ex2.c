/*
 * main.c
 *
 *  Created on: Jun 30, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"

void main(void){
	/* Array-HomeWork Ex2 */
	float a[100];
	int n=0,i=0;
	printf("Enter the number of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d. Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f", &a[i]);
		}
	/* average loop */
	int j=0;
	float k=0.0;
	for(j=0;j<n;j++){
		k += a[j];
		}
	printf("Average = %.2f",k/n);

	return;
}
