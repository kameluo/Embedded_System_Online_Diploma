/*
 * main.c
 *
 *  Created on: Jun 25, 2023
 *      Author: Kamel
 */

#include "stdio.h"
void main(void){
	/*Home_work-2-Ex5*/
	char a;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&a);
	fflush(stdin);
	fflush(stdout);

    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')){
        printf("%c is an alphabet.", a);
    }else{
        printf("%c is not an alphabet.", a);
    }
	return;
}
