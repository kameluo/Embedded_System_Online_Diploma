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

enum week{sunday, monday, tuesday, wednesday, thursday, friday, saturday};

void main(){
	enum week today;
	today = wednesday;
	printf("Day %d",today+1);
}
