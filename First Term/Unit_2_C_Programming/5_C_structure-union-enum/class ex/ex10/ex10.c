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

enum suit{
	club=0,
	diamond=10,
	hearts=20,
	spades=3
} card;

void main(){
	card=club;
	printf("Size of enum variable= %d bytes",sizeof(card));
}
