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

struct SDistance{
	int feet;
	float inch;
}d1,d2,sum;

void main(){
	printf("Enter information for 1st distance\n");
	printf("Enter feet:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &d1.feet);
	printf("Enter inch:");
	fflush(stdin);fflush(stdout);
	scanf("%f", &d1.inch);
	fflush(stdin);fflush(stdout);

	printf("Enter information for 2st distance\n");
	printf("Enter feet:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &d2.feet);
	printf("Enter inch:");
	fflush(stdin);fflush(stdout);
	scanf("%f", &d2.inch);
	fflush(stdin);fflush(stdout);

	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;

	/* If inch is greater than 12, change it to feet */
	if(sum.inch>12.0){
		sum.inch=sum.inch-12.0;
		++sum.feet;
	}
	printf("\nSum of distance=%d\'-%.1f\"",sum.feet,sum.inch);

}
