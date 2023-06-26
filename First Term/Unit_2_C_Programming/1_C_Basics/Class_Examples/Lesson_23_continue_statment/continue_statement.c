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
		if(i == 5 || i==6){
			printf("\nSkipping %d from display using continue statement \n", i);
			continue;
		}
		printf("%d ",i);
	}
	return;
}
