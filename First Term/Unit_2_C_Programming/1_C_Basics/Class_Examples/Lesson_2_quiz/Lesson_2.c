/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"

void main(){
	int x=5;
	float y=2.0;
	if (x/y==2)
		printf("int/float >> int \n");
	else if(x/y==2.5)
		printf("int/float >> float \n");
}
