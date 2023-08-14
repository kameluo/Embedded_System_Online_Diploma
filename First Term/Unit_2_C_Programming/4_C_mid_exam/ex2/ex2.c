/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
#include <math.h>
void calSqrt(int x);
void calSqrt(int x){
    double res;
    res = sqrt(x);
    printf (" \n The square root of %d is: %.3lf", x, res);
}

int main()
{
    int x;
    printf (" Enter any number to get the square root: ");
    fflush(stdin);fflush(stdout);
    scanf (" %d", &x);
    fflush(stdin);fflush(stdout);
    calSqrt(x);
	return 0;
}
