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

union job{
	char name[32];
	float salary;
	int worker_no;
}u;

struct job1{
	char name[32];
	float salary;
	int worker_no;
}s;

void main(){
	printf("size of union= %d ",sizeof(u));
	printf("\nsize of structure= %d",sizeof(s));
}
