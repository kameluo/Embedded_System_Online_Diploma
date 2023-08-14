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

struct statuts_type{
	unsigned int delta_cts:1;
	unsigned int delta_dsr:1;
	unsigned int tr_edge:1;
	unsigned int delta_rec:1;
	unsigned int cts:1;
	unsigned int dsr:1;
	unsigned int ring:1;
	unsigned int rec_line:1;
} status;

void main(){
	status.cts=1;
	printf("size of structure= %d",sizeof(status));
}
