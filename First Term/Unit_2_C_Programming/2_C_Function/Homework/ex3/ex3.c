/*
 * main.c
 *
 *  Created on: Jul 8, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"

void reversedFunction();

int main(){
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	reversedFunction();
	return 0;
}

void reversedFunction(){
	char sentence;
	scanf("%c", &sentence);
	if(sentence !='\n'){
		reversedFunction();
		printf("%c",sentence);
	}
}
