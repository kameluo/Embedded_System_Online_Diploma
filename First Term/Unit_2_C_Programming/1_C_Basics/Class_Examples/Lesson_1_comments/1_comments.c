/*
 * main.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Kamel
 */

#include "stdio.h"

void main(){
	double temperature;
	/* Supply the temperature in Fahrenheit */

	printf("Enter the temperature in Fahrenheit : \r\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%lf", &temperature);

	/* Convert temperature from
	   Fahrenheit to Celsius*/
	temperature = (temperature - 32.0) * 5.0/9.0;

	/*print the results*/
	printf("The temperature in Celsius is %lf\r\n",temperature);
}
