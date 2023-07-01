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
	int elementNumbers,elementtobeSearched;
	int inputNumber[10];
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elementNumbers);

	int x;
	for(x=0;x<elementNumbers;x++){
		scanf("%d", &inputNumber[x]);
	}

	int y;
	for(y=0;y<elementNumbers;y++){
		printf("%d ", inputNumber[y]);
	}

	printf("\r\nEnter the elements to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elementtobeSearched);

	for(y=0;y<elementNumbers;y++){
		if(inputNumber[y]==elementtobeSearched){
		printf("Number found at the location = %d ", y+1);
		}
	}
	return;
}
