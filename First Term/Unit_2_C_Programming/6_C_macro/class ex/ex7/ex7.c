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
/*start function: function used to generate other functions*/
#define FUNCTION(name,a) int fun_##name(int x) {return (a)*x;}

FUNCTION(quadruple, 4)/*(quadruple=13"from the function inside the main" ,x=4)*/
FUNCTION(double, 2)/*(double=21"from the function inside the main" ,x=2)*/
/*end generating function*/

#undef FUNCTION
#define FUNCTION 34
#define OUTPUT(a) printf(#a)

void main(){
	printf("quadruple(13): %d\n", fun_quadruple(13));
	printf("double(21): %d\n", fun_double(21));
	printf("%d\n", FUNCTION);
	OUTPUT(Keroles);
}
