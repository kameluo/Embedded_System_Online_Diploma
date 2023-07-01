/*
 * main.c
 *
 *  Created on: Jun 30, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"

void main(void){
	/* Array-HomeWork Ex5 */
	char stringText[30];
	char searchChar;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(stringText);

	fflush(stdin);fflush(stdout);
	printf("Enter the character to find frequently: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&searchChar);

	int i,counter=0;
	for(i=0;i<strlen(stringText);i++){
		if(stringText[i]==searchChar){
			counter++;
		}
	}
	printf("%d\r\n", counter);
	printf("frequency of %c = %d", searchChar, counter);
	return;
}
