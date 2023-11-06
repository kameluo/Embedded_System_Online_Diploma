/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
#include <math.h>
#include "conio.h"
/*
 *	*px = &x ----> means issue read/write the VALUE of what inside X variable
 *	printf(*px) ----> means issue read the VALUE stored in the pointer px
 *	printf(*px = 5) ----> means issue write a VALUE "5" at in the pointer px
 *	& ---> means address
 * */

/* Pointer to function */

/* prototype */
void check(char *a, char *b, int (* cmp)(const char *, const char *));

void main(){
	char s1[80],s2[80];
	int (*p)(const char *, const char *); /* function pointer */
	p=strcmp;
	printf("Enter two string.\n");
	fflush(stdin);fflush(stdout);
	gets(s1);
	fflush(stdin);fflush(stdout);
	gets(s2);
	check(s1, s2, p);/* pass address of strcmp via p */
}

void check(char *a, char *b, int (* cmp)(const char *, const char *)){
	printf("Testing for equality.\n");
	if(!(*cmp)(a, b)) printf("Equal");
	else printf("Not Equal");
}
