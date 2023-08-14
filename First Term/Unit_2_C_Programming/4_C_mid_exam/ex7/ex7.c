/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
#include <math.h>


int sumOfNumbers(int n) {
    if (n == 1) {
        return 1; /*Base case: when n is 1, return 1*/
    } else {
        return n + sumOfNumbers(n - 1); /*Recursive case: add n to the sum of numbers from 1 to (n-1)*/
    }
}

int main() {
    int n = 100;
    int sum = sumOfNumbers(n);
    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
