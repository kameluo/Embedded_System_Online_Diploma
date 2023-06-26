/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){

	int i=0,j=1;
	for(j; j<=10 ;j++){
		for(i;i<10 ;i++){
			printf("%d ",i);
		}
		i=j;
		printf("\n");
	}
	return;
}
