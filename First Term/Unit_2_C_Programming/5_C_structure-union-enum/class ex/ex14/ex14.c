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

union unionJob{
	char naame[32];
	float salary;
	int workNo;
} uJob;

struct structJob{
	char name[32];
	float salary;
	int workNo;
} sJob;

void main(){
	printf("size of union= %d\n",sizeof(uJob));
	printf("size of union= %d\n",sizeof(sJob));

}
