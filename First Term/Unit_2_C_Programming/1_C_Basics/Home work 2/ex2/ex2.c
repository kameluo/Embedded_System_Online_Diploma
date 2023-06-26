/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-2-Ex2*/
	char a;
	printf("\nEnter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&a);
	fflush(stdin);
	fflush(stdout);
	switch (a){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			{
			printf("\n%c is a vowel.",a);
			break;
			}
		default:
			{
			printf("\n%c is a consonant.",a);
			break;
			}
	}
	return;
}
