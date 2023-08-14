/*
 * main.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Kamel
 */

#include "stdio.h"
#include "string.h"
#include <math.h>
void reverseArray(int arr[], int size);

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        /*Swap elements at start and end indexes*/
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    fflush(stdout);fflush(stdin);
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ", size);
    int i;
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    /* Reverse the array */
    reverseArray(arr, size);

    printf("output: ");
    int j;
    for (j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
