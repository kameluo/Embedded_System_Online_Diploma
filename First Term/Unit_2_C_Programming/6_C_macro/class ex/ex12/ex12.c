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
/*Pragma
 *
 * #pragma startup [priority]
 * #pragma exit [priority]
 *
 * For user priority varies from 64 to 255
 * Default priority is 100
 * */


void india();
void usa();
/*
*#pragma startup india 105
*#pragma startup usa
*#pragma exit usa
*#pragma exit india 105
*
*Note: pragma startup and exit do NOT work becuse they are not supported by the GCC
*https://www.geeksforgeeks.org/pragma-directive-in-c-c/
*
*This happens because GCC does not support #pragma startup or exit.
*You should use instead:
*__attribute__((constructor))
*__attribute__((constructor))
*like in the example
*
*/

void __attribute__((constructor)) india();
void __attribute__((constructor)) usa();

void main(){
	printf("\n I am in main");
	/*getchar();*/
}
void india(){
	printf("\n I am in india");
	/*getchar();*/
}
void usa(){
	printf("\n I am in usa");
	/*getchar();*/
}
