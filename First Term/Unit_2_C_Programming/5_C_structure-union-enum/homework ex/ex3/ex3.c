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

typedef struct complex{
	float real;
	float img;
}complex;

complex add(complex n1, complex n2);

void main(){
	complex n1, n2, temp;
	printf("For 1st complex number\n");
	printf("Enter real number and imaginary respectively:");
	fflush(stdin);fflush(stdout);
	scanf("%f%f", &n1.real,&n1.img);
	fflush(stdin);fflush(stdout);
	printf("\nFor 2nd complex number\n");
	printf("Enter real and imaginary respectively:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f%f", &n2.real,&n2.img);
	temp=add(n1,n2);
	printf("Sum=%.1f+%.1fi",temp.real,temp.img);

}
complex add(complex n1, complex n2){
	complex temp;
	temp.real=n1.real+n2.real;
	temp.img=n1.img+n2.img;
	return (temp);
}
