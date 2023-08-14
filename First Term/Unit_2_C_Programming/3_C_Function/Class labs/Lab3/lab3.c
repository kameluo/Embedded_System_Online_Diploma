/*
 * main.c
 *
 *  Created on: Jul 6, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
int printDecrement(int n){
	int i,j;
	for(i=0; i<=n; i++){
		for(j=i;j<=n;j++){
			printf("%d ", j);
		}
		printf("\r\n");
	}
}

void main(void){
	printDecrement(9);


	return;
}
