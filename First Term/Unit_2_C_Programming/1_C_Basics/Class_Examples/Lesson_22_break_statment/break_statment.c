/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "conio.h"
void main(void){

	int i;

	for(i=0 ;i<10 ;i++){
		if(i == 5){
			printf("\nComming out of the for loop");
			break;
		}
		printf("%d ",i);
	}
	return;
}
