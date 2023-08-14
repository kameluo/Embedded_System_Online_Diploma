/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */
/*
 * Using structures with function
 * */
#include "stdio.h"
#include "string.h"
#include <math.h>
#include "conio.h"

struct SComplex{
	double m_R; /*Real numbers*/
	double m_I; /*Imaginary number*/
};

struct SComplex ReadComplex(char name[]){
	struct SComplex C;
	printf("Enter %s complex value (Ex: 5, -3):", name);
	fflush(stdin);fflush(stdout);
	scanf("%lf, %lf", &C.m_R, &C.m_I);
	return C;
}

struct SComplex AddComplex(struct SComplex A, struct SComplex B){
	struct SComplex C;
	C.m_R=A.m_R + B.m_R;
	C.m_I=A.m_I + B.m_I;
	return C;
}

void PrintComplex(char name[], struct SComplex C){
	printf("%s = (%lf) + j (%lf)\r\n", name, C.m_R, C.m_I);
}

void main() {
	struct SComplex X, Y, Z;
	X=ReadComplex("X");
	Y=ReadComplex("Y");
	Z=AddComplex(X, Y);
	PrintComplex("Z", Z);
}
