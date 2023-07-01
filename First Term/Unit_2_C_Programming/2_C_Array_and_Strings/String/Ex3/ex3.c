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
	printf("Enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(stringText);

	fflush(stdin);fflush(stdout);
	int i;
	printf("Reverse string is :");
	for(i=strlen(stringText); i>0; i--){
		printf("%c",stringText[i-1]);
	}
	return;
}
