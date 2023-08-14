/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
void addNumber(char n[],int c,int sum,int t);
void addNumber(char n[],int c,int sum,int t){
	   while(n[c]!='\0') {
		  t=n[c]-'0'; /* Converting character to integer */
		  sum=sum+t;
		  c++;
	   }
	   printf("input %s ->output %d\n", n, sum);
}
	int c, sum, t;
	char n[20];
int main()
{
	sum=c=t=0;
	printf("Input number:");
	fflush(stdout);fflush(stdin);
	scanf("%s", n);
	addNumber(n, c, sum, t);
	return 0;
}
