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

#define PI 3.1415
#define area(r) (PI*(r)*(r))

void main(){
	int radius;
	float area;
	printf("Enter radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &radius);
	area=area(radius);
	printf("Area=%.2f",area);
}
