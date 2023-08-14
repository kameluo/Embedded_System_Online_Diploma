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

enum designFlags{
	BOLD=1,
	ITALIC=2,
	UNDERLINE=4
};

void main(){
	int myDesign= BOLD | UNDERLINE;
	printf("%d ",myDesign);
}
