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
	int i,k,j;
	int inputNumber[10];
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);

	int x;
	for(x=0;x<i;x++){
		scanf("%d", &inputNumber[x]);
	}

	int y;
	for(y=0;y<i;y++){
		printf("%d ", inputNumber[y]);
	}

	printf("\r\nEnter no of elements to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&k);

	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&j);

	int z;
	for(z=k-1;z>=j;z--){
		inputNumber[z+1]=inputNumber[z];
	}
	inputNumber[j-1]=k;


	for(y=0;y<k;y++){
		printf("%d ", inputNumber[y]);
	}
	return;
}
