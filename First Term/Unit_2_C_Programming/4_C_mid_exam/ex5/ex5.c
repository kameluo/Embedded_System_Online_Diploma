/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
#include <math.h>
int countBinaryOnes(int num);

int countBinaryOnes(int num) {
    int count = 0;

    while (num != 0) {
        count += num & 1; /* Add the least significant bit to the count*/
        num >>= 1; /*Right-shift the number to move to the next bit*/
    }
    return count;
}

int main() {
    int number;
    printf("Enter an integer number: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &number);

    int onesCount = countBinaryOnes(number);
    printf("input: %d->output: %d: --->binary of %d is ---- so has %d one's\n", number,onesCount,number , onesCount);

    return 0;
}
