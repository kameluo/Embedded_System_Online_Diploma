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
/*
 *	*px = &x ----> means issue read/write the VALUE of what inside X variable
 *	printf(*px) ----> means issue read the VALUE stored in the pointer px
 *	printf(*px = 5) ----> means issue write a VALUE "5" at in the pointer px
 *	& ---> means address
 * */

/* Passing Arrays and pointers to function: Array passing with pointers */
void Sort(int* values, int nValues);
void Sort(int* values, int nValues){
	int i, j, temp;
	for(i=0;i<nValues-1;i++){
		for(j=i;j<nValues;j++){
			if(values[i]>values[j]){
				temp=values[i];
				values[i]=values[j];
				values[j]=temp;
			}
		}
	}
}
void main(){
	int i, values[5]={89,73,28,94,32};
	Sort(values,5);
	for(i=0;i<5;i++)
		printf("%d\r\n",values[i]);
}
