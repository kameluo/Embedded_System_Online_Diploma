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
	unsigned char delta_cts:1;
	unsigned char delta_dsr:1;
	unsigned char tr_edge:1;
	unsigned char delta_rec:1;
	unsigned char cts:1;
	unsigned char dsr:1;
	unsigned char ring:1;
	unsigned char rec_line:1;
} status;

void main(){
	status.cts=1;
	printf("size of structure= %d",sizeof(status));
}
