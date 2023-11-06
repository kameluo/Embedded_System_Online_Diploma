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

void main(){
	long long int rand_address=0x00000000FFFFAAAA;
	printf("rand_address=%llx \n",rand_address);

	char* Paddress1= 0x00000000FFFFAAAA;
	printf("Paddress1=%llx \n",Paddress1);


	char* Paddress2= (char*)0x00000000FFFFAAAA;
	printf("Paddress2=%llx \n",Paddress2);
}
