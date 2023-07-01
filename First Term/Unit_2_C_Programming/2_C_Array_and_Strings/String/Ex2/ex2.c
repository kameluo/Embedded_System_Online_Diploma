/*
 * main.c
 *
 *  Created on: Jun 30, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"

void main(void){
	/* String-HomeWork Ex2 */
	char stringText[30];
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(stringText);

	int i,counter=0;
	for(i=0;i<=30;i++){
		if(stringText[i]=='\0'){
			break;
		}
		counter++;
	}
	printf("Length of string: %d",counter);
	return;
}
