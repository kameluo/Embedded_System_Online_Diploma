/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"

void main(void){
	unsigned char x=0;
	printf("Variable width control: \n");
	printf("right-justified variable width: '%*c'\n", 5, 'x');
	printf("left-justified variable width: '%*c'\n", -5, 'x');

	int r= printf("Strings:\n");
	printf("(the last printf printed %d charachters)\n", r);

	const char* s= "Hello";
	printf("\t[%10s]\n\t[%-10s]\n\t[%*s]\n\t[%-10.*s]\n\t[%-*.*s]\n", s, s, 10, s, 4, s, 10, 4, s);

	printf("Characters:\t%c %%\n", 65);

	printf("Integers\n");
	printf("Decimal:\t%i %d %.6i %i %0.i %+i %u\n", 1, 2, 3, 0,0,4,-1);
	printf("Hexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6);
	printf("Octal:\t%o %#o %#o\n", 10, 10, 4);

	printf("Floating point\n");
	printf("Rounding:\t%f %.0f %0.32f\n", 1.5, 1.5, 1.5);
	printf("Padding:\t%05.f %.2f %5.2f\n", 1.5, 1.5, 1.5);
	printf("Scientific:\t%E.f %e\n", 1.5, 1.5);
	printf("Special values:\t 1/0=%g\n", 0.0/0.0, 1.0/0.0);

	printf("C_trick:\t %d %d %d \n",++x, x, x++);
	printf("C_trick:\t %d %d %d \n",x++, ++x, x);
	return;
}
