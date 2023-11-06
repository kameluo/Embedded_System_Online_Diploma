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
/*Predefined macros*/

/*#define Kerolos_C_Course*/

void main(){
#ifndef Kerolos_C_Course
printf("Keroles_C_Course is not defined\n");
#else
printf("Kerolos_C_Course is defined. So, this line will be added in this C file\n");
#endif
}
