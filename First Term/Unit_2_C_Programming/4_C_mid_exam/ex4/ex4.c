/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
#include <math.h>

int reverseDigits(int num);
int reverseDigits(int num) {
    char numStr[20];
    sprintf(numStr, "%d", num);/*Convert the number to a string*/
    int len = strlen(numStr);
    int start = 0;
    int end = len - 1;

    while (start < end) {
        char temp = numStr[start];
        numStr[start] = numStr[end];
        numStr[end] = temp;
        start++;
        end--;
    }
    int reversed;
    sscanf(numStr, "%d", &reversed);/*Convert the reversed string back to an integer*/
    return reversed;
}

int main() {
    int number;
    printf("Enter a number to reverse its digits: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &number);

    int reversedNumber = reverseDigits(number);
    printf("input: %d->output: %d\n", number,reversedNumber);

    return 0;
}
