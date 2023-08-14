/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
#include <math.h>
void printPrimesInRange(int start, int end);
int isPrime(int num);

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    int i;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

void printPrimesInRange(int start, int end) {
    printf("input:n1=%d,n2=%d->output:", start, end);
    int num;
    for (num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }

    printf("\n");
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &start);

    printf("Enter the ending number: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &end);

    printPrimesInRange(start, end);

    return 0;
}
