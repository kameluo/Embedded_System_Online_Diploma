/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-1-Ex5*/
	char a;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &a);
	fflush(stdin);
	fflush(stdout);
	/*
	 * %c is used to present character
	 * %i is used to present integer, but in this case presents the ASCII number of letter G
	 * */
	printf("\r\nASCII value of %c: %i",a, a);

	return;
}
